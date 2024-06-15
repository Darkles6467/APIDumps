#pragma once

#include "BaseDeclarations.h"
#include "UDistributionFloat.h"

struct UDistributionFloatConstant : UDistributionFloat
{
	char __padding[0x8L];
	float& ConstantField() { return *GetNativePointerField<float*>(this, "UDistributionFloatConstant.Constant"); }

	// Functions

	FColor * GetKeyColor(FColor * result, int SubIndex, int KeyIndex, const FColor * CurveColor) { return NativeCall<FColor *, FColor *, int, int, const FColor *>(this, "UDistributionFloatConstant.GetKeyColor", result, SubIndex, KeyIndex, CurveColor); }
	void GetOutRange(float * MinOut, float * MaxOut) { NativeCall<void, float *, float *>(this, "UDistributionFloatConstant.GetOutRange", MinOut, MaxOut); }
	void PostInitProperties() { NativeCall<void>(this, "UDistributionFloatConstant.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UDistributionFloatConstant.PostLoad"); }
	void SetKeyOut(int SubIndex, int KeyIndex, float NewOutVal) { NativeCall<void, int, int, float>(this, "UDistributionFloatConstant.SetKeyOut", SubIndex, KeyIndex, NewOutVal); }
	float EvalSub() { return NativeCall<float>(this, "UDistributionFloatConstant.EvalSub"); }
};

