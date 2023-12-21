// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Classes/SteamNetConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetConnection() {}
// Cross Module References
	ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamNetConnection_NoRegister();
	ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamNetConnection();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteam();
// End Cross Module References
	void USteamNetConnection::StaticRegisterNativesUSteamNetConnection()
	{
	}
	UClass* Z_Construct_UClass_USteamNetConnection_NoRegister()
	{
		return USteamNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_USteamNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPassthrough_MetaData[];
#endif
		static void NewProp_bIsPassthrough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPassthrough;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamNetConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamNetConnection.h" },
		{ "ModuleRelativePath", "Classes/SteamNetConnection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough_MetaData[] = {
		{ "Comment", "/** Is this net connection passthrough to IpConnection */" },
		{ "ModuleRelativePath", "Classes/SteamNetConnection.h" },
		{ "ToolTip", "Is this net connection passthrough to IpConnection" },
	};
#endif
	void Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough_SetBit(void* Obj)
	{
		((USteamNetConnection*)Obj)->bIsPassthrough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough = { "bIsPassthrough", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamNetConnection), &Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamNetConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamNetConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamNetConnection_Statics::ClassParams = {
		&USteamNetConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamNetConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetConnection_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USteamNetConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamNetConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamNetConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamNetConnection, 3366566667);
	template<> ONLINESUBSYSTEMSTEAM_API UClass* StaticClass<USteamNetConnection>()
	{
		return USteamNetConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamNetConnection(Z_Construct_UClass_USteamNetConnection, &USteamNetConnection::StaticClass, TEXT("/Script/OnlineSubsystemSteam"), TEXT("USteamNetConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamNetConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
