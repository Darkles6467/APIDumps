#pragma once

#include "BaseDeclarations.h"
struct FRawDistribution
{
	char __padding[0x28L];
	FDistributionLookupTable& LookupTableField() { return *GetNativePointerField<FDistributionLookupTable*>(this, "FRawDistribution.LookupTable"); }

	// Functions

	void GetValue1None(float Time, float * InValue) { NativeCall<void, float, float *>(this, "FRawDistribution.GetValue1None", Time, InValue); }
	void GetValue1Random(float Time, float * InValue, FRandomStream * InRandomStream) { NativeCall<void, float, float *, FRandomStream *>(this, "FRawDistribution.GetValue1Random", Time, InValue, InRandomStream); }
	void GetValue3Extreme(float Time, float * InValue, int Extreme, FRandomStream * InRandomStream) { NativeCall<void, float, float *, int, FRandomStream *>(this, "FRawDistribution.GetValue3Extreme", Time, InValue, Extreme, InRandomStream); }
	void GetValue3None(float Time, float * InValue) { NativeCall<void, float, float *>(this, "FRawDistribution.GetValue3None", Time, InValue); }
	void GetValue3Random(float Time, float * InValue, FRandomStream * InRandomStream) { NativeCall<void, float, float *, FRandomStream *>(this, "FRawDistribution.GetValue3Random", Time, InValue, InRandomStream); }
};

struct FRawDistributionFloat : FRawDistribution
{
	char __padding[0x10L];
	float& MinValueField() { return *GetNativePointerField<float*>(this, "FRawDistributionFloat.MinValue"); }
	float& MaxValueField() { return *GetNativePointerField<float*>(this, "FRawDistributionFloat.MaxValue"); }

	// Functions

	void GetOutRange(float * MinOut, float * MaxOut) { NativeCall<void, float *, float *>(this, "FRawDistributionFloat.GetOutRange", MinOut, MaxOut); }
	float GetValue(float F, UObject * Data, FRandomStream * InRandomStream) { return NativeCall<float, float, UObject *, FRandomStream *>(this, "FRawDistributionFloat.GetValue", F, Data, InRandomStream); }
};

