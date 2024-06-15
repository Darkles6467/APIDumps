#pragma once

#include "BaseDeclarations.h"
#include "UAnimNotify.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimNotify_StopSound : UAnimNotify
{
	char __padding[0x10L];
	float& FadeOutTimeField() { return *GetNativePointerField<float*>(this, "UAnimNotify_StopSound.FadeOutTime"); }

	// Functions

	FString * GetNotifyName_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "UAnimNotify_StopSound.GetNotifyName_Implementation", result); }
	bool Received_Notify(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *>(this, "UAnimNotify_StopSound.Received_Notify", MeshComp, Animation); }
};

