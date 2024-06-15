#pragma once

#include "BaseDeclarations.h"
struct FPostConstructInitializeProperties
{
	char __padding[0x148L];
	bool& bCopyTransientsFromClassDefaultsField() { return *GetNativePointerField<bool*>(this, "FPostConstructInitializeProperties.bCopyTransientsFromClassDefaults"); }
	bool& bShouldIntializePropsFromArchetypeField() { return *GetNativePointerField<bool*>(this, "FPostConstructInitializeProperties.bShouldIntializePropsFromArchetype"); }
	bool& bSubobjectClassInitializationAllowedField() { return *GetNativePointerField<bool*>(this, "FPostConstructInitializeProperties.bSubobjectClassInitializationAllowed"); }
	FObjectInstancingGraph * InstanceGraphField() { return GetNativePointerField<FObjectInstancingGraph *>(this, "FPostConstructInitializeProperties.InstanceGraph"); }
	FPostConstructInitializeProperties::FOverrides& ComponentOverridesField() { return *GetNativePointerField<FPostConstructInitializeProperties::FOverrides*>(this, "FPostConstructInitializeProperties.ComponentOverrides"); }
	FPostConstructInitializeProperties::FSubobjectsToInit& ComponentInitsField() { return *GetNativePointerField<FPostConstructInitializeProperties::FSubobjectsToInit*>(this, "FPostConstructInitializeProperties.ComponentInits"); }

	// Functions

	void FSubobjectsToInit(UObject * Subobject, UObject * Template) { NativeCall<void, UObject *, UObject *>(this, "FPostConstructInitializeProperties.FSubobjectsToInit", Subobject, Template); }
	int FOverrides(FName InComponentName) { return NativeCall<int, FName>(this, "FPostConstructInitializeProperties.FOverrides", InComponentName); }
	void FOverrides(FName InComponentName, UClass * InComponentClass, const FPostConstructInitializeProperties * PCIP) { NativeCall<void, FName, UClass *, const FPostConstructInitializeProperties *>(this, "FPostConstructInitializeProperties.FOverrides", InComponentName, InComponentClass, PCIP); }
	static bool InitNonNativeProperty(UProperty * Property, UObject * Data) { return NativeCall<bool, UProperty *, UObject *>(nullptr, "FPostConstructInitializeProperties.InitNonNativeProperty", Property, Data); }
	static void AssertIfInConstructor(UObject * Outer, const wchar_t * ErrorMessage) { NativeCall<void, UObject *, const wchar_t *>(nullptr, "FPostConstructInitializeProperties.AssertIfInConstructor", Outer, ErrorMessage); }
	void AssertIfSubobjectSetupIsNotAllowed(const wchar_t * SubobjectName) { NativeCall<void, const wchar_t *>(this, "FPostConstructInitializeProperties.AssertIfSubobjectSetupIsNotAllowed", SubobjectName); }
	static void InitProperties(UObject * Obj, UClass * DefaultsClass, UObject * DefaultData, bool bCopyTransientsFromClassDefaults) { NativeCall<void, UObject *, UClass *, UObject *, bool>(nullptr, "FPostConstructInitializeProperties.InitProperties", Obj, DefaultsClass, DefaultData, bCopyTransientsFromClassDefaults); }
	bool IslegalOverride(FName InComponentName, UClass * DerivedComponentClass, UClass * BaseComponentClass) { return NativeCall<bool, FName, UClass *, UClass *>(this, "FPostConstructInitializeProperties.IslegalOverride", InComponentName, DerivedComponentClass, BaseComponentClass); }
	const FPostConstructInitializeProperties * DoNotCreateDefaultSubobject(FName SubobjectName) { return NativeCall<const FPostConstructInitializeProperties *, FName>(this, "FPostConstructInitializeProperties.DoNotCreateDefaultSubobject", SubobjectName); }
	void FSubobjectsToInit() { NativeCall<void>(this, "FPostConstructInitializeProperties.FSubobjectsToInit"); }
};

