// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/Gun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AGun_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AGun::StaticRegisterNativesAGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGun);
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__skeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__skeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__muzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__muzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__impactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__impactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__maxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__maxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__muzzleSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__muzzleSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__impactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__impactSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp__root_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp__root = { "_root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, _root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp__root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp__root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp__skeletalMesh_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp__skeletalMesh = { "_skeletalMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, _skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp__skeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp__skeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp__muzzleFlash_MetaData[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Gun.h" },
		{ "Tooltip", "Particles of muzzle when the gun shoot." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp__muzzleFlash = { "_muzzleFlash", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, _muzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp__muzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp__muzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp__impactEffect_MetaData[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Gun.h" },
		{ "Tooltip", "Particles when the bullet impacts." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp__impactEffect = { "_impactEffect", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, _impactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp__impactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp__impactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp__maxRange_MetaData[] = {
		{ "Category", "Bullet range" },
		{ "ClampMin", "1000" },
		{ "ModuleRelativePath", "Gun.h" },
		{ "Tooltip", "Max distance that bullet can do." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp__maxRange = { "_maxRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, _maxRange), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp__maxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp__maxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp__damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, _damage), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp__damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp__damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp__muzzleSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp__muzzleSound = { "_muzzleSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, _muzzleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp__muzzleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp__muzzleSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp__impactSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp__impactSound = { "_impactSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, _impactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp__impactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp__impactSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp__root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp__skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp__muzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp__impactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp__maxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp__damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp__muzzleSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp__impactSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGun()
	{
		if (!Z_Registration_Info_UClass_AGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGun.OuterSingleton, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGun.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_Gun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_Gun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGun, AGun::StaticClass, TEXT("AGun"), &Z_Registration_Info_UClass_AGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGun), 3146112518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_Gun_h_2033853358(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_Gun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_Gun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
