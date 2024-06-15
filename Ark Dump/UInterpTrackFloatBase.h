#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"

struct UInterpTrackFloatBase : UInterpTrack
{
	char __padding[0x18L];
	FInterpCurve<float>& FloatTrackField() { return *GetNativePointerField<FInterpCurve<float>*>(this, "UInterpTrackFloatBase.FloatTrack"); }
	float& CurveTensionField() { return *GetNativePointerField<float*>(this, "UInterpTrackFloatBase.CurveTension"); }

	// Functions

	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackFloatBase.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	bool GetClosestSnapPosition(float InPosition, TArray<int> * IgnoreKeys, float * OutPosition) { return NativeCall<bool, float, TArray<int> *, float *>(this, "UInterpTrackFloatBase.GetClosestSnapPosition", InPosition, IgnoreKeys, OutPosition); }
	int GetKeyframeIndex(float KeyTime) { return NativeCall<int, float>(this, "UInterpTrackFloatBase.GetKeyframeIndex", KeyTime); }
	float GetKeyframeTime(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackFloatBase.GetKeyframeTime", KeyIndex); }
	void GetTimeRange(float * StartTime, float * EndTime) { NativeCall<void, float *, float *>(this, "UInterpTrackFloatBase.GetTimeRange", StartTime, EndTime); }
	float GetTrackEndTime() { return NativeCall<float>(this, "UInterpTrackFloatBase.GetTrackEndTime"); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackFloatBase.RemoveKeyframe", KeyIndex); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackFloatBase.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	int CreateNewKey(float KeyIn) { return NativeCall<int, float>(this, "UInterpTrackFloatBase.CreateNewKey", KeyIn); }
	void DeleteKey(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackFloatBase.DeleteKey", KeyIndex); }
	float EvalSub(int SubIndex, float InVal) { return NativeCall<float, int, float>(this, "UInterpTrackFloatBase.EvalSub", SubIndex, InVal); }
	void GetInRange(float * MinIn, float * MaxIn) { NativeCall<void, float *, float *>(this, "UInterpTrackFloatBase.GetInRange", MinIn, MaxIn); }
	float GetKeyIn(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackFloatBase.GetKeyIn", KeyIndex); }
	EInterpCurveMode GetKeyInterpMode(int KeyIndex) { return NativeCall<EInterpCurveMode, int>(this, "UInterpTrackFloatBase.GetKeyInterpMode", KeyIndex); }
	float GetKeyOut(int SubIndex, int KeyIndex) { return NativeCall<float, int, int>(this, "UInterpTrackFloatBase.GetKeyOut", SubIndex, KeyIndex); }
	FColor * GetKeyframeColor(FColor * result, int KeyIndex) { return NativeCall<FColor *, FColor *, int>(this, "UInterpTrackFloatBase.GetKeyframeColor", result, KeyIndex); }
	void GetOutRange(float * MinOut, float * MaxOut) { NativeCall<void, float *, float *>(this, "UInterpTrackFloatBase.GetOutRange", MinOut, MaxOut); }
	void GetTangents(int SubIndex, int KeyIndex, float * ArriveTangent, float * LeaveTangent) { NativeCall<void, int, int, float *, float *>(this, "UInterpTrackFloatBase.GetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
	int SetKeyIn(int KeyIndex, float NewInVal) { return NativeCall<int, int, float>(this, "UInterpTrackFloatBase.SetKeyIn", KeyIndex, NewInVal); }
	void SetKeyInterpMode(int KeyIndex, EInterpCurveMode NewMode) { NativeCall<void, int, EInterpCurveMode>(this, "UInterpTrackFloatBase.SetKeyInterpMode", KeyIndex, NewMode); }
	void SetKeyOut(int SubIndex, int KeyIndex, float NewOutVal) { NativeCall<void, int, int, float>(this, "UInterpTrackFloatBase.SetKeyOut", SubIndex, KeyIndex, NewOutVal); }
	void SetTangents(int SubIndex, int KeyIndex, float ArriveTangent, float LeaveTangent) { NativeCall<void, int, int, float, float>(this, "UInterpTrackFloatBase.SetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
};

