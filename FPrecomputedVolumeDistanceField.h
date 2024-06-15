#pragma once

#include "BaseDeclarations.h"
struct FPrecomputedVolumeDistanceField
{
	char __padding[0x40L];
	float& VolumeMaxDistanceField() { return *GetNativePointerField<float*>(this, "FPrecomputedVolumeDistanceField.VolumeMaxDistance"); }
	FBox& VolumeBoxField() { return *GetNativePointerField<FBox*>(this, "FPrecomputedVolumeDistanceField.VolumeBox"); }
	int& VolumeSizeXField() { return *GetNativePointerField<int*>(this, "FPrecomputedVolumeDistanceField.VolumeSizeX"); }
	int& VolumeSizeYField() { return *GetNativePointerField<int*>(this, "FPrecomputedVolumeDistanceField.VolumeSizeY"); }
	int& VolumeSizeZField() { return *GetNativePointerField<int*>(this, "FPrecomputedVolumeDistanceField.VolumeSizeZ"); }
	TArray<FColor>& DataField() { return *GetNativePointerField<TArray<FColor>*>(this, "FPrecomputedVolumeDistanceField.Data"); }

	// Functions

	void UpdateScene(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(this, "FPrecomputedVolumeDistanceField.UpdateScene", Scene); }
};

