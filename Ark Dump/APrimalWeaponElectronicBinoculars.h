#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Melee.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalWeaponElectronicBinoculars : AShooterWeapon_Melee
{
	char __padding[0xb0L];
	float& YPosDistanceField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.YPosDistance"); }
	float& XPosDistanceField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.XPosDistance"); }
	float& CompSizeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompSize"); }
	float& DistanceXField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceX"); }
	float& DistanceYField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceY"); }
	float& DistanceSizeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceSize"); }
	float& LatLongInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatLongInterpSpeed"); }
	float& CurrentLatField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CurrentLat"); }
	float& CurrentLongField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CurrentLong"); }
	FRotator& CurrentCompassAngleField() { return *GetNativePointerField<FRotator*>(this, "APrimalWeaponElectronicBinoculars.CurrentCompassAngle"); }
	float& CompassNorthAngleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompassNorthAngle"); }
	float& CompassInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompassInterpSpeed"); }
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatitudeOrigin"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LongitudeOrigin"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LongitudeScale"); }
	float& SoundFadeInSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.SoundFadeInSpeed"); }
	float& MinTargetingFOVField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.MinTargetingFOV"); }
	float& MaxTargetingFOVField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.MaxTargetingFOV"); }
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "APrimalWeaponElectronicBinoculars.PC"); }
	float& LatitudeNumberField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatitudeNumber"); }
	float& LongitudeNumberField() { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LongitudeNumber"); }
	bool& bHasApplyedNightVisionBuffField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bHasApplyedNightVisionBuff"); }
	bool& bIsNightVisionOnField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bIsNightVisionOn"); }
	bool& bFromGamepadLeftField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bFromGamepadLeft"); }
	bool& bZoomInField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bZoomIn"); }
	bool& bZoomOutField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bZoomOut"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.BeginPlay"); }
	void ClientSetActivateNightVision_Implementation(char bActive) { NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ClientSetActivateNightVision_Implementation", bActive); }
	void Destroyed() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.Destroyed"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalWeaponElectronicBinoculars.DrawHUD", HUD); }
	AShooterPlayerController * GetPC() { return NativeCall<AShooterPlayerController *>(this, "APrimalWeaponElectronicBinoculars.GetPC"); }
	void OnStartTargeting(bool bInFromGamepadLeft) { NativeCall<void, bool>(this, "APrimalWeaponElectronicBinoculars.OnStartTargeting", bInFromGamepadLeft); }
	void OnStopTargeting(bool bInFromGamepadLeft) { NativeCall<void, bool>(this, "APrimalWeaponElectronicBinoculars.OnStopTargeting", bInFromGamepadLeft); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.PostInitializeComponents"); }
	void ServerSetActivateNightVision_Implementation(char bActive) { NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ServerSetActivateNightVision_Implementation", bActive); }
	void SetOwningPawn(AShooterCharacter * AShooterCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalWeaponElectronicBinoculars.SetOwningPawn", AShooterCharacter); }
	void ShowNightVisionStatusMsj() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.ShowNightVisionStatusMsj"); }
	void StartAltFire() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.StartAltFire"); }
	void StartSecondaryAction() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.StartSecondaryAction"); }
	void StopSecondaryAction() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.StopSecondaryAction"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponElectronicBinoculars.Tick", DeltaSeconds); }
	void ZoomIn() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.ZoomIn"); }
	void ZoomOut() { NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.ZoomOut"); }
	void ClientSetActivateNightVision(char bActive) { NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ClientSetActivateNightVision", bActive); }
	void ServerSetActivateNightVision(char bActive) { NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ServerSetActivateNightVision", bActive); }
};

