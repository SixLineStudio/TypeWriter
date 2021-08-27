// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPP_TypewriterLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UCPP_TypewriterLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "Object",HideSelfPin,CharsPerSec=10.f,PunctuationDelay=0.5f), Category = "Typewriter")
	static void PrintText(UObject*Object,const FText Text,const float CharsPerSec,const float PunctuationDelay, USoundBase*Sound,class UTextBlock*TextBlock);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "Object",HideSelfPin,CharsPerSec=10.f,PunctuationDelay=0.5f,Accuracy=10), Category = "Typewriter")
	static void PrintRichText(UObject*Object,const FText Text,const float CharsPerSec,const float PunctuationDelay,
		const int32 Accuracy, USoundBase*Sound,class URichTextBlock*RichTextBlock);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "Object",HideSelfPin), Category = "Typewriter")
	static void StopPrinting(UObject*Object, float Acceleration);
};
