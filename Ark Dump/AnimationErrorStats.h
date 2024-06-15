#pragma once

#include "BaseDeclarations.h"
struct AnimationErrorStats
{
	char __padding[0x10L];
	float& AverageErrorField() { return *GetNativePointerField<float*>(this, "AnimationErrorStats.AverageError"); }
	float& MaxErrorField() { return *GetNativePointerField<float*>(this, "AnimationErrorStats.MaxError"); }
	float& MaxErrorTimeField() { return *GetNativePointerField<float*>(this, "AnimationErrorStats.MaxErrorTime"); }
	int& MaxErrorBoneField() { return *GetNativePointerField<int*>(this, "AnimationErrorStats.MaxErrorBone"); }
};

