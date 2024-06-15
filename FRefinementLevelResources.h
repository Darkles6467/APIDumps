#pragma once

#include "BaseDeclarations.h"
struct FRefinementLevelResources
{
	char __padding[0x108L];
	int& MaxIrradianceCacheSamplesField() { return *GetNativePointerField<int*>(this, "FRefinementLevelResources.MaxIrradianceCacheSamples"); }
	FRWBuffer& PositionAndRadiusField() { return *GetNativePointerField<FRWBuffer*>(this, "FRefinementLevelResources.PositionAndRadius"); }
	FRWBuffer& OccluderRadiusField() { return *GetNativePointerField<FRWBuffer*>(this, "FRefinementLevelResources.OccluderRadius"); }
	FRWBuffer& NormalField() { return *GetNativePointerField<FRWBuffer*>(this, "FRefinementLevelResources.Normal"); }
	FRWBuffer& BentNormalField() { return *GetNativePointerField<FRWBuffer*>(this, "FRefinementLevelResources.BentNormal"); }
	FRWBuffer& IrradianceField() { return *GetNativePointerField<FRWBuffer*>(this, "FRefinementLevelResources.Irradiance"); }
	FRWBuffer& ScatterDrawParametersField() { return *GetNativePointerField<FRWBuffer*>(this, "FRefinementLevelResources.ScatterDrawParameters"); }
	FRWBuffer& SavedStartIndexField() { return *GetNativePointerField<FRWBuffer*>(this, "FRefinementLevelResources.SavedStartIndex"); }
	FRWBuffer& TileCoordinateField() { return *GetNativePointerField<FRWBuffer*>(this, "FRefinementLevelResources.TileCoordinate"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FRefinementLevelResources.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FRefinementLevelResources.ReleaseDynamicRHI"); }
};

