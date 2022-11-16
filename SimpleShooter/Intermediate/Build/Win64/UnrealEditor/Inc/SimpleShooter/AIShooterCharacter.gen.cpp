// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/AIShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIShooterCharacter() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AAIShooterCharacter_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AAIShooterCharacter();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAIShooterCharacter::StaticRegisterNativesAAIShooterCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIShooterCharacter);
	UClass* Z_Construct_UClass_AAIShooterCharacter_NoRegister()
	{
		return AAIShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAIShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__behaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__behaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__acceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__acceptanceRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIShooterCharacter.h" },
		{ "ModuleRelativePath", "AIShooterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__behaviorTree_MetaData[] = {
		{ "Category", "Enemy AI" },
		{ "ModuleRelativePath", "AIShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__behaviorTree = { "_behaviorTree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShooterCharacter, _behaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__behaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__behaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__acceptanceRadius_MetaData[] = {
		{ "Category", "Enemy AI" },
		{ "ClampMax", "500" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "AIShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__acceptanceRadius = { "_acceptanceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIShooterCharacter, _acceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__acceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__acceptanceRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIShooterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__behaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShooterCharacter_Statics::NewProp__acceptanceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIShooterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIShooterCharacter_Statics::ClassParams = {
		&AAIShooterCharacter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIShooterCharacter_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIShooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIShooterCharacter()
	{
		if (!Z_Registration_Info_UClass_AAIShooterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIShooterCharacter.OuterSingleton, Z_Construct_UClass_AAIShooterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIShooterCharacter.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AAIShooterCharacter>()
	{
		return AAIShooterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIShooterCharacter);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_AIShooterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_AIShooterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIShooterCharacter, AAIShooterCharacter::StaticClass, TEXT("AAIShooterCharacter"), &Z_Registration_Info_UClass_AAIShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIShooterCharacter), 2580919843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_AIShooterCharacter_h_3914128745(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_AIShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_AIShooterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
