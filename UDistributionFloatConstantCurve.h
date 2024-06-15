#pragma once

#include "BaseDeclarations.h"
#include "UDistributionFloat.h"
#include "UDistribution.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDistributionFloatConstantCurve : UDistributionFloat
{
	char __padding[0x10L];
	FInterpCurve<float>& ConstantCurveField() { return *GetNativePointerField<FInterpCurve<float>*>(this, "UDistributionFloatConstantCurve.ConstantCurve"); }

	// Functions

	int CreateNewKey(float KeyIn) { return NativeCall<int, float>(this, "UDistributionFloatConstantCurve.CreateNewKey", KeyIn); }
	void DeleteKey(int KeyIndex) { NativeCall<void, int>(this, "UDistributionFloatConstantCurve.DeleteKey", KeyIndex); }
	float EvalSub(int SubIndex, float InVal) { return NativeCall<float, int, float>(this, "UDistributionFloatConstantCurve.EvalSub", SubIndex, InVal); }
	void GetInRange(float * MinIn, float * MaxIn) { NativeCall<void, float *, float *>(this, "UDistributionFloatConstantCurve.GetInRange", MinIn, MaxIn); }
	float GetKeyIn(int KeyIndex) { return NativeCall<float, int>(this, "UDistributionFloatConstantCurve.GetKeyIn", KeyIndex); }
	EInterpCurveMode GetKeyInterpMode(int KeyIndex) { return NativeCall<EInterpCurveMode, int>(this, "UDistributionFloatConstantCurve.GetKeyInterpMode", KeyIndex); }
	float GetKeyOut(int SubIndex, int KeyIndex) { return NativeCall<float, int, int>(this, "UDistributionFloatConstantCurve.GetKeyOut", SubIndex, KeyIndex); }
	void GetOutRange(float * MinOut, float * MaxOut) { NativeCall<void, float *, float *>(this, "UDistributionFloatConstantCurve.GetOutRange", MinOut, MaxOut); }
	void GetTangents(int SubIndex, int KeyIndex, float * ArriveTangent, float * LeaveTangent) { NativeCall<void, int, int, float *, float *>(this, "UDistributionFloatConstantCurve.GetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
	float GetValue(float F, UObject * Data, FRandomStream * InRandomStream) { return NativeCall<float, float, UObject *, FRandomStream *>(this, "UDistributionFloatConstantCurve.GetValue", F, Data, InRandomStream); }
	int SetKeyIn(int KeyIndex, float NewInVal) { return NativeCall<int, int, float>(this, "UDistributionFloatConstantCurve.SetKeyIn", KeyIndex, NewInVal); }
	void SetKeyInterpMode(int KeyIndex, EInterpCurveMode NewMode) { NativeCall<void, int, EInterpCurveMode>(this, "UDistributionFloatConstantCurve.SetKeyInterpMode", KeyIndex, NewMode); }
	void SetKeyOut(int SubIndex, int KeyIndex, float NewOutVal) { NativeCall<void, int, int, float>(this, "UDistributionFloatConstantCurve.SetKeyOut", SubIndex, KeyIndex, NewOutVal); }
	void SetTangents(int SubIndex, int KeyIndex, float ArriveTangent, float LeaveTangent) { NativeCall<void, int, int, float, float>(this, "UDistributionFloatConstantCurve.SetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
};

