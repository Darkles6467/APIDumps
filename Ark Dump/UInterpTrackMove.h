#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackMove : UInterpTrack
{
	char __padding[0x48L];
	FInterpCurve<FVector>& PosTrackField() { return *GetNativePointerField<FInterpCurve<FVector>*>(this, "UInterpTrackMove.PosTrack"); }
	FInterpCurve<FVector>& EulerTrackField() { return *GetNativePointerField<FInterpCurve<FVector>*>(this, "UInterpTrackMove.EulerTrack"); }
	FInterpLookupTrack& LookupTrackField() { return *GetNativePointerField<FInterpLookupTrack*>(this, "UInterpTrackMove.LookupTrack"); }
	FName& LookAtGroupNameField() { return *GetNativePointerField<FName*>(this, "UInterpTrackMove.LookAtGroupName"); }
	float& LinCurveTensionField() { return *GetNativePointerField<float*>(this, "UInterpTrackMove.LinCurveTension"); }
	float& AngCurveTensionField() { return *GetNativePointerField<float*>(this, "UInterpTrackMove.AngCurveTension"); }
	TEnumAsByte<enum EInterpTrackMoveRotMode>& RotModeField() { return *GetNativePointerField<TEnumAsByte<enum EInterpTrackMoveRotMode>*>(this, "UInterpTrackMove.RotMode"); }

	// Functions

	int AddChildKeyframe(UInterpTrack * ChildTrack, float Time, UInterpTrackInst * ChildTrackInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, UInterpTrack *, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackMove.AddChildKeyframe", ChildTrack, Time, ChildTrackInst, InitInterpMode); }
	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackMove.AddKeyframe", Time, TrInst, InitInterpMode); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "UInterpTrackMove.ApplyWorldOffset", InOffset, bWorldShift); }
	bool CanAddChildKeyframe(UInterpTrackInst * TrInst) { return NativeCall<bool, UInterpTrackInst *>(this, "UInterpTrackMove.CanAddChildKeyframe", TrInst); }
	void ClearLookupKeyGroupName(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackMove.ClearLookupKeyGroupName", KeyIndex); }
	void ComputeWorldSpaceKeyTransform(UInterpTrackInstMove * MoveTrackInst, const FVector * RelativeSpacePos, const FRotator * RelativeSpaceRot, FVector * OutPos, FRotator * OutRot) { NativeCall<void, UInterpTrackInstMove *, const FVector *, const FRotator *, FVector *, FRotator *>(this, "UInterpTrackMove.ComputeWorldSpaceKeyTransform", MoveTrackInst, RelativeSpacePos, RelativeSpaceRot, OutPos, OutRot); }
	void ConditionalPreviewUpdateTrack(float NewPosition, UInterpTrackInst * TrInst) { NativeCall<void, float, UInterpTrackInst *>(this, "UInterpTrackMove.ConditionalPreviewUpdateTrack", NewPosition, TrInst); }
	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackMove.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	FVector * EvalPositionAtTime(FVector * result, UInterpTrackInst * TrInst, float Time) { return NativeCall<FVector *, FVector *, UInterpTrackInst *, float>(this, "UInterpTrackMove.EvalPositionAtTime", result, TrInst, Time); }
	FVector * EvalRotationAtTime(FVector * result, UInterpTrackInst * TrInst, float Time) { return NativeCall<FVector *, FVector *, UInterpTrackInst *, float>(this, "UInterpTrackMove.EvalRotationAtTime", result, TrInst, Time); }
	void GetKeyTransformAtTime(UInterpTrackInst * TrInst, float Time, FVector * OutPos, FRotator * OutRot) { NativeCall<void, UInterpTrackInst *, float, FVector *, FRotator *>(this, "UInterpTrackMove.GetKeyTransformAtTime", TrInst, Time, OutPos, OutRot); }
	void GetKeyframePosition(UInterpTrackInst * TrInst, int KeyIndex, float * OutTime, FVector * OutPos, FVector * OutArriveTangent, FVector * OutLeaveTangent) { NativeCall<void, UInterpTrackInst *, int, float *, FVector *, FVector *, FVector *>(this, "UInterpTrackMove.GetKeyframePosition", TrInst, KeyIndex, OutTime, OutPos, OutArriveTangent, OutLeaveTangent); }
	void GetKeyframeRotation(UInterpTrackInst * TrInst, int KeyIndex, float * OutTime, FVector * OutRot, FVector * OutArriveTangent, FVector * OutLeaveTangent) { NativeCall<void, UInterpTrackInst *, int, float *, FVector *, FVector *, FVector *>(this, "UInterpTrackMove.GetKeyframeRotation", TrInst, KeyIndex, OutTime, OutRot, OutArriveTangent, OutLeaveTangent); }
	float GetKeyframeTime(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackMove.GetKeyframeTime", KeyIndex); }
	bool GetLocationAtTime(UInterpTrackInst * TrInst, float Time, FVector * OutPos, FRotator * OutRot) { return NativeCall<bool, UInterpTrackInst *, float, FVector *, FRotator *>(this, "UInterpTrackMove.GetLocationAtTime", TrInst, Time, OutPos, OutRot); }
	FRotator * GetLookAtRotation(FRotator * result, UInterpTrackInst * TrInst) { return NativeCall<FRotator *, FRotator *, UInterpTrackInst *>(this, "UInterpTrackMove.GetLookAtRotation", result, TrInst); }
	FName * GetLookupKeyGroupName(FName * result, int KeyIndex) { return NativeCall<FName *, FName *, int>(this, "UInterpTrackMove.GetLookupKeyGroupName", result, KeyIndex); }
	FTransform * GetMoveRefFrame(FTransform * result, UInterpTrackInstMove * MoveTrackInst) { return NativeCall<FTransform *, FTransform *, UInterpTrackInstMove *>(this, "UInterpTrackMove.GetMoveRefFrame", result, MoveTrackInst); }
	int GetNumKeyframes() { return NativeCall<int>(this, "UInterpTrackMove.GetNumKeyframes"); }
	void GetTimeRange(float * StartTime, float * EndTime) { NativeCall<void, float *, float *>(this, "UInterpTrackMove.GetTimeRange", StartTime, EndTime); }
	float GetTrackEndTime() { return NativeCall<float>(this, "UInterpTrackMove.GetTrackEndTime"); }
	void ReduceKeys(float IntervalStart, float IntervalEnd, float Tolerance) { NativeCall<void, float, float, float>(this, "UInterpTrackMove.ReduceKeys", IntervalStart, IntervalEnd, Tolerance); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackMove.RemoveKeyframe", KeyIndex); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackMove.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	void SetLookupKeyGroupName(int KeyIndex, const FName * NewGroupName) { NativeCall<void, int, const FName *>(this, "UInterpTrackMove.SetLookupKeyGroupName", KeyIndex, NewGroupName); }
	void UpdateChildKeyframe(UInterpTrack * ChildTrack, int KeyIndex, UInterpTrackInst * TrackInst) { NativeCall<void, UInterpTrack *, int, UInterpTrackInst *>(this, "UInterpTrackMove.UpdateChildKeyframe", ChildTrack, KeyIndex, TrackInst); }
	void UpdateKeyframe(int KeyIndex, UInterpTrackInst * TrInst) { NativeCall<void, int, UInterpTrackInst *>(this, "UInterpTrackMove.UpdateKeyframe", KeyIndex, TrInst); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackMove.UpdateTrack", NewPosition, TrInst, bJump); }
	int CreateNewKey(float KeyIn) { return NativeCall<int, float>(this, "UInterpTrackMove.CreateNewKey", KeyIn); }
	void DeleteKey(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackMove.DeleteKey", KeyIndex); }
	float EvalSub(int SubIndex, float InVal) { return NativeCall<float, int, float>(this, "UInterpTrackMove.EvalSub", SubIndex, InVal); }
	void GetInRange(float * MinIn, float * MaxIn) { NativeCall<void, float *, float *>(this, "UInterpTrackMove.GetInRange", MinIn, MaxIn); }
	FColor * GetKeyColor(FColor * result, int SubIndex, int KeyIndex, const FColor * CurveColor) { return NativeCall<FColor *, FColor *, int, int, const FColor *>(this, "UInterpTrackMove.GetKeyColor", result, SubIndex, KeyIndex, CurveColor); }
	float GetKeyIn(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackMove.GetKeyIn", KeyIndex); }
	EInterpCurveMode GetKeyInterpMode(int KeyIndex) { return NativeCall<EInterpCurveMode, int>(this, "UInterpTrackMove.GetKeyInterpMode", KeyIndex); }
	float GetKeyOut(int SubIndex, int KeyIndex) { return NativeCall<float, int, int>(this, "UInterpTrackMove.GetKeyOut", SubIndex, KeyIndex); }
	int GetNumSubCurves() { return NativeCall<int>(this, "UInterpTrackMove.GetNumSubCurves"); }
	void GetOutRange(float * MinOut, float * MaxOut) { NativeCall<void, float *, float *>(this, "UInterpTrackMove.GetOutRange", MinOut, MaxOut); }
	FColor * GetSubCurveButtonColor(FColor * result, int SubCurveIndex, bool bIsSubCurveHidden) { return NativeCall<FColor *, FColor *, int, bool>(this, "UInterpTrackMove.GetSubCurveButtonColor", result, SubCurveIndex, bIsSubCurveHidden); }
	void GetTangents(int SubIndex, int KeyIndex, float * ArriveTangent, float * LeaveTangent) { NativeCall<void, int, int, float *, float *>(this, "UInterpTrackMove.GetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
	int GetNumKeys() { return NativeCall<int>(this, "UInterpTrackMove.GetNumKeys"); }
	int SetKeyIn(int KeyIndex, float NewInVal) { return NativeCall<int, int, float>(this, "UInterpTrackMove.SetKeyIn", KeyIndex, NewInVal); }
	void SetKeyInterpMode(int KeyIndex, EInterpCurveMode NewMode) { NativeCall<void, int, EInterpCurveMode>(this, "UInterpTrackMove.SetKeyInterpMode", KeyIndex, NewMode); }
	void SetKeyOut(int SubIndex, int KeyIndex, float NewOutVal) { NativeCall<void, int, int, float>(this, "UInterpTrackMove.SetKeyOut", SubIndex, KeyIndex, NewOutVal); }
	void SetTangents(int SubIndex, int KeyIndex, float ArriveTangent, float LeaveTangent) { NativeCall<void, int, int, float, float>(this, "UInterpTrackMove.SetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
};

