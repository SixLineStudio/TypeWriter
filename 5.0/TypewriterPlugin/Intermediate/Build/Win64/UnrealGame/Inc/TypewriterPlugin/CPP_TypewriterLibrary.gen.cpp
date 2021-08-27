// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypewriterPlugin/Public/CPP_TypewriterLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_TypewriterLibrary() {}
// Cross Module References
	TYPEWRITERPLUGIN_API UClass* Z_Construct_UClass_UCPP_TypewriterLibrary_NoRegister();
	TYPEWRITERPLUGIN_API UClass* Z_Construct_UClass_UCPP_TypewriterLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TypewriterPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCPP_TypewriterLibrary::execStopPrinting)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Acceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCPP_TypewriterLibrary::StopPrinting(Z_Param_Object,Z_Param_Acceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_TypewriterLibrary::execPrintRichText)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CharsPerSec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PunctuationDelay);
		P_GET_PROPERTY(FIntProperty,Z_Param_Accuracy);
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_OBJECT(URichTextBlock,Z_Param_RichTextBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCPP_TypewriterLibrary::PrintRichText(Z_Param_Object,Z_Param_Text,Z_Param_CharsPerSec,Z_Param_PunctuationDelay,Z_Param_Accuracy,Z_Param_Sound,Z_Param_RichTextBlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_TypewriterLibrary::execPrintText)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CharsPerSec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PunctuationDelay);
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_OBJECT(UTextBlock,Z_Param_TextBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCPP_TypewriterLibrary::PrintText(Z_Param_Object,Z_Param_Text,Z_Param_CharsPerSec,Z_Param_PunctuationDelay,Z_Param_Sound,Z_Param_TextBlock);
		P_NATIVE_END;
	}
	void UCPP_TypewriterLibrary::StaticRegisterNativesUCPP_TypewriterLibrary()
	{
		UClass* Class = UCPP_TypewriterLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintRichText", &UCPP_TypewriterLibrary::execPrintRichText },
			{ "PrintText", &UCPP_TypewriterLibrary::execPrintText },
			{ "StopPrinting", &UCPP_TypewriterLibrary::execStopPrinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics
	{
		struct CPP_TypewriterLibrary_eventPrintRichText_Parms
		{
			UObject* Object;
			FText Text;
			float CharsPerSec;
			float PunctuationDelay;
			int32 Accuracy;
			USoundBase* Sound;
			URichTextBlock* RichTextBlock;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharsPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CharsPerSec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunctuationDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PunctuationDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Accuracy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RichTextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintRichText_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintRichText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_CharsPerSec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_CharsPerSec = { "CharsPerSec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintRichText_Parms, CharsPerSec), METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_CharsPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_CharsPerSec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_PunctuationDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_PunctuationDelay = { "PunctuationDelay", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintRichText_Parms, PunctuationDelay), METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_PunctuationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_PunctuationDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Accuracy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintRichText_Parms, Accuracy), METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Accuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Accuracy_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintRichText_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_RichTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_RichTextBlock = { "RichTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintRichText_Parms, RichTextBlock), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_RichTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_RichTextBlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_CharsPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_PunctuationDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Accuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::NewProp_RichTextBlock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::Function_MetaDataParams[] = {
		{ "Accuracy", "10" },
		{ "Category", "Typewriter" },
		{ "CharsPerSec", "10.000000" },
		{ "HideSelfPin", "" },
		{ "ModuleRelativePath", "Public/CPP_TypewriterLibrary.h" },
		{ "PunctuationDelay", "0.500000" },
		{ "WorldContext", "Object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TypewriterLibrary, nullptr, "PrintRichText", nullptr, nullptr, sizeof(CPP_TypewriterLibrary_eventPrintRichText_Parms), Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics
	{
		struct CPP_TypewriterLibrary_eventPrintText_Parms
		{
			UObject* Object;
			FText Text;
			float CharsPerSec;
			float PunctuationDelay;
			USoundBase* Sound;
			UTextBlock* TextBlock;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharsPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CharsPerSec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunctuationDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PunctuationDelay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintText_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_CharsPerSec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_CharsPerSec = { "CharsPerSec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintText_Parms, CharsPerSec), METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_CharsPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_CharsPerSec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_PunctuationDelay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_PunctuationDelay = { "PunctuationDelay", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintText_Parms, PunctuationDelay), METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_PunctuationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_PunctuationDelay_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintText_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_TextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventPrintText_Parms, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_TextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_TextBlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_CharsPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_PunctuationDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::NewProp_TextBlock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
		{ "CharsPerSec", "10.000000" },
		{ "HideSelfPin", "" },
		{ "ModuleRelativePath", "Public/CPP_TypewriterLibrary.h" },
		{ "PunctuationDelay", "0.500000" },
		{ "WorldContext", "Object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TypewriterLibrary, nullptr, "PrintText", nullptr, nullptr, sizeof(CPP_TypewriterLibrary_eventPrintText_Parms), Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics
	{
		struct CPP_TypewriterLibrary_eventStopPrinting_Parms
		{
			UObject* Object;
			float Acceleration;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventStopPrinting_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_TypewriterLibrary_eventStopPrinting_Parms, Acceleration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::NewProp_Acceleration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
		{ "HideSelfPin", "" },
		{ "ModuleRelativePath", "Public/CPP_TypewriterLibrary.h" },
		{ "WorldContext", "Object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_TypewriterLibrary, nullptr, "StopPrinting", nullptr, nullptr, sizeof(CPP_TypewriterLibrary_eventStopPrinting_Parms), Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCPP_TypewriterLibrary_NoRegister()
	{
		return UCPP_TypewriterLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_TypewriterLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_TypewriterLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TypewriterPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_TypewriterLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintRichText, "PrintRichText" }, // 3489516938
		{ &Z_Construct_UFunction_UCPP_TypewriterLibrary_PrintText, "PrintText" }, // 863172867
		{ &Z_Construct_UFunction_UCPP_TypewriterLibrary_StopPrinting, "StopPrinting" }, // 622095251
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_TypewriterLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CPP_TypewriterLibrary.h" },
		{ "ModuleRelativePath", "Public/CPP_TypewriterLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_TypewriterLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_TypewriterLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_TypewriterLibrary_Statics::ClassParams = {
		&UCPP_TypewriterLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCPP_TypewriterLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_TypewriterLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_TypewriterLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCPP_TypewriterLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPP_TypewriterLibrary, 3796762816);
	template<> TYPEWRITERPLUGIN_API UClass* StaticClass<UCPP_TypewriterLibrary>()
	{
		return UCPP_TypewriterLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPP_TypewriterLibrary(Z_Construct_UClass_UCPP_TypewriterLibrary, &UCPP_TypewriterLibrary::StaticClass, TEXT("/Script/TypewriterPlugin"), TEXT("UCPP_TypewriterLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_TypewriterLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
