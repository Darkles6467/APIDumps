#pragma once

#include "BaseDeclarations.h"
#include "UDistributionFloat.h"
#include "UDistribution.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDistributionFloatUniformCurve : UDistributionFloat
{
	char __padding[0x10L];
	FInterpCurve<FVector2D>& ConstantCurveField() { return *GetNativePointerField<FInterpCurve<FVector2D>*>(this, "UDistributionFloatUniformCurve.ConstantCurve"); }

	// Functions

	int CreateNewKey(float KeyIn) { return NativeCall<int, float>(this, "UDistributionFloatUniformCurve.CreateNewKey", KeyIn); }
	void DeleteKey(int KeyIndex) { NativeCall<void, int>(this, "UDistributionFloatUniformCurve.DeleteKey", KeyIndex); }
	float EvalSub(int SubIndex, float InVal) { return NativeCall<float, int, float>(this, "UDistributionFloatUniformCurve.EvalSub", SubIndex, InVal); }
	void GetInRange(float * MinIn, float * MaxIn) { NativeCall<void, float *, float *>(this, "UDistributionFloatUniformCurve.GetInRange", MinIn, MaxIn); }
	FColor * GetKeyColor(FColor * result, int SubIndex, int KeyIndex, const FColor * CurveColor) { return NativeCall<FColor *, FColor *, int, int, const FColor *>(this, "UDistributionFloatUniformCurve.GetKeyColor", result, SubIndex, KeyIndex, CurveColor); }
	float GetKeyIn(int KeyIndex) { return NativeCall<float, int>(this, "UDistributionFloatUniformCurve.GetKeyIn", KeyIndex); }
	EInterpCurveMode GetKeyInterpMode(int KeyIndex) { return NativeCall<EInterpCurveMode, int>(this, "UDistributionFloatUniformCurve.GetKeyInterpMode", KeyIndex); }
	float GetKeyOut(int SubIndex, int KeyIndex) { return NativeCall<float, int, int>(this, "UDistributionFloatUniformCurve.GetKeyOut", SubIndex, KeyIndex); }
	FVector2D * GetMinMaxValue(FVector2D * result, float F, UObject * Data) { return NativeCall<FVector2D *, FVector2D *, float, UObject *>(this, "UDistributionFloatUniformCurve.GetMinMaxValue", result, F, Data); }
	ERawDistributionOperation GetOperation() { return NativeCall<ERawDistributionOperation>(this, "UDistributionFloatUniformCurve.GetOperation"); }
	void GetOutRange(float * MinOut, float * MaxOut) { NativeCall<void, float *, float *>(this, "UDistributionFloatUniformCurve.GetOutRange", MinOut, MaxOut); }
	void GetTangents(int SubIndex, int KeyIndex, float * ArriveTangent, float * LeaveTangent) { NativeCall<void, int, int, float *, float *>(this, "UDistributionFloatUniformCurve.GetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
	float GetValue(float F, UObject * Data, FRandomStream * InRandomStream) { return NativeCall<float, float, UObject *, FRandomStream *>(this, "UDistributionFloatUniformCurve.GetValue", F, Data, InRandomStream); }
	unsigned int InitializeRawEntry(float Time, float * Values) { return NativeCall<unsigned int, float, float *>(this, "UDistributionFloatUniformCurve.InitializeRawEntry", Time, Values); }
	int SetKeyIn(int KeyIndex, float NewInVal) { return NativeCall<int, int, float>(this, "UDistributionFloatUniformCurve.SetKeyIn", KeyIndex, NewInVal); }
	void SetKeyInterpMode(int KeyIndex, EInterpCurveMode NewMode) { NativeCall<void, int, EInterpCurveMode>(this, "UDistributionFloatUniformCurve.SetKeyInterpMode", KeyIndex, NewMode); }
	void SetKeyOut(int SubIndex, int KeyIndex, float NewOutVal) { NativeCall<void, int, int, float>(this, "UDistributionFloatUniformCurve.SetKeyOut", SubIndex, KeyIndex, NewOutVal); }
	void SetTangents(int SubIndex, int KeyIndex, float ArriveTangent, float LeaveTangent) { NativeCall<void, int, int, float, float>(this, "UDistributionFloatUniformCurve.SetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
};

