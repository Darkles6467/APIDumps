#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UAnimNotify : UObject
{
	char __padding[0x10L];
	bool& bIgnoreOnDediServerField() { return *GetNativePointerField<bool*>(this, "UAnimNotify.bIgnoreOnDediServer"); }

	// Functions

	FString * GetEditorComment(FString * result) { return NativeCall<FString *, FString *>(this, "UAnimNotify.GetEditorComment", result); }
	FString * GetNotifyName_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "UAnimNotify.GetNotifyName_Implementation", result); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UAnimNotify.GetWorld"); }
	void Notify(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) { NativeCall<void, USkeletalMeshComponent *, UAnimSequenceBase *>(this, "UAnimNotify.Notify", MeshComp, Animation); }
	bool Received_Notify(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *>(this, "UAnimNotify.Received_Notify", MeshComp, Animation); }
};

