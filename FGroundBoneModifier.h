#pragma once

#include "BaseDeclarations.h"
struct FGroundBoneModifier
{
	char __padding[0x10L];
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FGroundBoneModifier.BoneName"); }
	float& TraceDistanceField() { return *GetNativePointerField<float*>(this, "FGroundBoneModifier.TraceDistance"); }
	float& ZOffsetField() { return *GetNativePointerField<float*>(this, "FGroundBoneModifier.ZOffset"); }

	// Functions

};

