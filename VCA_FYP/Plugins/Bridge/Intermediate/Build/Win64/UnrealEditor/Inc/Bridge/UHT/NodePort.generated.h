// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NodePort.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BRIDGE_NodePort_generated_h
#error "NodePort.generated.h already included, missing '#pragma once' in NodePort.h"
#endif
#define BRIDGE_NodePort_generated_h

#define FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h_11_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsNodeRunning); \
	DECLARE_FUNCTION(execGetNodePort);


#define FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUNodePort(); \
	friend struct Z_Construct_UClass_UNodePort_Statics; \
public: \
	DECLARE_CLASS(UNodePort, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bridge"), NO_API) \
	DECLARE_SERIALIZER(UNodePort)


#define FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodePort(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodePort) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodePort); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodePort); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNodePort(UNodePort&&); \
	UNodePort(const UNodePort&); \
public: \
	NO_API virtual ~UNodePort();


#define FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h_7_PROLOG
#define FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h_11_RPC_WRAPPERS \
	FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h_11_INCLASS \
	FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BRIDGE_API UClass* StaticClass<class UNodePort>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Bridge_2024_0_7_HostProject_Plugins_Bridge_Source_Bridge_Private_NodePort_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
