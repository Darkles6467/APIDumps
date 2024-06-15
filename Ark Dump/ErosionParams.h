#pragma once

#include "BaseDeclarations.h"
struct ErosionParams
{
	char __padding[0x1cL];
	float& KqField() { return *GetNativePointerField<float*>(this, "ErosionParams.Kq"); }
	float& KwField() { return *GetNativePointerField<float*>(this, "ErosionParams.Kw"); }
	float& KrField() { return *GetNativePointerField<float*>(this, "ErosionParams.Kr"); }
	float& KdField() { return *GetNativePointerField<float*>(this, "ErosionParams.Kd"); }
	float& KiField() { return *GetNativePointerField<float*>(this, "ErosionParams.Ki"); }
	float& minSlopeField() { return *GetNativePointerField<float*>(this, "ErosionParams.minSlope"); }
	float& gField() { return *GetNativePointerField<float*>(this, "ErosionParams.g"); }

	// Functions

};

