// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundBase;
class URichTextBlock;
class UTextBlock;
#ifdef TYPEWRITERPLUGIN_CPP_TypewriterLibrary_generated_h
#error "CPP_TypewriterLibrary.generated.h already included, missing '#pragma once' in CPP_TypewriterLibrary.h"
#endif
#define TYPEWRITERPLUGIN_CPP_TypewriterLibrary_generated_h

#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_SPARSE_DATA
#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopPrinting); \
	DECLARE_FUNCTION(execPrintRichText); \
	DECLARE_FUNCTION(execPrintText);


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopPrinting); \
	DECLARE_FUNCTION(execPrintRichText); \
	DECLARE_FUNCTION(execPrintText);


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_TypewriterLibrary(); \
	friend struct Z_Construct_UClass_UCPP_TypewriterLibrary_Statics; \
public: \
	DECLARE_CLASS(UCPP_TypewriterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypewriterPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCPP_TypewriterLibrary)


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCPP_TypewriterLibrary(); \
	friend struct Z_Construct_UClass_UCPP_TypewriterLibrary_Statics; \
public: \
	DECLARE_CLASS(UCPP_TypewriterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TypewriterPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCPP_TypewriterLibrary)


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_TypewriterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_TypewriterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_TypewriterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_TypewriterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_TypewriterLibrary(UCPP_TypewriterLibrary&&); \
	NO_API UCPP_TypewriterLibrary(const UCPP_TypewriterLibrary&); \
public:


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_TypewriterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_TypewriterLibrary(UCPP_TypewriterLibrary&&); \
	NO_API UCPP_TypewriterLibrary(const UCPP_TypewriterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_TypewriterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_TypewriterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_TypewriterLibrary)


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_13_PROLOG
#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_SPARSE_DATA \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_RPC_WRAPPERS \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_INCLASS \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_SPARSE_DATA \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CPP_TypewriterLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEWRITERPLUGIN_API UClass* StaticClass<class UCPP_TypewriterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TypewriterPlugin_Source_TypewriterPlugin_Public_CPP_TypewriterLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
