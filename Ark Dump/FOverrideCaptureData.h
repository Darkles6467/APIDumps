#pragma once

#include "BaseDeclarations.h"
struct FOverrideCaptureData
{
	char __padding[0x18L];
	FStringAssetReference& SnapshotAssetField() { return *GetNativePointerField<FStringAssetReference*>(this, "FOverrideCaptureData.SnapshotAsset"); }
	float& BrightnessField() { return *GetNativePointerField<float*>(this, "FOverrideCaptureData.Brightness"); }

	// Functions

};

