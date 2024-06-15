#pragma once

#include "BaseDeclarations.h"
#include "UAnimNotifyState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimNotifyState_Trail : UAnimNotifyState
{
	char __padding[0x28L];
	UParticleSystem * PSTemplateField() { return GetNativePointerField<UParticleSystem *>(this, "UAnimNotifyState_Trail.PSTemplate"); }
	FName& FirstSocketNameField() { return *GetNativePointerField<FName*>(this, "UAnimNotifyState_Trail.FirstSocketName"); }
	FName& SecondSocketNameField() { return *GetNativePointerField<FName*>(this, "UAnimNotifyState_Trail.SecondSocketName"); }
	TEnumAsByte<enum ETrailWidthMode>& WidthScaleModeField() { return *GetNativePointerField<TEnumAsByte<enum ETrailWidthMode>*>(this, "UAnimNotifyState_Trail.WidthScaleMode"); }
	FName& WidthScaleCurveField() { return *GetNativePointerField<FName*>(this, "UAnimNotifyState_Trail.WidthScaleCurve"); }

	// Functions

	void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) { NativeCall<void, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState_Trail.NotifyBegin", MeshComp, Animation, TotalDuration); }
	void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) { NativeCall<void, USkeletalMeshComponent *, UAnimSequenceBase *>(this, "UAnimNotifyState_Trail.NotifyEnd", MeshComp, Animation); }
	void NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime) { NativeCall<void, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState_Trail.NotifyTick", MeshComp, Animation, FrameDeltaTime); }
};

