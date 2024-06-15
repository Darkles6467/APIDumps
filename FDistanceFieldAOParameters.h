#pragma once

#include "BaseDeclarations.h"
struct FDistanceFieldAOParameters
{
	char __padding[0xcL];
	float& GlobalMaxOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "FDistanceFieldAOParameters.GlobalMaxOcclusionDistance"); }
	float& ObjectMaxOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "FDistanceFieldAOParameters.ObjectMaxOcclusionDistance"); }
	float& ContrastField() { return *GetNativePointerField<float*>(this, "FDistanceFieldAOParameters.Contrast"); }

	// Functions

};

