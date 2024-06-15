#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackLinearColorBase : UInterpTrack
{
	char __padding[0x18L];
	FInterpCurve<FLinearColor>& LinearColorTrackField() { return *GetNativePointerField<FInterpCurve<FLinearColor>*>(this, "UInterpTrackLinearColorBase.LinearColorTrack"); }
	float& CurveTensionField() { return *GetNativePointerField<float*>(this, "UInterpTrackLinearColorBase.CurveTension"); }

	// Functions

	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackLinearColorBase.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	bool GetClosestSnapPosition(float InPosition, TArray<int> * IgnoreKeys, float * OutPosition) { return NativeCall<bool, float, TArray<int> *, float *>(this, "UInterpTrackLinearColorBase.GetClosestSnapPosition", InPosition, IgnoreKeys, OutPosition); }
	int GetKeyframeIndex(float KeyTime) { return NativeCall<int, float>(this, "UInterpTrackLinearColorBase.GetKeyframeIndex", KeyTime); }
	float GetKeyframeTime(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackLinearColorBase.GetKeyframeTime", KeyIndex); }
	void GetTimeRange(float * StartTime, float * EndTime) { NativeCall<void, float *, float *>(this, "UInterpTrackLinearColorBase.GetTimeRange", StartTime, EndTime); }
	float GetTrackEndTime() { return NativeCall<float>(this, "UInterpTrackLinearColorBase.GetTrackEndTime"); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackLinearColorBase.RemoveKeyframe", KeyIndex); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackLinearColorBase.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	int CreateNewKey(float KeyIn) { return NativeCall<int, float>(this, "UInterpTrackLinearColorBase.CreateNewKey", KeyIn); }
	void DeleteKey(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackLinearColorBase.DeleteKey", KeyIndex); }
	float EvalSub(int SubIndex, float InVal) { return NativeCall<float, int, float>(this, "UInterpTrackLinearColorBase.EvalSub", SubIndex, InVal); }
	void GetInRange(float * MinIn, float * MaxIn) { NativeCall<void, float *, float *>(this, "UInterpTrackLinearColorBase.GetInRange", MinIn, MaxIn); }
	FColor * GetKeyColor(FColor * result, int SubIndex, int KeyIndex, const FColor * CurveColor) { return NativeCall<FColor *, FColor *, int, int, const FColor *>(this, "UInterpTrackLinearColorBase.GetKeyColor", result, SubIndex, KeyIndex, CurveColor); }
	float GetKeyIn(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackLinearColorBase.GetKeyIn", KeyIndex); }
	EInterpCurveMode GetKeyInterpMode(int KeyIndex) { return NativeCall<EInterpCurveMode, int>(this, "UInterpTrackLinearColorBase.GetKeyInterpMode", KeyIndex); }
	float GetKeyOut(int SubIndex, int KeyIndex) { return NativeCall<float, int, int>(this, "UInterpTrackLinearColorBase.GetKeyOut", SubIndex, KeyIndex); }
	FColor * GetKeyframeColor(FColor * result, int KeyIndex) { return NativeCall<FColor *, FColor *, int>(this, "UInterpTrackLinearColorBase.GetKeyframeColor", result, KeyIndex); }
	void GetOutRange(float * MinOut, float * MaxOut) { NativeCall<void, float *, float *>(this, "UInterpTrackLinearColorBase.GetOutRange", MinOut, MaxOut); }
	FColor * GetSubCurveButtonColor(FColor * result, int SubCurveIndex, bool bIsSubCurveHidden) { return NativeCall<FColor *, FColor *, int, bool>(this, "UInterpTrackLinearColorBase.GetSubCurveButtonColor", result, SubCurveIndex, bIsSubCurveHidden); }
	void GetTangents(int SubIndex, int KeyIndex, float * ArriveTangent, float * LeaveTangent) { NativeCall<void, int, int, float *, float *>(this, "UInterpTrackLinearColorBase.GetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
	int SetKeyIn(int KeyIndex, float NewInVal) { return NativeCall<int, int, float>(this, "UInterpTrackLinearColorBase.SetKeyIn", KeyIndex, NewInVal); }
	void SetKeyInterpMode(int KeyIndex, EInterpCurveMode NewMode) { NativeCall<void, int, EInterpCurveMode>(this, "UInterpTrackLinearColorBase.SetKeyInterpMode", KeyIndex, NewMode); }
	void SetKeyOut(int SubIndex, int KeyIndex, float NewOutVal) { NativeCall<void, int, int, float>(this, "UInterpTrackLinearColorBase.SetKeyOut", SubIndex, KeyIndex, NewOutVal); }
	void SetTangents(int SubIndex, int KeyIndex, float ArriveTangent, float LeaveTangent) { NativeCall<void, int, int, float, float>(this, "UInterpTrackLinearColorBase.SetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
};

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase
{
	char __padding[0x10L];
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "UInterpTrackLinearColorProp.PropertyName"); }
	TEnumAsByte<enum ETrackInterpMode>& InterpModeField() { return *GetNativePointerField<TEnumAsByte<enum ETrackInterpMode>*>(this, "UInterpTrackLinearColorProp.InterpMode"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackLinearColorProp.AddKeyframe", Time, TrInst, InitInterpMode); }
	bool CanAddKeyframe(UInterpTrackInst * TrInst) { return NativeCall<bool, UInterpTrackInst *>(this, "UInterpTrackLinearColorProp.CanAddKeyframe", TrInst); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackLinearColorProp.GetEdHelperClassName", result); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackLinearColorProp.GetSlateHelperClassName", result); }
	void UpdateKeyframe(int KeyIndex, UInterpTrackInst * TrInst) { NativeCall<void, int, UInterpTrackInst *>(this, "UInterpTrackLinearColorProp.UpdateKeyframe", KeyIndex, TrInst); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackLinearColorProp.UpdateTrack", NewPosition, TrInst, bJump); }
};

