#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UAnimNotifyState : UObject
{
	char __padding[0x8L];
	bool& bIgnoreOnDediServerField() { return *GetNativePointerField<bool*>(this, "UAnimNotifyState.bIgnoreOnDediServer"); }

	// Functions

	FString * GetEditorComment(FString * result) { return NativeCall<FString *, FString *>(this, "UAnimNotifyState.GetEditorComment", result); }
	FString * GetNotifyName_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "UAnimNotifyState.GetNotifyName_Implementation", result); }
	void NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) { NativeCall<void, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState.NotifyBegin", MeshComp, Animation, TotalDuration); }
	void NotifyEnd(bool bVisible, bool bIsLowMemory) { NativeCall<void, bool, bool>(this, "UAnimNotifyState.NotifyEnd", bVisible, bIsLowMemory); }
	bool Received_NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState.Received_NotifyBegin", MeshComp, Animation, TotalDuration); }
	bool Received_NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *>(this, "UAnimNotifyState.Received_NotifyEnd", MeshComp, Animation); }
	bool Received_NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState.Received_NotifyTick", MeshComp, Animation, FrameDeltaTime); }
};

