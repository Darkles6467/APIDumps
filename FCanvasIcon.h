#pragma once

#include "BaseDeclarations.h"
struct FCanvasIcon
{
	char __padding[0x18L];
	float& UField() { return *GetNativePointerField<float*>(this, "FCanvasIcon.U"); }
	float& VField() { return *GetNativePointerField<float*>(this, "FCanvasIcon.V"); }
	float& ULField() { return *GetNativePointerField<float*>(this, "FCanvasIcon.UL"); }
	float& VLField() { return *GetNativePointerField<float*>(this, "FCanvasIcon.VL"); }

	// Functions

};

