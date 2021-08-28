// Fill out your copyright notice in the Description page of Project Settings.

#include "TypewriterTextComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Kismet/KismetTextLibrary.h"
#include "Components/TextBlock.h"
#include "Components/RichTextBlock.h"


// Sets default values for this component's properties
UTypewriterTextComponent::UTypewriterTextComponent():isActiveWriting(false),Acceleration(1.f),bInAceleration(false)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UTypewriterTextComponent::StartTypewriting(const FText InText,UTextBlock*InTextBlock,
	const float InCharsPerSec, const float InPunctuationDel, USoundBase*InSounds)
{
    if(isActiveWriting)
    {
    	StopTimer(false,true);
    	if(IsValid(TextBlock)) TextBlock->SetText(Text);
    	if(IsValid(RichText)) RichText->SetText(Text);
    	isActiveWriting=false;
    }
	bInAceleration=false;
	Acceleration=1.f;
	isActiveWriting=true;
	isRichText=false;
	Sound=InSounds;
	Text=InText;
	TextBlock=InTextBlock;
	CharsPerSecond=1/InCharsPerSec;
	PunctuationDel=InPunctuationDel;
	CharNum=0;
    ChachedString=Text.ToString();
	Len=ChachedString.Len()-1;
	if(Len==-1)
	{
		if(IsValid(TextBlock)) TextBlock->SetText(Text);
		return;
	}
	StartTimer();
}


void UTypewriterTextComponent::PrintText()
{
	    FString LeftString= ChachedString.Left(CharNum);
	    FString LastChar = LeftString.Right(1);
	    if(isRichText)
	    {
		if(IsValid(RichText)) RichText->SetText(UKismetTextLibrary::Conv_StringToText(LeftString.Append(FString(TEXT("<I>")))
			.Append(ChachedString.RightChop(CharNum+1).Left(Acurracy)).Append(FString(TEXT("</>")))));
	   
	    }else
	    	{	
	    	if(IsValid(TextBlock)) TextBlock->SetText(UKismetTextLibrary::Conv_StringToText(LeftString));
	    	else StopTimer(false,true);
	        }
		CharNum++;
		if(CharNum>Len) StopTimer(false,true);
	    else if(PunctuationDel>0.0f && LastChar =="!" || LastChar=="." || LastChar=="," || LastChar=="?")
		  {
		   StopTimer(true,false);
		   PunctuationDelay();
		  }
}


void UTypewriterTextComponent::PunctuationDelay()
{
	GetWorld()->GetTimerManager().SetTimer(TimerDelay,this,&UTypewriterTextComponent::StartTimer,
		PunctuationDel/Acceleration, false,-1);
}

void UTypewriterTextComponent::StartTimer()
{   
	GetWorld()->GetTimerManager().SetTimer(TimerHandle,this,&UTypewriterTextComponent::PrintText,
		CharsPerSecond/Acceleration,true,0);
	
	if(AudioComponent!=nullptr)
	{
		if(AudioComponent->bIsPaused)
		{
		AudioComponent->SetPaused(false);
		return;
		}
	}
	if(Sound!=nullptr) AudioComponent=UGameplayStatics::SpawnSound2D(this,Sound,1.f,1.f,
	0,nullptr,false,true);
}

void UTypewriterTextComponent::StopTimer(bool Pause,bool Destroy)
{   
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	TimerHandle.Invalidate();
	if(AudioComponent!=nullptr)
	{
        if(Destroy)
        {
        AudioComponent->Deactivate();
	    return;
        }
	if(AudioComponent->IsActive())
			AudioComponent->SetPaused(Pause);
}
    }

void UTypewriterTextComponent::StopPrinting(float InAcceleration)
{
   
	
	GetWorld()->GetTimerManager().ClearTimer(TimerDelay);
	TimerDelay.Invalidate();
	
	if(!bInAceleration && InAcceleration>1.f)
	{
		bInAceleration=true;
		Acceleration=InAcceleration;
		StopTimer(true,false);
		StartTimer();
		return;
	}
	StopTimer(false,true);
    
	if(!isRichText)
	{
	    if(IsValid(TextBlock)) TextBlock->SetText(Text);
	} 
	else
	{
	    if(IsValid(RichText)) RichText->SetText(Text);
	}

}



void UTypewriterTextComponent::StartRichTypewriting(const FText InText, URichTextBlock*InRichTextBlockTextBlock,const float InCharsPerSec,
		const float InPunctuationDel, USoundBase*InSounds,  int32 InAccuracy)
{
	if(isActiveWriting)
	{
		StopTimer(false,true);
		if(IsValid(TextBlock)) TextBlock->SetText(Text);
		if(IsValid(RichText)) RichText->SetText(Text);
		isActiveWriting=false;
	}
	isActiveWriting=true;
	bInAceleration=false;
	Acurracy=InAccuracy;
	Acceleration=1.f;
	isRichText=true;
	Sound=InSounds;
	Text=InText;
	RichText=InRichTextBlockTextBlock;
	CharsPerSecond=1/InCharsPerSec;
	PunctuationDel=InPunctuationDel;
	CharNum=0;
	ChachedString=Text.ToString();
	Len=ChachedString.Len()-1;
	if(Len==-1)
	{
		if(IsValid(TextBlock)) TextBlock->SetText(Text);
		return;
	}
	StartTimer();
}