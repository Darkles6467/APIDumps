#pragma once

#include "BaseDeclarations.h"
struct FQuantizedSignedDistanceFieldShadowSample
{
	char __padding[0x3L];
	char& DistanceField() { return *GetNativePointerField<char*>(this, "FQuantizedSignedDistanceFieldShadowSample.Distance"); }
	char& PenumbraSizeField() { return *GetNativePointerField<char*>(this, "FQuantizedSignedDistanceFieldShadowSample.PenumbraSize"); }
	char& CoverageField() { return *GetNativePointerField<char*>(this, "FQuantizedSignedDistanceFieldShadowSample.Coverage"); }
};

