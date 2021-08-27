// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypewriterPlugin/Private/TypewriterTextComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypewriterTextComponent() {}
// Cross Module References
	TYPEWRITERPLUGIN_API UClass* Z_Construct_UClass_UTypewriterTextComponent_NoRegister();
	TYPEWRITERPLUGIN_API UClass* Z_Construct_UClass_UTypewriterTextComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TypewriterPlugin();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTypewriterTextComponent::execStartRichTypewriting)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_GET_OBJECT(URichTextBlock,Z_Param_InRichTextBlockTextBlock);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCharsPerSec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPunctuationDel);
		P_GET_OBJECT(USoundBase,Z_Param_InSound);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAccuracy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRichTypewriting(Z_Param_InText,Z_Param_InRichTextBlockTextBlock,Z_Param_InCharsPerSec,Z_Param_InPunctuationDel,Z_Param_InSound,Z_Param_InAccuracy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypewriterTextComponent::execStopPrinting)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAcceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPrinting(Z_Param_InAcceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypewriterTextComponent::execStartTypewriting)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_GET_OBJECT(UTextBlock,Z_Param_InTextBlock);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCharsPerSec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPunctuationDel);
		P_GET_OBJECT(USoundBase,Z_Param_InSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTypewriting(Z_Param_InText,Z_Param_InTextBlock,Z_Param_InCharsPerSec,Z_Param_InPunctuationDel,Z_Param_InSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypewriterTextComponent::execPunctuationDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PunctuationDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypewriterTextComponent::execPrintText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypewriterTextComponent::execStopTimer)
	{
		P_GET_UBOOL(Z_Param_Pause);
		P_GET_UBOOL(Z_Param_Destroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTimer(Z_Param_Pause,Z_Param_Destroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypewriterTextComponent::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	void UTypewriterTextComponent::StaticRegisterNativesUTypewriterTextComponent()
	{
		UClass* Class = UTypewriterTextComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintText", &UTypewriterTextComponent::execPrintText },
			{ "PunctuationDelay", &UTypewriterTextComponent::execPunctuationDelay },
			{ "StartRichTypewriting", &UTypewriterTextComponent::execStartRichTypewriting },
			{ "StartTimer", &UTypewriterTextComponent::execStartTimer },
			{ "StartTypewriting", &UTypewriterTextComponent::execStartTypewriting },
			{ "StopPrinting", &UTypewriterTextComponent::execStopPrinting },
			{ "StopTimer", &UTypewriterTextComponent::execStopTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypewriterTextComponent_PrintText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_PrintText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextComponent_PrintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextComponent, nullptr, "PrintText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_PrintText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_PrintText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypewriterTextComponent_PrintText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTypewriterTextComponent_PrintText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypewriterTextComponent_PunctuationDelay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_PunctuationDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextComponent_PunctuationDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextComponent, nullptr, "PunctuationDelay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_PunctuationDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_PunctuationDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypewriterTextComponent_PunctuationDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTypewriterTextComponent_PunctuationDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics
	{
		struct TypewriterTextComponent_eventStartRichTypewriting_Parms
		{
			FText InText;
			URichTextBlock* InRichTextBlockTextBlock;
			float InCharsPerSec;
			float InPunctuationDel;
			USoundBase* InSound;
			int32 InAccuracy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRichTextBlockTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRichTextBlockTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCharsPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InCharsPerSec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPunctuationDel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPunctuationDel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSound;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAccuracy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartRichTypewriting_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InRichTextBlockTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InRichTextBlockTextBlock = { "InRichTextBlockTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartRichTypewriting_Parms, InRichTextBlockTextBlock), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InRichTextBlockTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InRichTextBlockTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InCharsPerSec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InCharsPerSec = { "InCharsPerSec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartRichTypewriting_Parms, InCharsPerSec), METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InCharsPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InCharsPerSec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InPunctuationDel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InPunctuationDel = { "InPunctuationDel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartRichTypewriting_Parms, InPunctuationDel), METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InPunctuationDel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InPunctuationDel_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartRichTypewriting_Parms, InSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InAccuracy = { "InAccuracy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartRichTypewriting_Parms, InAccuracy), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InRichTextBlockTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InCharsPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InPunctuationDel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::NewProp_InAccuracy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextComponent, nullptr, "StartRichTypewriting", nullptr, nullptr, sizeof(TypewriterTextComponent_eventStartRichTypewriting_Parms), Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypewriterTextComponent_StartTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextComponent_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextComponent, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypewriterTextComponent_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTypewriterTextComponent_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics
	{
		struct TypewriterTextComponent_eventStartTypewriting_Parms
		{
			FText InText;
			UTextBlock* InTextBlock;
			float InCharsPerSec;
			float InPunctuationDel;
			USoundBase* InSound;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCharsPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InCharsPerSec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPunctuationDel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPunctuationDel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartTypewriting_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InTextBlock = { "InTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartTypewriting_Parms, InTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InCharsPerSec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InCharsPerSec = { "InCharsPerSec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartTypewriting_Parms, InCharsPerSec), METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InCharsPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InCharsPerSec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InPunctuationDel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InPunctuationDel = { "InPunctuationDel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartTypewriting_Parms, InPunctuationDel), METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InPunctuationDel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InPunctuationDel_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStartTypewriting_Parms, InSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InCharsPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InPunctuationDel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::NewProp_InSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextComponent, nullptr, "StartTypewriting", nullptr, nullptr, sizeof(TypewriterTextComponent_eventStartTypewriting_Parms), Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics
	{
		struct TypewriterTextComponent_eventStopPrinting_Parms
		{
			float InAcceleration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::NewProp_InAcceleration = { "InAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypewriterTextComponent_eventStopPrinting_Parms, InAcceleration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::NewProp_InAcceleration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextComponent, nullptr, "StopPrinting", nullptr, nullptr, sizeof(TypewriterTextComponent_eventStopPrinting_Parms), Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics
	{
		struct TypewriterTextComponent_eventStopTimer_Parms
		{
			bool Pause;
			bool Destroy;
		};
		static void NewProp_Pause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pause;
		static void NewProp_Destroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Destroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::NewProp_Pause_SetBit(void* Obj)
	{
		((TypewriterTextComponent_eventStopTimer_Parms*)Obj)->Pause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::NewProp_Pause = { "Pause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TypewriterTextComponent_eventStopTimer_Parms), &Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::NewProp_Pause_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::NewProp_Destroy_SetBit(void* Obj)
	{
		((TypewriterTextComponent_eventStopTimer_Parms*)Obj)->Destroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::NewProp_Destroy = { "Destroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TypewriterTextComponent_eventStopTimer_Parms), &Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::NewProp_Destroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::NewProp_Pause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::NewProp_Destroy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextComponent, nullptr, "StopTimer", nullptr, nullptr, sizeof(TypewriterTextComponent_eventStopTimer_Parms), Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypewriterTextComponent_StopTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTypewriterTextComponent_StopTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTypewriterTextComponent_NoRegister()
	{
		return UTypewriterTextComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTypewriterTextComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RichText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isActiveWriting_MetaData[];
#endif
		static void NewProp_isActiveWriting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isActiveWriting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerDelay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CharsPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunctuationDel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PunctuationDel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CharNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Len_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Len;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isRichText_MetaData[];
#endif
		static void NewProp_isRichText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isRichText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acurracy_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Acurracy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInAceleration_MetaData[];
#endif
		static void NewProp_bInAceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChachedString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChachedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypewriterTextComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TypewriterPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypewriterTextComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypewriterTextComponent_PrintText, "PrintText" }, // 1232373038
		{ &Z_Construct_UFunction_UTypewriterTextComponent_PunctuationDelay, "PunctuationDelay" }, // 1936465679
		{ &Z_Construct_UFunction_UTypewriterTextComponent_StartRichTypewriting, "StartRichTypewriting" }, // 3293716664
		{ &Z_Construct_UFunction_UTypewriterTextComponent_StartTimer, "StartTimer" }, // 3360950564
		{ &Z_Construct_UFunction_UTypewriterTextComponent_StartTypewriting, "StartTypewriting" }, // 4270735716
		{ &Z_Construct_UFunction_UTypewriterTextComponent_StopPrinting, "StopPrinting" }, // 3217624102
		{ &Z_Construct_UFunction_UTypewriterTextComponent_StopTimer, "StopTimer" }, // 2034503282
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TypewriterTextComponent.h" },
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_RichText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_RichText = { "RichText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, RichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_RichText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_RichText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isActiveWriting_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isActiveWriting_SetBit(void* Obj)
	{
		((UTypewriterTextComponent*)Obj)->isActiveWriting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isActiveWriting = { "isActiveWriting", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTypewriterTextComponent), &Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isActiveWriting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isActiveWriting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isActiveWriting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerDelay_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerDelay = { "TimerDelay", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, TimerDelay), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, Text), METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TextBlock_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharsPerSecond_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharsPerSecond = { "CharsPerSecond", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, CharsPerSecond), METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharsPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_PunctuationDel_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_PunctuationDel = { "PunctuationDel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, PunctuationDel), METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_PunctuationDel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_PunctuationDel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharNum_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharNum = { "CharNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, CharNum), METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Len_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Len = { "Len", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, Len), METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Len_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Len_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isRichText_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isRichText_SetBit(void* Obj)
	{
		((UTypewriterTextComponent*)Obj)->isRichText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isRichText = { "isRichText", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTypewriterTextComponent), &Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isRichText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isRichText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isRichText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acurracy_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acurracy = { "Acurracy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, Acurracy), METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acurracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acurracy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acceleration_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, Acceleration), METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_bInAceleration_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_bInAceleration_SetBit(void* Obj)
	{
		((UTypewriterTextComponent*)Obj)->bInAceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_bInAceleration = { "bInAceleration", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTypewriterTextComponent), &Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_bInAceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_bInAceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_bInAceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_ChachedString_MetaData[] = {
		{ "ModuleRelativePath", "Private/TypewriterTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_ChachedString = { "ChachedString", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTypewriterTextComponent, ChachedString), METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_ChachedString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_ChachedString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypewriterTextComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_RichText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isActiveWriting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TimerDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_TextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_PunctuationDel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_CharNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Len,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_isRichText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acurracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_bInAceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextComponent_Statics::NewProp_ChachedString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypewriterTextComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypewriterTextComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypewriterTextComponent_Statics::ClassParams = {
		&UTypewriterTextComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTypewriterTextComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTypewriterTextComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypewriterTextComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTypewriterTextComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTypewriterTextComponent, 1222188166);
	template<> TYPEWRITERPLUGIN_API UClass* StaticClass<UTypewriterTextComponent>()
	{
		return UTypewriterTextComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTypewriterTextComponent(Z_Construct_UClass_UTypewriterTextComponent, &UTypewriterTextComponent::StaticClass, TEXT("/Script/TypewriterPlugin"), TEXT("UTypewriterTextComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypewriterTextComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
