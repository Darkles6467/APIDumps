#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPawnSensingComponent : UActorComponent
{
	char __padding[0x40L];
	float& HearingThresholdField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.HearingThreshold"); }
	float& LOSHearingThresholdField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.LOSHearingThreshold"); }
	float& SightRadiusField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.SightRadius"); }
	float& SensingIntervalField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.SensingInterval"); }
	float& HearingMaxSoundAgeField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.HearingMaxSoundAge"); }
	float& PeripheralVisionAngleField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.PeripheralVisionAngle"); }
	float& PeripheralVisionCosineField() { return *GetNativePointerField<float*>(this, "UPawnSensingComponent.PeripheralVisionCosine"); }

	// Functions

	void BroadcastOnHearRemoteNoise(APawn * Instigator, const FVector * Location, float Volume) { NativeCall<void, APawn *, const FVector *, float>(this, "UPawnSensingComponent.BroadcastOnHearRemoteNoise", Instigator, Location, Volume); }
	void BroadcastOnSeePawn(APawn * Pawn) { NativeCall<void, APawn *>(this, "UPawnSensingComponent.BroadcastOnSeePawn", Pawn); }
	bool CanHear(const FVector * NoiseLoc, float Loudness, bool bFailedLOS) { return NativeCall<bool, const FVector *, float, bool>(this, "UPawnSensingComponent.CanHear", NoiseLoc, Loudness, bFailedLOS); }
	bool CanSenseAnything() { return NativeCall<bool>(this, "UPawnSensingComponent.CanSenseAnything"); }
	bool CouldSeePawn(const APawn * Other, bool bMaySkipChecks) { return NativeCall<bool, const APawn *, bool>(this, "UPawnSensingComponent.CouldSeePawn", Other, bMaySkipChecks); }
	FVector * GetSensorLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UPawnSensingComponent.GetSensorLocation", result); }
	FRotator * GetSensorRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "UPawnSensingComponent.GetSensorRotation", result); }
	bool HasLineOfSightTo(AActor * Other) { return NativeCall<bool, AActor *>(this, "UPawnSensingComponent.HasLineOfSightTo", Other); }
	void InitializeComponent() { NativeCall<void>(this, "UPawnSensingComponent.InitializeComponent"); }
	bool IsNoiseRelevant(const APawn * Pawn, const UPawnNoiseEmitterComponent * NoiseEmitterComponent, bool bSourceWithinNoiseEmitter) { return NativeCall<bool, const APawn *, const UPawnNoiseEmitterComponent *, bool>(this, "UPawnSensingComponent.IsNoiseRelevant", Pawn, NoiseEmitterComponent, bSourceWithinNoiseEmitter); }
	bool IsSensorActor(AActor * Actor) { return NativeCall<bool, AActor *>(this, "UPawnSensingComponent.IsSensorActor", Actor); }
	void OnTimer() { NativeCall<void>(this, "UPawnSensingComponent.OnTimer"); }
	void SensePawn(APawn * Pawn) { NativeCall<void, APawn *>(this, "UPawnSensingComponent.SensePawn", Pawn); }
	void SetPeripheralVisionAngle(const float NewPeripheralVisionAngle) { NativeCall<void, const float>(this, "UPawnSensingComponent.SetPeripheralVisionAngle", NewPeripheralVisionAngle); }
	void SetSensingInterval(const float NewSensingInterval) { NativeCall<void, const float>(this, "UPawnSensingComponent.SetSensingInterval", NewSensingInterval); }
	void SetSensingUpdatesEnabled(const bool bEnabled) { NativeCall<void, const bool>(this, "UPawnSensingComponent.SetSensingUpdatesEnabled", bEnabled); }
	void SetTimer(const float TimeInterval) { NativeCall<void, const float>(this, "UPawnSensingComponent.SetTimer", TimeInterval); }
	bool ShouldCheckAudibilityOf(APawn * Pawn) { return NativeCall<bool, APawn *>(this, "UPawnSensingComponent.ShouldCheckAudibilityOf", Pawn); }
	bool ShouldCheckVisibilityOf(APawn * Pawn) { return NativeCall<bool, APawn *>(this, "UPawnSensingComponent.ShouldCheckVisibilityOf", Pawn); }
	void UpdateAISensing() { NativeCall<void>(this, "UPawnSensingComponent.UpdateAISensing"); }
};

