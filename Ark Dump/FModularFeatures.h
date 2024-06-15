#pragma once

#include "BaseDeclarations.h"
struct IModularFeatures
{
	char __padding[0x8L];

	// Functions

};

struct FModularFeatures : IModularFeatures
{
	char __padding[0x90L];
	FModularFeatures::FOnModularFeatureRegistered& ModularFeatureRegisteredEventField() { return *GetNativePointerField<FModularFeatures::FOnModularFeatureRegistered*>(this, "FModularFeatures.ModularFeatureRegisteredEvent"); }
	FModularFeatures::FOnModularFeatureUnregistered& ModularFeatureUnregisteredEventField() { return *GetNativePointerField<FModularFeatures::FOnModularFeatureUnregistered*>(this, "FModularFeatures.ModularFeatureUnregisteredEvent"); }

	// Functions

	int GetModularFeatureImplementationCount(const FName Type) { return NativeCall<int, const FName>(this, "FModularFeatures.GetModularFeatureImplementationCount", Type); }
	void RegisterModularFeature(const FName Type, IModularFeature * ModularFeature) { NativeCall<void, const FName, IModularFeature *>(this, "FModularFeatures.RegisterModularFeature", Type, ModularFeature); }
	void UnregisterModularFeature(const FName Type, IModularFeature * ModularFeature) { NativeCall<void, const FName, IModularFeature *>(this, "FModularFeatures.UnregisterModularFeature", Type, ModularFeature); }
};

