// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaRestSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
class UVaRestJsonValue;
class UVaRestRequestJSON;
enum class EVaRestRequestContentType : uint8;
enum class EVaRestRequestVerb : uint8;
#ifdef VAREST_VaRestSubsystem_generated_h
#error "VaRestSubsystem.generated.h already included, missing '#pragma once' in VaRestSubsystem.h"
#endif
#define VAREST_VaRestSubsystem_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_13_DELEGATE \
VAREST_API void FVaRestCallDelegate_DelegateWrapper(const FScriptDelegate& VaRestCallDelegate, UVaRestRequestJSON* Request);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVaRestCallResponse_Statics; \
	VAREST_API static class UScriptStruct* StaticStruct();


template<> VAREST_API UScriptStruct* StaticStruct<struct FVaRestCallResponse>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadJsonFromFile); \
	DECLARE_FUNCTION(execDecodeJsonObject); \
	DECLARE_FUNCTION(execDecodeJsonValue); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber); \
	DECLARE_FUNCTION(execStaticConstructVaRestJsonObject); \
	DECLARE_FUNCTION(execConstructVaRestJsonObject); \
	DECLARE_FUNCTION(execConstructVaRestRequestExt); \
	DECLARE_FUNCTION(execConstructVaRestRequest); \
	DECLARE_FUNCTION(execCallURL);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestSubsystem(); \
	friend struct Z_Construct_UClass_UVaRestSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVaRestSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestSubsystem)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVaRestSubsystem(UVaRestSubsystem&&); \
	UVaRestSubsystem(const UVaRestSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVaRestSubsystem) \
	NO_API virtual ~UVaRestSubsystem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_35_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAREST_API UClass* StaticClass<class UVaRestSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
