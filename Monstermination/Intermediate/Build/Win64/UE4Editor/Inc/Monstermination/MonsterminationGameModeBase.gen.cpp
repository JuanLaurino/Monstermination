// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monstermination/MonsterminationGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterminationGameModeBase() {}
// Cross Module References
	MONSTERMINATION_API UClass* Z_Construct_UClass_AMonsterminationGameModeBase_NoRegister();
	MONSTERMINATION_API UClass* Z_Construct_UClass_AMonsterminationGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Monstermination();
// End Cross Module References
	void AMonsterminationGameModeBase::StaticRegisterNativesAMonsterminationGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMonsterminationGameModeBase_NoRegister()
	{
		return AMonsterminationGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterminationGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterminationGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Monstermination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterminationGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MonsterminationGameModeBase.h" },
		{ "ModuleRelativePath", "MonsterminationGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterminationGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterminationGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterminationGameModeBase_Statics::ClassParams = {
		&AMonsterminationGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterminationGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterminationGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterminationGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterminationGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterminationGameModeBase, 2033338334);
	template<> MONSTERMINATION_API UClass* StaticClass<AMonsterminationGameModeBase>()
	{
		return AMonsterminationGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterminationGameModeBase(Z_Construct_UClass_AMonsterminationGameModeBase, &AMonsterminationGameModeBase::StaticClass, TEXT("/Script/Monstermination"), TEXT("AMonsterminationGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterminationGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
