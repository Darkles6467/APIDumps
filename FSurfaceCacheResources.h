#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FSurfaceCacheResources : FRenderResource
{
	char __padding[0x70L];
	FRWBuffer& DispatchParametersField() { return *GetNativePointerField<FRWBuffer*>(this, "FSurfaceCacheResources.DispatchParameters"); }
	FieldArray<FRefinementLevelResources *, 7> LevelField() { return {this, "FSurfaceCacheResources.Level"}; }
	FRefinementLevelResources * TempResourcesField() { return GetNativePointerField<FRefinementLevelResources *>(this, "FSurfaceCacheResources.TempResources"); }
	bool& bClearedResourcesField() { return *GetNativePointerField<bool*>(this, "FSurfaceCacheResources.bClearedResources"); }
	bool& bHasIrradianceField() { return *GetNativePointerField<bool*>(this, "FSurfaceCacheResources.bHasIrradiance"); }
	int& MinLevelField() { return *GetNativePointerField<int*>(this, "FSurfaceCacheResources.MinLevel"); }
	int& MaxLevelField() { return *GetNativePointerField<int*>(this, "FSurfaceCacheResources.MaxLevel"); }

	// Functions

	void AllocateFor(int InMinLevel, int InMaxLevel, int MaxSurfaceCacheSamples) { NativeCall<void, int, int, int>(this, "FSurfaceCacheResources.AllocateFor", InMinLevel, InMaxLevel, MaxSurfaceCacheSamples); }
	void InitDynamicRHI() { NativeCall<void>(this, "FSurfaceCacheResources.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FSurfaceCacheResources.ReleaseDynamicRHI"); }
};

