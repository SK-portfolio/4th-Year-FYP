// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestEditor/Public/VaRest_BreakJson.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRest_BreakJson() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
UPackage* Z_Construct_UPackage__Script_VaRestEditor();
VARESTEDITOR_API UClass* Z_Construct_UClass_UVaRest_BreakJson();
VARESTEDITOR_API UClass* Z_Construct_UClass_UVaRest_BreakJson_NoRegister();
VARESTEDITOR_API UClass* Z_Construct_UClass_UVaRest_MakeJson();
VARESTEDITOR_API UClass* Z_Construct_UClass_UVaRest_MakeJson_NoRegister();
VARESTEDITOR_API UEnum* Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType();
VARESTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVaRest_NamedType();
// End Cross Module References

// Begin Enum EVaRest_JsonType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVaRest_JsonType;
static UEnum* EVaRest_JsonType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVaRest_JsonType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVaRest_JsonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType, (UObject*)Z_Construct_UPackage__Script_VaRestEditor(), TEXT("EVaRest_JsonType"));
	}
	return Z_Registration_Info_UEnum_EVaRest_JsonType.OuterSingleton;
}
template<> VARESTEDITOR_API UEnum* StaticEnum<EVaRest_JsonType>()
{
	return EVaRest_JsonType_StaticEnum();
}
struct Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "JSON_Bool.Comment", "// JSON_Null UMETA(DisplayName = \"Null\"),\n" },
		{ "JSON_Bool.DisplayName", "Boolean" },
		{ "JSON_Bool.Name", "EVaRest_JsonType::JSON_Bool" },
		{ "JSON_Bool.ToolTip", "JSON_Null UMETA(DisplayName = \"Null\")," },
		{ "JSON_Number.DisplayName", "Number" },
		{ "JSON_Number.Name", "EVaRest_JsonType::JSON_Number" },
		{ "JSON_Object.DisplayName", "Object" },
		{ "JSON_Object.Name", "EVaRest_JsonType::JSON_Object" },
		{ "JSON_String.DisplayName", "String" },
		{ "JSON_String.Name", "EVaRest_JsonType::JSON_String" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVaRest_JsonType::JSON_Bool", (int64)EVaRest_JsonType::JSON_Bool },
		{ "EVaRest_JsonType::JSON_Number", (int64)EVaRest_JsonType::JSON_Number },
		{ "EVaRest_JsonType::JSON_String", (int64)EVaRest_JsonType::JSON_String },
		{ "EVaRest_JsonType::JSON_Object", (int64)EVaRest_JsonType::JSON_Object },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VaRestEditor,
	nullptr,
	"EVaRest_JsonType",
	"EVaRest_JsonType",
	Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType()
{
	if (!Z_Registration_Info_UEnum_EVaRest_JsonType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVaRest_JsonType.InnerSingleton, Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVaRest_JsonType.InnerSingleton;
}
// End Enum EVaRest_JsonType

// Begin ScriptStruct FVaRest_NamedType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VaRest_NamedType;
class UScriptStruct* FVaRest_NamedType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VaRest_NamedType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VaRest_NamedType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaRest_NamedType, (UObject*)Z_Construct_UPackage__Script_VaRestEditor(), TEXT("VaRest_NamedType"));
	}
	return Z_Registration_Info_UScriptStruct_VaRest_NamedType.OuterSingleton;
}
template<> VARESTEDITOR_API UScriptStruct* StaticStruct<FVaRest_NamedType>()
{
	return FVaRest_NamedType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVaRest_NamedType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "NamedType" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "NamedType" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[] = {
		{ "Category", "NamedType" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bIsArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaRest_NamedType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRest_NamedType, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRest_NamedType, Type), Z_Construct_UEnum_VaRestEditor_EVaRest_JsonType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3751001847
void Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray_SetBit(void* Obj)
{
	((FVaRest_NamedType*)Obj)->bIsArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVaRest_NamedType), &Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsArray_MetaData), NewProp_bIsArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewProp_bIsArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VaRestEditor,
	nullptr,
	&NewStructOps,
	"VaRest_NamedType",
	Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::PropPointers),
	sizeof(FVaRest_NamedType),
	alignof(FVaRest_NamedType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVaRest_NamedType()
{
	if (!Z_Registration_Info_UScriptStruct_VaRest_NamedType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VaRest_NamedType.InnerSingleton, Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VaRest_NamedType.InnerSingleton;
}
// End ScriptStruct FVaRest_NamedType

// Begin Class UVaRest_MakeJson
void UVaRest_MakeJson::StaticRegisterNativesUVaRest_MakeJson()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaRest_MakeJson);
UClass* Z_Construct_UClass_UVaRest_MakeJson_NoRegister()
{
	return UVaRest_MakeJson::StaticClass();
}
struct Z_Construct_UClass_UVaRest_MakeJson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VaRest_BreakJson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRest_MakeJson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVaRest_NamedType, METADATA_PARAMS(0, nullptr) }; // 3881833158
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRest_MakeJson, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 3881833158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRest_MakeJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRest_MakeJson_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRest_MakeJson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVaRest_MakeJson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_VaRestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRest_MakeJson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRest_MakeJson_Statics::ClassParams = {
	&UVaRest_MakeJson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVaRest_MakeJson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVaRest_MakeJson_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRest_MakeJson_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRest_MakeJson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVaRest_MakeJson()
{
	if (!Z_Registration_Info_UClass_UVaRest_MakeJson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRest_MakeJson.OuterSingleton, Z_Construct_UClass_UVaRest_MakeJson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaRest_MakeJson.OuterSingleton;
}
template<> VARESTEDITOR_API UClass* StaticClass<UVaRest_MakeJson>()
{
	return UVaRest_MakeJson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRest_MakeJson);
UVaRest_MakeJson::~UVaRest_MakeJson() {}
// End Class UVaRest_MakeJson

// Begin Class UVaRest_BreakJson
void UVaRest_BreakJson::StaticRegisterNativesUVaRest_BreakJson()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaRest_BreakJson);
UClass* Z_Construct_UClass_UVaRest_BreakJson_NoRegister()
{
	return UVaRest_BreakJson::StaticClass();
}
struct Z_Construct_UClass_UVaRest_BreakJson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VaRest_BreakJson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Public/VaRest_BreakJson.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRest_BreakJson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVaRest_NamedType, METADATA_PARAMS(0, nullptr) }; // 3881833158
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRest_BreakJson, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) }; // 3881833158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRest_BreakJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRest_BreakJson_Statics::NewProp_Outputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRest_BreakJson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVaRest_BreakJson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_VaRestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRest_BreakJson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRest_BreakJson_Statics::ClassParams = {
	&UVaRest_BreakJson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVaRest_BreakJson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVaRest_BreakJson_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRest_BreakJson_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRest_BreakJson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVaRest_BreakJson()
{
	if (!Z_Registration_Info_UClass_UVaRest_BreakJson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRest_BreakJson.OuterSingleton, Z_Construct_UClass_UVaRest_BreakJson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaRest_BreakJson.OuterSingleton;
}
template<> VARESTEDITOR_API UClass* StaticClass<UVaRest_BreakJson>()
{
	return UVaRest_BreakJson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRest_BreakJson);
UVaRest_BreakJson::~UVaRest_BreakJson() {}
// End Class UVaRest_BreakJson

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRestEditor_Public_VaRest_BreakJson_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVaRest_JsonType_StaticEnum, TEXT("EVaRest_JsonType"), &Z_Registration_Info_UEnum_EVaRest_JsonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3751001847U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVaRest_NamedType::StaticStruct, Z_Construct_UScriptStruct_FVaRest_NamedType_Statics::NewStructOps, TEXT("VaRest_NamedType"), &Z_Registration_Info_UScriptStruct_VaRest_NamedType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVaRest_NamedType), 3881833158U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaRest_MakeJson, UVaRest_MakeJson::StaticClass, TEXT("UVaRest_MakeJson"), &Z_Registration_Info_UClass_UVaRest_MakeJson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRest_MakeJson), 1972400744U) },
		{ Z_Construct_UClass_UVaRest_BreakJson, UVaRest_BreakJson::StaticClass, TEXT("UVaRest_BreakJson"), &Z_Registration_Info_UClass_UVaRest_BreakJson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRest_BreakJson), 2256502367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRestEditor_Public_VaRest_BreakJson_h_2658590599(TEXT("/Script/VaRestEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRestEditor_Public_VaRest_BreakJson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRestEditor_Public_VaRest_BreakJson_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRestEditor_Public_VaRest_BreakJson_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRestEditor_Public_VaRest_BreakJson_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRestEditor_Public_VaRest_BreakJson_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRestEditor_Public_VaRest_BreakJson_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
