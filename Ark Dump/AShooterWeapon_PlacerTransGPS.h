#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AShooterWeapon_Placer : AShooterWeapon
{
	char __padding[0x80L];
	FWeaponAnim& SecondaryActionAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.SecondaryActionAnim"); }
	FWeaponAnim& UnableToPlaceAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.UnableToPlaceAnim"); }
	FWeaponAnim& PlaceOnSelfAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.PlaceOnSelfAnim"); }
	FWeaponAnim& EquipItemAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Placer.EquipItemAnim"); }
	float& TimeToHideLeftArmFPVField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.TimeToHideLeftArmFPV"); }
	FName& ExplosiveBoneNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Placer.ExplosiveBoneName"); }
	FName& ItemAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Placer.ItemAttachPoint3P"); }
	float& DetonateExplosivesMaxRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.DetonateExplosivesMaxRadius"); }
	bool& ChangeMaterialDiffrentBehaviourField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.ChangeMaterialDiffrentBehaviour"); }
	bool& bHiddenExplosiveField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.bHiddenExplosive"); }
	bool& bWaitingForPlacementField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.bWaitingForPlacement"); }
	bool& bStructureCanBePlacedField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Placer.bStructureCanBePlaced"); }
	float& PlacementWaitTimeFromEquipField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.PlacementWaitTimeFromEquip"); }
	float& MinimumTimeBetweenPlacementsField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.MinimumTimeBetweenPlacements"); }
	float& LastFireTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Placer.LastFireTime"); }

	// Functions

	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "AShooterWeapon_Placer.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Placer.AttachOtherMeshes"); }
	bool CanFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "AShooterWeapon_Placer.CanFire", bForceAllowSubmergedFiring); }
	void ConfirmStructurePlacement(bool DoNotUseAmmo) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.ConfirmStructurePlacement", DoNotUseAmmo); }
	void DetachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Placer.DetachOtherMeshes"); }
	void DetonateExplosives() { NativeCall<void>(this, "AShooterWeapon_Placer.DetonateExplosives"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Placer.FireWeapon"); }
	void GetPlacementOrigin(FVector * OriginLocation, FRotator * OriginRotation) { NativeCall<void, FVector *, FRotator *>(this, "AShooterWeapon_Placer.GetPlacementOrigin", OriginLocation, OriginRotation); }
	void OnEquip() { NativeCall<void>(this, "AShooterWeapon_Placer.OnEquip"); }
	void PlaceStructure() { NativeCall<void>(this, "AShooterWeapon_Placer.PlaceStructure"); }
	void PlaceStructureWithSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Placer.PlaceStructureWithSecondaryAction"); }
	void RefreshLeftArmVisibility() { NativeCall<void>(this, "AShooterWeapon_Placer.RefreshLeftArmVisibility"); }
	void ServerDetonateExplosives_Implementation() { NativeCall<void>(this, "AShooterWeapon_Placer.ServerDetonateExplosives_Implementation"); }
	void SetItemVisibility(bool bVisible) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.SetItemVisibility", bVisible); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.StartFire", bFromGamepad); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.StartReload", bFromReplication); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_Placer.StartSecondaryAction"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Placer.Tick", DeltaSeconds); }
	void UnHideLeftArm() { NativeCall<void>(this, "AShooterWeapon_Placer.UnHideLeftArm"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon_Placer.UpdateFirstPersonMeshes", bIsFirstPerson); }
	void UseAmmo(int UseAmmoAmountOverride) { NativeCall<void, int>(this, "AShooterWeapon_Placer.UseAmmo", UseAmmoAmountOverride); }
	void BPPrefireAction() { NativeCall<void>(this, "AShooterWeapon_Placer.BPPrefireAction"); }
	bool BPSecondaryAction() { return NativeCall<bool>(this, "AShooterWeapon_Placer.BPSecondaryAction"); }
	void ServerDetonateExplosives() { NativeCall<void>(this, "AShooterWeapon_Placer.ServerDetonateExplosives"); }
};

struct AShooterWeapon_PlacerTransGPS : AShooterWeapon_Placer
{
	char __padding[0x40L];
	FName& DeviceAttachPoint1PField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_PlacerTransGPS.DeviceAttachPoint1P"); }
	float& DetonateTransponderMaxRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_PlacerTransGPS.DetonateTransponderMaxRadius"); }
	float& ShowTranspondersCoolDownField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_PlacerTransGPS.ShowTranspondersCoolDown"); }
	FName& FPVBoneNameToHideField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_PlacerTransGPS.FPVBoneNameToHide"); }
	float& CurrentFrequencyField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_PlacerTransGPS.CurrentFrequency"); }
	FString& LastTransponderBaseNameField() { return *GetNativePointerField<FString*>(this, "AShooterWeapon_PlacerTransGPS.LastTransponderBaseName"); }
	bool& bShowTranspondersInfoField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_PlacerTransGPS.bShowTranspondersInfo"); }

	// Functions

	void AttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.AttachOtherMeshes"); }
	void AttachToSelf() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.AttachToSelf"); }
	void ClientShowTransponders_Implementation(bool bValue) { NativeCall<void, bool>(this, "AShooterWeapon_PlacerTransGPS.ClientShowTransponders_Implementation", bValue); }
	void DetonateExplosives() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.DetonateExplosives"); }
	void HideTranspondersInfo() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.HideTranspondersInfo"); }
	void PlaceStructure() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.PlaceStructure"); }
	void ServerAttachToSelf_Implementation() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.ServerAttachToSelf_Implementation"); }
	void ServerSetFrequency_Implementation(float Freq) { NativeCall<void, float>(this, "AShooterWeapon_PlacerTransGPS.ServerSetFrequency_Implementation", Freq); }
	void SetItemVisibility(bool bVisible) { NativeCall<void, bool>(this, "AShooterWeapon_PlacerTransGPS.SetItemVisibility", bVisible); }
	void ShowTranspondersInfo(bool bValue) { NativeCall<void, bool>(this, "AShooterWeapon_PlacerTransGPS.ShowTranspondersInfo", bValue); }
	void StartAltFire() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.StartAltFire"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_PlacerTransGPS.StartFire", bFromGamepad); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.StartSecondaryAction"); }
	void StartUnequip_Implementation() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.StartUnequip_Implementation"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_PlacerTransGPS.Tick", DeltaSeconds); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon_PlacerTransGPS.UpdateFirstPersonMeshes", bIsFirstPerson); }
	void ClientShowTransponders(bool bValue) { NativeCall<void, bool>(this, "AShooterWeapon_PlacerTransGPS.ClientShowTransponders", bValue); }
	void ServerAttachToSelf() { NativeCall<void>(this, "AShooterWeapon_PlacerTransGPS.ServerAttachToSelf"); }
	void ServerSetFrequency(float Freq) { NativeCall<void, float>(this, "AShooterWeapon_PlacerTransGPS.ServerSetFrequency", Freq); }
};

