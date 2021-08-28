// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TypewriterTextComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UTypewriterTextComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTypewriterTextComponent();

private:

	UPROPERTY()
	class URichTextBlock*RichText;
	UPROPERTY()
	bool isActiveWriting;
	UPROPERTY()
	FTimerHandle TimerHandle;
	UPROPERTY()
	FTimerHandle TimerDelay;
	UPROPERTY()
	FText Text;
	UPROPERTY()
	class UTextBlock*TextBlock;
	UPROPERTY()
	float CharsPerSecond;
	UPROPERTY()
	float PunctuationDel;
	UPROPERTY()
    int32 CharNum;
	UPROPERTY()
	int32 Len;
	UPROPERTY()
	USoundBase*Sound;
	UPROPERTY()
	class UAudioComponent*AudioComponent;
	UPROPERTY()
	bool isRichText;
	UPROPERTY()
	int32 Acurracy;
	UPROPERTY()
	float Acceleration;
	UPROPERTY()
	bool bInAceleration;
	UPROPERTY()
	FString ChachedString;
	
	
	UFUNCTION()
	void StartTimer();
	UFUNCTION()
	void StopTimer(bool Pause,bool Destroy);
	UFUNCTION()
	void PrintText();
	UFUNCTION()
	void PunctuationDelay();
	
    
public:

	UFUNCTION()
	void StartTypewriting(const FText InText, UTextBlock*InTextBlock,const float InCharsPerSec,
		const float InPunctuationDel, USoundBase*InSound);
	
	UFUNCTION()
	void StopPrinting(float InAcceleration);

	UFUNCTION()
	void StartRichTypewriting(const FText InText, URichTextBlock*InRichTextBlockTextBlock,const float InCharsPerSec,
		const float InPunctuationDel, USoundBase*InSound, int32 InAccuracy);
};
