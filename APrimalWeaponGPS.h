#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Melee.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct APrimalWeaponGPS : AShooterWeapon_Melee
{
	char __padding[0x2a8L];
	UStaticMesh * AssetSM_MarkerMeshField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalWeaponGPS.AssetSM_MarkerMesh"); }
	UStaticMesh * AssetSM_PlayerMarkerMeshField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalWeaponGPS.AssetSM_PlayerMarkerMesh"); }
	UStaticMesh * AssetSM_BalloonMarkerMeshField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalWeaponGPS.AssetSM_BalloonMarkerMesh"); }
	float& MarkerMapScaleXField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerMapScaleX"); }
	float& MarkerMapScaleYField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerMapScaleY"); }
	float& MarkerOffsetZField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerOffsetZ"); }
	FRotator& MarkerRotationMinField() { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponGPS.MarkerRotationMin"); }
	FRotator& MarkerRotationMaxField() { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponGPS.MarkerRotationMax"); }
	int& MaxMapMarkersField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.MaxMapMarkers"); }
	FColor& MarkerTextColorField() { return *GetNativePointerField<FColor*>(this, "APrimalWeaponGPS.MarkerTextColor"); }
	FColor& PlayerMarkerTextColorField() { return *GetNativePointerField<FColor*>(this, "APrimalWeaponGPS.PlayerMarkerTextColor"); }
	TArray<FPrimalMapMarkerEntryData>& MapMarkersField() { return *GetNativePointerField<TArray<FPrimalMapMarkerEntryData>*>(this, "APrimalWeaponGPS.MapMarkers"); }
	FName& MapAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.MapAttachPoint3P"); }
	FName& CompassAttachPoint1PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.CompassAttachPoint1P"); }
	FName& GPSBoneName1PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.GPSBoneName1P"); }
	FWeaponAnim& ZoomInMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInMapAnim"); }
	FWeaponAnim& ZoomInGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInGPSAnim"); }
	FWeaponAnim& ZoomInCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomInCompassAnim"); }
	FWeaponAnim& ZoomOutMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutMapAnim"); }
	FWeaponAnim& ZoomOutGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutGPSAnim"); }
	FWeaponAnim& ZoomOutCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.ZoomOutCompassAnim"); }
	FWeaponAnim& DisplayMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayMapAnim"); }
	FWeaponAnim& DisplayGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayGPSAnim"); }
	FWeaponAnim& DisplayCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.DisplayCompassAnim"); }
	FWeaponAnim& UnequipMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipMapAnim"); }
	FWeaponAnim& UnequipGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipGPSAnim"); }
	FWeaponAnim& UnequipCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipCompassAnim"); }
	FWeaponAnim& UnequipCompassAndMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.UnequipCompassAndMapAnim"); }
	FWeaponAnim& MeleeMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeMapAnim"); }
	FWeaponAnim& MeleeGPSAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeGPSAnim"); }
	FWeaponAnim& MeleeCompassAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeCompassAnim"); }
	FWeaponAnim& MeleeCompassMapAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGPS.MeleeCompassMapAnim"); }
	UAnimMontage * TPV_MapOnlyIdleField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalWeaponGPS.TPV_MapOnlyIdle"); }
	UAnimMontage * TPV_GPSOnlyIdleField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalWeaponGPS.TPV_GPSOnlyIdle"); }
	UAnimMontage * TPV_MapAndGPSIdleField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalWeaponGPS.TPV_MapAndGPSIdle"); }
	FName& DigitParameterNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.DigitParameterName"); }
	int& LatitudeMaterialIndex1Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex1"); }
	int& LatitudeMaterialIndex2Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex2"); }
	int& LatitudeMaterialIndex3Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex3"); }
	int& LongitudeMaterialIndex1Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex1"); }
	int& LongitudeMaterialIndex2Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex2"); }
	int& LongitudeMaterialIndex3Field() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex3"); }
	int& MapMaterialIndexField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.MapMaterialIndex"); }
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LatitudeOrigin"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LongitudeOrigin"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LongitudeScale"); }
	int& GPSCompassMaterialIndexField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.GPSCompassMaterialIndex"); }
	FName& CompassCenterParameterNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.CompassCenterParameterName"); }
	FName& FogOfWarTextureParameterNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.FogOfWarTextureParameterName"); }
	float& CompassNorthAngleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CompassNorthAngle"); }
	float& CompassInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CompassInterpSpeed"); }
	float& SwingSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.SwingSpeed"); }
	float& MaxSwingAngleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MaxSwingAngle"); }
	FVector& ItemBalloonLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalWeaponGPS.ItemBalloonLocation"); }
	FRotator& CurrentCompassAngleField() { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponGPS.CurrentCompassAngle"); }
	float& CurrentSwingAngleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingAngle"); }
	float& CurrentSwingFactorField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingFactor"); }
	float& CurrentSwingTimeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingTime"); }
	float& PreviousPawnYawField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.PreviousPawnYaw"); }
	int& PreviousLatitudeNumberField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousLatitudeNumber"); }
	int& PreviousLongitudeNumberField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousLongitudeNumber"); }
	int& PreviousBalloonLatitudeNumberField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousBalloonLatitudeNumber"); }
	int& PreviousBalloonLongitudeNumberField() { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousBalloonLongitudeNumber"); }

	// Functions

	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalWeaponGPS.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AttachOtherMeshes() { NativeCall<void>(this, "APrimalWeaponGPS.AttachOtherMeshes"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWeaponGPS.BeginPlay"); }
	void DetachOtherMeshes() { NativeCall<void>(this, "APrimalWeaponGPS.DetachOtherMeshes"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalWeaponGPS.DrawHUD", HUD); }
	bool ForceFirstPerson() { return NativeCall<bool>(this, "APrimalWeaponGPS.ForceFirstPerson"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalWeaponGPS.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void HideGPS1P() { NativeCall<void>(this, "APrimalWeaponGPS.HideGPS1P"); }
	bool IsShowingGPS() { return NativeCall<bool>(this, "APrimalWeaponGPS.IsShowingGPS"); }
	bool IsShowingMap() { return NativeCall<bool>(this, "APrimalWeaponGPS.IsShowingMap"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponGPS.OnEquip"); }
	void OnEquipFinished() { NativeCall<void>(this, "APrimalWeaponGPS.OnEquipFinished"); }
	void PlayUnequipAnimation() { NativeCall<void>(this, "APrimalWeaponGPS.PlayUnequipAnimation"); }
	void RefreshMapMarkers() { NativeCall<void>(this, "APrimalWeaponGPS.RefreshMapMarkers"); }
	void RefreshUseCompass() { NativeCall<void>(this, "APrimalWeaponGPS.RefreshUseCompass"); }
	void RemoveMarkersFromView() { NativeCall<void>(this, "APrimalWeaponGPS.RemoveMarkersFromView"); }
	FWeaponAnim * SelectMeleeAttackAnim(FWeaponAnim * result) { return NativeCall<FWeaponAnim *, FWeaponAnim *>(this, "APrimalWeaponGPS.SelectMeleeAttackAnim", result); }
	void ServerSetUseCompassInsteadOfGPS_Implementation(bool bUseCompass) { NativeCall<void, bool>(this, "APrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS_Implementation", bUseCompass); }
	void ServerShowBoth_Implementation() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowBoth_Implementation"); }
	void ServerShowGPSOnly_Implementation() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowGPSOnly_Implementation"); }
	void ServerShowMapOnly_Implementation() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowMapOnly_Implementation"); }
	void ServerShowNone_Implementation() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowNone_Implementation"); }
	void SetAndShowCompass() { NativeCall<void>(this, "APrimalWeaponGPS.SetAndShowCompass"); }
	void SetAndShowGPS() { NativeCall<void>(this, "APrimalWeaponGPS.SetAndShowGPS"); }
	void SetGPSMeshHidden() { NativeCall<void>(this, "APrimalWeaponGPS.SetGPSMeshHidden"); }
	void SetGPSMeshVisible() { NativeCall<void>(this, "APrimalWeaponGPS.SetGPSMeshVisible"); }
	void SetMapMeshHidden() { NativeCall<void>(this, "APrimalWeaponGPS.SetMapMeshHidden"); }
	void SetMapMeshVisible() { NativeCall<void>(this, "APrimalWeaponGPS.SetMapMeshVisible"); }
	void SetUseCompass(bool bUseCompass) { NativeCall<void, bool>(this, "APrimalWeaponGPS.SetUseCompass", bUseCompass); }
	void ShowBoth() { NativeCall<void>(this, "APrimalWeaponGPS.ShowBoth"); }
	void ShowGPSOnly() { NativeCall<void>(this, "APrimalWeaponGPS.ShowGPSOnly"); }
	void ShowMapOnly() { NativeCall<void>(this, "APrimalWeaponGPS.ShowMapOnly"); }
	void ShowNone() { NativeCall<void>(this, "APrimalWeaponGPS.ShowNone"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalWeaponGPS.StartFire", bFromGamepad); }
	void StartSecondaryAction() { NativeCall<void>(this, "APrimalWeaponGPS.StartSecondaryAction"); }
	void StopFire() { NativeCall<void>(this, "APrimalWeaponGPS.StopFire"); }
	void StopSecondaryAction() { NativeCall<void>(this, "APrimalWeaponGPS.StopSecondaryAction"); }
	void SwitchBetweenCompassAndGPS(bool bUseCompass) { NativeCall<void, bool>(this, "APrimalWeaponGPS.SwitchBetweenCompassAndGPS", bUseCompass); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponGPS.Tick", DeltaSeconds); }
	void UpdateCurrentMarker() { NativeCall<void>(this, "APrimalWeaponGPS.UpdateCurrentMarker"); }
	void UpdateDinoMapMarkers() { NativeCall<void>(this, "APrimalWeaponGPS.UpdateDinoMapMarkers"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "APrimalWeaponGPS.UpdateFirstPersonMeshes", bIsFirstPerson); }
	void UpdateMapTextureParameters() { NativeCall<void>(this, "APrimalWeaponGPS.UpdateMapTextureParameters"); }
	void ServerSetUseCompassInsteadOfGPS(bool bUseCompass) { NativeCall<void, bool>(this, "APrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS", bUseCompass); }
	void ServerShowBoth() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowBoth"); }
	void ServerShowGPSOnly() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowGPSOnly"); }
	void ServerShowMapOnly() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowMapOnly"); }
	void ServerShowNone() { NativeCall<void>(this, "APrimalWeaponGPS.ServerShowNone"); }
};

