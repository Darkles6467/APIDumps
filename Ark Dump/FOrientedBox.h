#pragma once

#include "BaseDeclarations.h"
struct FOrientedBox
{
	char __padding[0x3cL];
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FOrientedBox.Center"); }
	FVector& AxisXField() { return *GetNativePointerField<FVector*>(this, "FOrientedBox.AxisX"); }
	FVector& AxisYField() { return *GetNativePointerField<FVector*>(this, "FOrientedBox.AxisY"); }
	FVector& AxisZField() { return *GetNativePointerField<FVector*>(this, "FOrientedBox.AxisZ"); }
	float& ExtentXField() { return *GetNativePointerField<float*>(this, "FOrientedBox.ExtentX"); }
	float& ExtentYField() { return *GetNativePointerField<float*>(this, "FOrientedBox.ExtentY"); }
	float& ExtentZField() { return *GetNativePointerField<float*>(this, "FOrientedBox.ExtentZ"); }
};

