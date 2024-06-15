#pragma once

#include "BaseDeclarations.h"
struct FObjectInfo
{
	char __padding[0x30L];
	float& HeightOffsetField() { return *GetNativePointerField<float*>(this, "FObjectInfo.HeightOffset"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FObjectInfo.Radius"); }
	float& MinimumProbabilityField() { return *GetNativePointerField<float*>(this, "FObjectInfo.MinimumProbability"); }
	float& MinimumScaleField() { return *GetNativePointerField<float*>(this, "FObjectInfo.MinimumScale"); }
	float& MaximumScaleField() { return *GetNativePointerField<float*>(this, "FObjectInfo.MaximumScale"); }
	PGFixed& FPMinimumProbabilityField() { return *GetNativePointerField<PGFixed*>(this, "FObjectInfo.FPMinimumProbability"); }
	PGFixed& FPRadiusField() { return *GetNativePointerField<PGFixed*>(this, "FObjectInfo.FPRadius"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FObjectInfo.Serialize", Ar); }
};

