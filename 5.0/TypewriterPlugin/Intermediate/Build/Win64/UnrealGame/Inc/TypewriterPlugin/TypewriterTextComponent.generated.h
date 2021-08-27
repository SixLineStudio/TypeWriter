// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URichTextBlock;
class USoundBase;
class UTextBlock;
#ifdef TYPEWRITERPLUGIN_TypewriterTextComponent_generated_h
#error "TypewriterTextComponent.generated.h already included, missing '#pragma once' in TypewriterTextComponent.h"
#endif
#define TYPEWRITERPLUGIN_TypewriterTextComponent_generated_h

#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_SPARSE_DATA
#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartRichTypewriting); \
	DECLARE_FUNCTION(execStopPrinting); \
	DECLARE_FUNCTION(execStartTypewriting); \
	DECLARE_FUNCTION(execPunctuationDelay); \
	DECLARE_FUNCTION(execPrintText); \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execStartTimer);


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartRichTypewriting); \
	DECLARE_FUNCTION(execStopPrinting); \
	DECLARE_FUNCTION(execStartTypewriting); \
	DECLARE_FUNCTION(execPunctuationDelay); \
	DECLARE_FUNCTION(execPrintText); \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execStartTimer);


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypewriterTextComponent(); \
	friend struct Z_Construct_UClass_UTypewriterTextComponent_Statics; \
public: \
	DECLARE_CLASS(UTypewriterTextComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TypewriterPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTypewriterTextComponent)


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTypewriterTextComponent(); \
	friend struct Z_Construct_UClass_UTypewriterTextComponent_Statics; \
public: \
	DECLARE_CLASS(UTypewriterTextComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TypewriterPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTypewriterTextComponent)


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypewriterTextComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypewriterTextComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypewriterTextComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypewriterTextComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypewriterTextComponent(UTypewriterTextComponent&&); \
	NO_API UTypewriterTextComponent(const UTypewriterTextComponent&); \
public:


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypewriterTextComponent(UTypewriterTextComponent&&); \
	NO_API UTypewriterTextComponent(const UTypewriterTextComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypewriterTextComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypewriterTextComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTypewriterTextComponent)


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RichText() { return STRUCT_OFFSET(UTypewriterTextComponent, RichText); } \
	FORCEINLINE static uint32 __PPO__isActiveWriting() { return STRUCT_OFFSET(UTypewriterTextComponent, isActiveWriting); } \
	FORCEINLINE static uint32 __PPO__TimerHandle() { return STRUCT_OFFSET(UTypewriterTextComponent, TimerHandle); } \
	FORCEINLINE static uint32 __PPO__TimerDelay() { return STRUCT_OFFSET(UTypewriterTextComponent, TimerDelay); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(UTypewriterTextComponent, Text); } \
	FORCEINLINE static uint32 __PPO__TextBlock() { return STRUCT_OFFSET(UTypewriterTextComponent, TextBlock); } \
	FORCEINLINE static uint32 __PPO__CharsPerSecond() { return STRUCT_OFFSET(UTypewriterTextComponent, CharsPerSecond); } \
	FORCEINLINE static uint32 __PPO__PunctuationDel() { return STRUCT_OFFSET(UTypewriterTextComponent, PunctuationDel); } \
	FORCEINLINE static uint32 __PPO__CharNum() { return STRUCT_OFFSET(UTypewriterTextComponent, CharNum); } \
	FORCEINLINE static uint32 __PPO__Len() { return STRUCT_OFFSET(UTypewriterTextComponent, Len); } \
	FORCEINLINE static uint32 __PPO__Sound() { return STRUCT_OFFSET(UTypewriterTextComponent, Sound); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(UTypewriterTextComponent, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__isRichText() { return STRUCT_OFFSET(UTypewriterTextComponent, isRichText); } \
	FORCEINLINE static uint32 __PPO__Acurracy() { return STRUCT_OFFSET(UTypewriterTextComponent, Acurracy); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(UTypewriterTextComponent, Acceleration); } \
	FORCEINLINE static uint32 __PPO__bInAceleration() { return STRUCT_OFFSET(UTypewriterTextComponent, bInAceleration); } \
	FORCEINLINE static uint32 __PPO__ChachedString() { return STRUCT_OFFSET(UTypewriterTextComponent, ChachedString); }


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_10_PROLOG
#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_SPARSE_DATA \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_RPC_WRAPPERS \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_INCLASS \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_SPARSE_DATA \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEWRITERPLUGIN_API UClass* StaticClass<class UTypewriterTextComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Private_TypewriterTextComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
