#pragma once

#include "BaseDeclarations.h"
#include "UAnimNotifyState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState
{
	char __padding[0x30L];
	UParticleSystem * PSTemplateField() { return GetNativePointerField<UParticleSystem *>(this, "UAnimNotifyState_TimedParticleEffect.PSTemplate"); }
	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "UAnimNotifyState_TimedParticleEffect.SocketName"); }
	FVector& LocationOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimNotifyState_TimedParticleEffect.LocationOffset"); }
	FRotator& RotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "UAnimNotifyState_TimedParticleEffect.RotationOffset"); }
	bool& bDestroyAtEndField() { return *GetNativePointerField<bool*>(this, "UAnimNotifyState_TimedParticleEffect.bDestroyAtEnd"); }

	// Functions

	FString * GetNotifyName_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "UAnimNotifyState_TimedParticleEffect.GetNotifyName_Implementation", result); }
	void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) { NativeCall<void, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState_TimedParticleEffect.NotifyBegin", MeshComp, Animation, TotalDuration); }
	void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) { NativeCall<void, USkeletalMeshComponent *, UAnimSequenceBase *>(this, "UAnimNotifyState_TimedParticleEffect.NotifyEnd", MeshComp, Animation); }
	bool ValidateParameters(USkeletalMeshComponent * MeshComp) { return NativeCall<bool, USkeletalMeshComponent *>(this, "UAnimNotifyState_TimedParticleEffect.ValidateParameters", MeshComp); }
	void NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime) { NativeCall<void, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState_TimedParticleEffect.NotifyTick", MeshComp, Animation, FrameDeltaTime); }
};

