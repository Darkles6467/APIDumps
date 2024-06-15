#pragma once

#include "BaseDeclarations.h"
#include "UInterpGroup.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpGroupCamera : UInterpGroup
{
	char __padding[0x10L];
	UCameraAnim * CameraAnimInstField() { return GetNativePointerField<UCameraAnim *>(this, "UInterpGroupCamera.CameraAnimInst"); }
	float& CompressToleranceField() { return *GetNativePointerField<float*>(this, "UInterpGroupCamera.CompressTolerance"); }

	// Functions

};

