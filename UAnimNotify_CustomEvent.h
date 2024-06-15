#pragma once

#include "BaseDeclarations.h"
#include "UAnimNotify.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimNotify_CustomEvent : UAnimNotify
{
	char __padding[0x18L];
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "UAnimNotify_CustomEvent.EventName"); }
	bool& bSendNotifyToWeaponField() { return *GetNativePointerField<bool*>(this, "UAnimNotify_CustomEvent.bSendNotifyToWeapon"); }
	bool& bSendNotifyToArmorSlotField() { return *GetNativePointerField<bool*>(this, "UAnimNotify_CustomEvent.bSendNotifyToArmorSlot"); }
	TEnumAsByte<enum EPrimalEquipmentType::Type>& ArmorSlotToSendNotifyField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "UAnimNotify_CustomEvent.ArmorSlotToSendNotify"); }
	bool& bLockHeadPositionNormalizedField() { return *GetNativePointerField<bool*>(this, "UAnimNotify_CustomEvent.bLockHeadPositionNormalized"); }
	float& TimeToLockHeadPositionField() { return *GetNativePointerField<float*>(this, "UAnimNotify_CustomEvent.TimeToLockHeadPosition"); }
	bool& bUnlockHeadPositionNormalizedField() { return *GetNativePointerField<bool*>(this, "UAnimNotify_CustomEvent.bUnlockHeadPositionNormalized"); }

	// Functions

	FString * GetNotifyName_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "UAnimNotify_CustomEvent.GetNotifyName_Implementation", result); }
	void PostLoad() { NativeCall<void>(this, "UAnimNotify_CustomEvent.PostLoad"); }
	bool Received_Notify(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation) { return NativeCall<bool, USkeletalMeshComponent *, UAnimSequenceBase *>(this, "UAnimNotify_CustomEvent.Received_Notify", MeshComp, Animation); }
};

