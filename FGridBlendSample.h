#pragma once

#include "BaseDeclarations.h"
struct FGridBlendSample
{
	char __padding[0x1cL];
	FEditorElement& GridElementField() { return *GetNativePointerField<FEditorElement*>(this, "FGridBlendSample.GridElement"); }
	float& BlendWeightField() { return *GetNativePointerField<float*>(this, "FGridBlendSample.BlendWeight"); }

	// Functions

};

