#pragma once

#include "BaseDeclarations.h"
struct LineQueryResult
{
	char __padding[0x2cL];
	FieldArray<float, 3> pos1Field() { return {this, "LineQueryResult.pos1"}; }
	int& validField() { return *GetNativePointerField<int*>(this, "LineQueryResult.valid"); }
	FieldArray<float, 3> pos2Field() { return {this, "LineQueryResult.pos2"}; }
	float& densityField() { return *GetNativePointerField<float*>(this, "LineQueryResult.density"); }
	float& visibilityField() { return *GetNativePointerField<float*>(this, "LineQueryResult.visibility"); }
	float& thicknessField() { return *GetNativePointerField<float*>(this, "LineQueryResult.thickness"); }
	float& distanceField() { return *GetNativePointerField<float*>(this, "LineQueryResult.distance"); }
};

