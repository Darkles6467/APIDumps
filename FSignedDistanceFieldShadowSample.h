#pragma once

#include "BaseDeclarations.h"
struct FSignedDistanceFieldShadowSample
{
	char __padding[0xcL];
	float& DistanceField() { return *GetNativePointerField<float*>(this, "FSignedDistanceFieldShadowSample.Distance"); }
	float& PenumbraSizeField() { return *GetNativePointerField<float*>(this, "FSignedDistanceFieldShadowSample.PenumbraSize"); }
	bool& IsMappedField() { return *GetNativePointerField<bool*>(this, "FSignedDistanceFieldShadowSample.IsMapped"); }
};

