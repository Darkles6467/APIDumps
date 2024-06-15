#pragma once

#include "BaseDeclarations.h"
struct FRenderResource
{
	char __padding[0x30L];
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FRenderResource.FeatureLevel"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FRenderResource.bInitialized"); }

	// Functions

	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FRenderResource.GetFriendlyName", result); }
	void InitResource() { NativeCall<void>(this, "FRenderResource.InitResource"); }
	void InitResourceFromPossiblyParallelRendering() { NativeCall<void>(this, "FRenderResource.InitResourceFromPossiblyParallelRendering"); }
	void ReleaseResource() { NativeCall<void>(this, "FRenderResource.ReleaseResource"); }
	void UpdateRHI() { NativeCall<void>(this, "FRenderResource.UpdateRHI"); }
};

