#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCameraAnimInst : UObject
{
	char __padding[0xe8L];
	UCameraAnim * CamAnimField() { return GetNativePointerField<UCameraAnim *>(this, "UCameraAnimInst.CamAnim"); }
	float& CurTimeField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.CurTime"); }
	float& BlendInTimeField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.BlendInTime"); }
	float& BlendOutTimeField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.BlendOutTime"); }
	float& CurBlendInTimeField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.CurBlendInTime"); }
	float& CurBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.CurBlendOutTime"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.PlayRate"); }
	float& BasePlayScaleField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.BasePlayScale"); }
	float& TransientScaleModifierField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.TransientScaleModifier"); }
	float& CurrentBlendWeightField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.CurrentBlendWeight"); }
	float& RemainingTimeField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.RemainingTime"); }
	TEnumAsByte<enum ECameraAnimPlaySpace::Type>& PlaySpaceField() { return *GetNativePointerField<TEnumAsByte<enum ECameraAnimPlaySpace::Type>*>(this, "UCameraAnimInst.PlaySpace"); }
	FMatrix& UserPlaySpaceMatrixField() { return *GetNativePointerField<FMatrix*>(this, "UCameraAnimInst.UserPlaySpaceMatrix"); }
	FVector& LastCameraLocField() { return *GetNativePointerField<FVector*>(this, "UCameraAnimInst.LastCameraLoc"); }
	FTransform& InitialCamToWorldField() { return *GetNativePointerField<FTransform*>(this, "UCameraAnimInst.InitialCamToWorld"); }
	float& InitialFOVField() { return *GetNativePointerField<float*>(this, "UCameraAnimInst.InitialFOV"); }

	// Functions

	void AdvanceAnim(float DeltaTime, bool bJump) { NativeCall<void, float, bool>(this, "UCameraAnimInst.AdvanceAnim", DeltaTime, bJump); }
	void Play(UCameraAnim * Anim, AActor * CamActor, float InRate, float InScale, float InBlendInTime, float InBlendOutTime, bool bInLooping, bool bRandomStartTime, float Duration) { NativeCall<void, UCameraAnim *, AActor *, float, float, float, float, bool, bool, float>(this, "UCameraAnimInst.Play", Anim, CamActor, InRate, InScale, InBlendInTime, InBlendOutTime, bInLooping, bRandomStartTime, Duration); }
	void SetDuration(float NewDuration) { NativeCall<void, float>(this, "UCameraAnimInst.SetDuration", NewDuration); }
	void SetPlaySpace(ECameraAnimPlaySpace::Type NewSpace, FRotator UserPlaySpace) { NativeCall<void, ECameraAnimPlaySpace::Type, FRotator>(this, "UCameraAnimInst.SetPlaySpace", NewSpace, UserPlaySpace); }
	void Stop(bool bImmediate) { NativeCall<void, bool>(this, "UCameraAnimInst.Stop", bImmediate); }
	void Update(float NewRate, float NewScale, float NewBlendInTime, float NewBlendOutTime, float NewDuration) { NativeCall<void, float, float, float, float, float>(this, "UCameraAnimInst.Update", NewRate, NewScale, NewBlendInTime, NewBlendOutTime, NewDuration); }
};

