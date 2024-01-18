// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Private/OnlineAuthHandlerSteam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAuthHandlerSteam() {}
// Cross Module References
	ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface_NoRegister();
	ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteam();
// End Cross Module References
	void USteamAuthComponentModuleInterface::StaticRegisterNativesUSteamAuthComponentModuleInterface()
	{
	}
	UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface_NoRegister()
	{
		return USteamAuthComponentModuleInterface::StaticClass();
	}
	struct Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineAuthHandlerSteam.h" },
		{ "ModuleRelativePath", "Private/OnlineAuthHandlerSteam.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAuthComponentModuleInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::ClassParams = {
		&USteamAuthComponentModuleInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamAuthComponentModuleInterface, 3485918092);
	template<> ONLINESUBSYSTEMSTEAM_API UClass* StaticClass<USteamAuthComponentModuleInterface>()
	{
		return USteamAuthComponentModuleInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamAuthComponentModuleInterface(Z_Construct_UClass_USteamAuthComponentModuleInterface, &USteamAuthComponentModuleInterface::StaticClass, TEXT("/Script/OnlineSubsystemSteam"), TEXT("USteamAuthComponentModuleInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAuthComponentModuleInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
