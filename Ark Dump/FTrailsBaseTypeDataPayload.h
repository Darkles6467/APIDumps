#pragma once

#include "BaseDeclarations.h"
struct FTrailsBaseTypeDataPayload
{
	char __padding[0x28L];
	int& FlagsField() { return *GetNativePointerField<int*>(this, "FTrailsBaseTypeDataPayload.Flags"); }
	int& TrailIndexField() { return *GetNativePointerField<int*>(this, "FTrailsBaseTypeDataPayload.TrailIndex"); }
	int& TriangleCountField() { return *GetNativePointerField<int*>(this, "FTrailsBaseTypeDataPayload.TriangleCount"); }
	float& SpawnTimeField() { return *GetNativePointerField<float*>(this, "FTrailsBaseTypeDataPayload.SpawnTime"); }
	float& SpawnDeltaField() { return *GetNativePointerField<float*>(this, "FTrailsBaseTypeDataPayload.SpawnDelta"); }
	float& TiledUField() { return *GetNativePointerField<float*>(this, "FTrailsBaseTypeDataPayload.TiledU"); }
	int& SpawnedTessellationPointsField() { return *GetNativePointerField<int*>(this, "FTrailsBaseTypeDataPayload.SpawnedTessellationPoints"); }
	int& RenderingInterpCountField() { return *GetNativePointerField<int*>(this, "FTrailsBaseTypeDataPayload.RenderingInterpCount"); }
	float& PinchScaleFactorField() { return *GetNativePointerField<float*>(this, "FTrailsBaseTypeDataPayload.PinchScaleFactor"); }
};

