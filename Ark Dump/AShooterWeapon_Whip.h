#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Melee.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AShooterWeapon_Whip : AShooterWeapon_Melee
{
	char __padding[0x48L];
	FVector& HarvestingBoxExtentField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Whip.HarvestingBoxExtent"); }
	FVector& HarvestingWhipTipOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Whip.HarvestingWhipTipOffset"); }
	float& MaxDinoDragWeightToApplyBuffField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.MaxDinoDragWeightToApplyBuff"); }
	float& MaxFlyerDinoDragWeightToApplyBuffField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.MaxFlyerDinoDragWeightToApplyBuff"); }
	float& DurabilityMultiplierForFriendDinosField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.DurabilityMultiplierForFriendDinos"); }
	float& DurabilityMultiplierForHarvestingField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.DurabilityMultiplierForHarvesting"); }
	float& PreviousMaxUseDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.PreviousMaxUseDistance"); }

	// Functions

	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "AShooterWeapon_Whip.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	bool CanHerdDino(APrimalDinoCharacter * DinoCharacter) { return NativeCall<bool, APrimalDinoCharacter *>(this, "AShooterWeapon_Whip.CanHerdDino", DinoCharacter); }
	bool CanStunDino(APrimalDinoCharacter * DinoCharacter) { return NativeCall<bool, APrimalDinoCharacter *>(this, "AShooterWeapon_Whip.CanStunDino", DinoCharacter); }
	void Destroyed() { NativeCall<void>(this, "AShooterWeapon_Whip.Destroyed"); }
	void DoMeleeAttack() { NativeCall<void>(this, "AShooterWeapon_Whip.DoMeleeAttack"); }
	void HarvestWhipExtended() { NativeCall<void>(this, "AShooterWeapon_Whip.HarvestWhipExtended"); }
	void HarvestWhipNear() { NativeCall<void>(this, "AShooterWeapon_Whip.HarvestWhipNear"); }
	void OnEquipFinished() { NativeCall<void>(this, "AShooterWeapon_Whip.OnEquipFinished"); }
	void TickMeleeSwing(float DeltaTime) { NativeCall<void, float>(this, "AShooterWeapon_Whip.TickMeleeSwing", DeltaTime); }
};

