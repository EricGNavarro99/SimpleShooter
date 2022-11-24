// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AGun_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShooterCharacter::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercent", &AShooterCharacter::execGetHealthPercent },
			{ "IsDead", &AShooterCharacter::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics
	{
		struct ShooterCharacter_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterCharacter_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::ShooterCharacter_eventGetHealthPercent_Parms), Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_IsDead_Statics
	{
		struct ShooterCharacter_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "IsDead", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::ShooterCharacter_eventIsDead_Parms), Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterCharacter);
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__springArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__springArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__gamepadSensivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__gamepadSensivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__cameraMinPitchRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__cameraMinPitchRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__cameraMaxPitchRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__cameraMaxPitchRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__gunClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__gunClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__currentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__currentHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_GetHealthPercent, "GetHealthPercent" }, // 4002901217
		{ &Z_Construct_UFunction_AShooterCharacter_IsDead, "IsDead" }, // 2605190564
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter.h" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp__springArm_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp__springArm = { "_springArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, _springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__springArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp__camera_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp__camera = { "_camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, _camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gamepadSensivity_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gamepadSensivity = { "_gamepadSensivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, _gamepadSensivity), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gamepadSensivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gamepadSensivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMinPitchRotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-100" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMinPitchRotation = { "_cameraMinPitchRotation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, _cameraMinPitchRotation), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMinPitchRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMinPitchRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMaxPitchRotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMaxPitchRotation = { "_cameraMaxPitchRotation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, _cameraMaxPitchRotation), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMaxPitchRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMaxPitchRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gunClass_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gunClass = { "_gunClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, _gunClass), Z_Construct_UClass_AGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gunClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp__maxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp__maxHealth = { "_maxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, _maxHealth), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp__currentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp__currentHealth = { "_currentHealth", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterCharacter, _currentHealth), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__currentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp__currentHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp__springArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp__camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gamepadSensivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMinPitchRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp__cameraMaxPitchRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp__gunClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp__maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp__currentHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		if (!Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AShooterCharacter>()
	{
		return AShooterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter, AShooterCharacter::StaticClass, TEXT("AShooterCharacter"), &Z_Registration_Info_UClass_AShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter), 3045822846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_727783631(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
