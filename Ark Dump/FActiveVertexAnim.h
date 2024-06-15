#pragma once

#include "BaseDeclarations.h"
struct FActiveVertexAnim
{
	char __padding[0x10L];
	float& WeightField() { return *GetNativePointerField<float*>(this, "FActiveVertexAnim.Weight"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FActiveVertexAnim.Time"); }

	// Functions

};

