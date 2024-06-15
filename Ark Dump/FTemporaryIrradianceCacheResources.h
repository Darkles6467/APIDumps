#pragma once

#include "BaseDeclarations.h"
#include "FMaxSizedRWBuffers.h"
#include "FRenderResource.h"

struct FTemporaryIrradianceCacheResources : FMaxSizedRWBuffers
{
	char __padding[0xa0L];
	FRWBuffer& ConeVisibilityField() { return *GetNativePointerField<FRWBuffer*>(this, "FTemporaryIrradianceCacheResources.ConeVisibility"); }
	FRWBuffer& ConeDataField() { return *GetNativePointerField<FRWBuffer*>(this, "FTemporaryIrradianceCacheResources.ConeData"); }
	FRWBuffer& StepBentNormalField() { return *GetNativePointerField<FRWBuffer*>(this, "FTemporaryIrradianceCacheResources.StepBentNormal"); }
	FRWBuffer& SurfelIrradianceField() { return *GetNativePointerField<FRWBuffer*>(this, "FTemporaryIrradianceCacheResources.SurfelIrradiance"); }
	FRWBuffer& HeightfieldIrradianceField() { return *GetNativePointerField<FRWBuffer*>(this, "FTemporaryIrradianceCacheResources.HeightfieldIrradiance"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FTemporaryIrradianceCacheResources.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FTemporaryIrradianceCacheResources.ReleaseDynamicRHI"); }
};

