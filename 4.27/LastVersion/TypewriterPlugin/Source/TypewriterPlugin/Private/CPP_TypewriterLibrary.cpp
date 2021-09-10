// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_TypewriterLibrary.h"
#include "TypewriterTextComponent.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"
#include "GameFramework/GameModeBase.h"


UCPP_TypewriterLibrary::UCPP_TypewriterLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UCPP_TypewriterLibrary::PrintText(UObject*Object,const FText Text,const float CharsPerSec,const float PunctuationDelay,USoundBase*Sound,UTextBlock*TextBlock)
{
	if(UWorld* World = GEngine->GetWorldFromContextObjectChecked(Object))
	{
		if(AGameModeBase*GameMode = UGameplayStatics::GetGameMode(World))
		{
			
			if(UActorComponent*TextComponent=GameMode->GetComponentByClass(UTypewriterTextComponent::StaticClass()))
				{
				        UTypewriterTextComponent*Component=Cast<UTypewriterTextComponent>(TextComponent);
				        Component->StartTypewriting(Text,TextBlock,CharsPerSec,PunctuationDelay,Sound);
			    }
			else{
			    	UActorComponent*TextGMComponent = GameMode->AddComponentByClass(UTypewriterTextComponent::StaticClass(),false,FTransform::Identity,false);
			    	UTypewriterTextComponent*Component=Cast<UTypewriterTextComponent>(TextGMComponent);
			    	Component->StartTypewriting(Text,TextBlock,CharsPerSec,PunctuationDelay,Sound);
			    }
		}
	}
}

void UCPP_TypewriterLibrary::StopPrinting(UObject* Object, float Acceleration)
{
	if(UWorld* World = GEngine->GetWorldFromContextObjectChecked(Object))
	{
		if(AGameModeBase*GameMode = UGameplayStatics::GetGameMode(World))
		{
			if(UActorComponent*TextComponent=GameMode->GetComponentByClass(UTypewriterTextComponent::StaticClass()))
			{
				UTypewriterTextComponent*Component=Cast<UTypewriterTextComponent>(TextComponent);
				Component->StopPrinting(Acceleration);
		    }
	    }
    }
}

void UCPP_TypewriterLibrary::PrintRichText(UObject* Object, const FText Text, const float CharsPerSec,
	const float PunctuationDelay,const int32 Accuracy, USoundBase* Sound, URichTextBlock* RichTextBlock)
{
	if(UWorld* World = GEngine->GetWorldFromContextObjectChecked(Object))
	{
		if(AGameModeBase*GameMode = UGameplayStatics::GetGameMode(World))
		{
			
			if(UActorComponent*TextComponent=GameMode->GetComponentByClass(UTypewriterTextComponent::StaticClass()))
			{
				UTypewriterTextComponent*Component=Cast<UTypewriterTextComponent>(TextComponent);
				Component->StartRichTypewriting(Text,RichTextBlock,CharsPerSec,PunctuationDelay,Sound,Accuracy);
			}
			else{
				UActorComponent*TextGMComponent = GameMode->AddComponentByClass(UTypewriterTextComponent::StaticClass(),false,FTransform::Identity,false);
				UTypewriterTextComponent*Component=Cast<UTypewriterTextComponent>(TextGMComponent);
				Component->StartRichTypewriting(Text,RichTextBlock,CharsPerSec,PunctuationDelay,Sound,Accuracy);
			}
		}
	}
}

