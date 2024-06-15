#pragma once

#include "BaseDeclarations.h"
#include "UAnimNotifyState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimNotifyState_Custom : UAnimNotifyState
{
	char __padding[0x10L];
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "UAnimNotifyState_Custom.EventName"); }
	bool& bSendNotifyToWeaponField() { return *GetNativePointerField<bool*>(this, "UAnimNotifyState_Custom.bSendNotifyToWeapon"); }
	bool& bSendNotifyToArmorSlotField() { return *GetNativePointerField<bool*>(this, "UAnimNotifyState_Custom.bSendNotifyToArmorSlot"); }
	TEnumAsByte<enum EPrimalEquipmentType::Type>& ArmorSlotToSendNotifyField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "UAnimNotifyState_Custom.ArmorSlotToSendNotify"); }

	// Functions

	FString * GetNotifyName_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "UAnimNotifyState_Custom.GetNotifyName_Implementation", result); }
	bool Received_NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState_Custom.Received_NotifyBegin", MeshComp, Animation, TotalDuration); }
	bool Received_NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *>(this, "UAnimNotifyState_Custom.Received_NotifyEnd", MeshComp, Animation); }
	bool Received_NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *, float>(this, "UAnimNotifyState_Custom.Received_NotifyTick", MeshComp, Animation, FrameDeltaTime); }
};

