#pragma once

#include "BaseDeclarations.h"
#include "UDistributionFloat.h"
#include "UDistribution.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDistributionFloatUniform : UDistributionFloat
{
	char __padding[0x8L];
	float& MinField() { return *GetNativePointerField<float*>(this, "UDistributionFloatUniform.Min"); }
	float& MaxField() { return *GetNativePointerField<float*>(this, "UDistributionFloatUniform.Max"); }

	// Functions

	FColor * GetKeyColor(FColor * result, int SubIndex, int KeyIndex, const FColor * CurveColor) { return NativeCall<FColor *, FColor *, int, int, const FColor *>(this, "UDistributionFloatUniform.GetKeyColor", result, SubIndex, KeyIndex, CurveColor); }
	float GetKeyOut(int SubIndex, int KeyIndex) { return NativeCall<float, int, int>(this, "UDistributionFloatUniform.GetKeyOut", SubIndex, KeyIndex); }
	ERawDistributionOperation GetOperation() { return NativeCall<ERawDistributionOperation>(this, "UDistributionFloatUniform.GetOperation"); }
	void GetOutRange(float * MinOut, float * MaxOut) { NativeCall<void, float *, float *>(this, "UDistributionFloatUniform.GetOutRange", MinOut, MaxOut); }
	FColor * GetSubCurveButtonColor(FColor * result, int SubCurveIndex, bool bIsSubCurveHidden) { return NativeCall<FColor *, FColor *, int, bool>(this, "UDistributionFloatUniform.GetSubCurveButtonColor", result, SubCurveIndex, bIsSubCurveHidden); }
	float GetValue(float F, UObject * Data, FRandomStream * InRandomStream) { return NativeCall<float, float, UObject *, FRandomStream *>(this, "UDistributionFloatUniform.GetValue", F, Data, InRandomStream); }
	unsigned int InitializeRawEntry(float Time, float * Values) { return NativeCall<unsigned int, float, float *>(this, "UDistributionFloatUniform.InitializeRawEntry", Time, Values); }
	void PostInitProperties() { NativeCall<void>(this, "UDistributionFloatUniform.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UDistributionFloatUniform.PostLoad"); }
	void SetKeyOut(int SubIndex, int KeyIndex, float NewOutVal) { NativeCall<void, int, int, float>(this, "UDistributionFloatUniform.SetKeyOut", SubIndex, KeyIndex, NewOutVal); }
};

