#pragma once

#include "BaseDeclarations.h"
struct FAttachmentPoint
{
	char __padding[0x18L];
	float& SnapDistanceField() { return *GetNativePointerField<float*>(this, "FAttachmentPoint.SnapDistance"); }
	float& SnapRotationYawDiffField() { return *GetNativePointerField<float*>(this, "FAttachmentPoint.SnapRotationYawDiff"); }
	int& SnapIndexTheirsField() { return *GetNativePointerField<int*>(this, "FAttachmentPoint.SnapIndexTheirs"); }
	int& SnapIndexOursField() { return *GetNativePointerField<int*>(this, "FAttachmentPoint.SnapIndexOurs"); }
};

