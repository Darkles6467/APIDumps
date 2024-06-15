#pragma once

#include "BaseDeclarations.h"
struct VJointPos
{
	char __padding[0x40L];
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "VJointPos.Transform"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "VJointPos.Length"); }
	float& XSizeField() { return *GetNativePointerField<float*>(this, "VJointPos.XSize"); }
	float& YSizeField() { return *GetNativePointerField<float*>(this, "VJointPos.YSize"); }
	float& ZSizeField() { return *GetNativePointerField<float*>(this, "VJointPos.ZSize"); }
};

