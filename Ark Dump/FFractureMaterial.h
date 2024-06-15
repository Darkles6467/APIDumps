#pragma once

#include "BaseDeclarations.h"
struct FFractureMaterial
{
	char __padding[0x24L];
	FVector2D& UVScaleField() { return *GetNativePointerField<FVector2D*>(this, "FFractureMaterial.UVScale"); }
	FVector2D& UVOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FFractureMaterial.UVOffset"); }
	FVector& TangentField() { return *GetNativePointerField<FVector*>(this, "FFractureMaterial.Tangent"); }
	float& UAngleField() { return *GetNativePointerField<float*>(this, "FFractureMaterial.UAngle"); }
	int& InteriorElementIndexField() { return *GetNativePointerField<int*>(this, "FFractureMaterial.InteriorElementIndex"); }

	// Functions

};

