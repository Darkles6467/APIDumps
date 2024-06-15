#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureItemContainer.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct APrimalStructureSeating : APrimalStructureItemContainer
{
	char __padding[0xd8L];
	TWeakObjectPtr<AShooterCharacter>& SeatedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalStructureSeating.SeatedCharacter"); }
	TWeakObjectPtr<AShooterCharacter>& PrevSeatedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalStructureSeating.PrevSeatedCharacter"); }
	TWeakObjectPtr<AShooterPlayerController>& SeatedControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalStructureSeating.SeatedController"); }
	TArray<TWeakObjectPtr<AShooterCharacter>>& CharacterPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterCharacter>>*>(this, "APrimalStructureSeating.CharacterPerSeat"); }
	TArray<TWeakObjectPtr<AShooterCharacter>>& PrevCharacterPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterCharacter>>*>(this, "APrimalStructureSeating.PrevCharacterPerSeat"); }
	int& NumSeatsField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating.NumSeats"); }
	FVector& SeatedCharacterLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureSeating.SeatedCharacterLocationOffset"); }
	FRotator& SeatedCharacterRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureSeating.SeatedCharacterRotationOffset"); }
	TArray<FSeatingSpot>& OtherSeatingSpotsField() { return *GetNativePointerField<TArray<FSeatingSpot>*>(this, "APrimalStructureSeating.OtherSeatingSpots"); }
	float& TPVCameraYawRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.TPVCameraYawRange"); }
	FVector& TPVCameraOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureSeating.TPVCameraOffset"); }
	FVector& TPVCameraOffsetMultiplierField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureSeating.TPVCameraOffsetMultiplier"); }
	float& UnboardDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.UnboardDistance"); }
	FString& SeatingActionTextField() { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating.SeatingActionText"); }
	USoundCue * RideSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalStructureSeating.RideSound"); }
	USoundCue * UnrideSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalStructureSeating.UnrideSound"); }
	UAnimSequence * SeatingAnimOverrideField() { return GetNativePointerField<UAnimSequence *>(this, "APrimalStructureSeating.SeatingAnimOverride"); }
	int& SeatingActionPriorityField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating.SeatingActionPriority"); }
	long double& LastServerUpdateSentField() { return *GetNativePointerField<long double*>(this, "APrimalStructureSeating.LastServerUpdateSent"); }
	FVector& ActorPrevRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureSeating.ActorPrevRelativeLocation"); }

	// Functions

	int BPGetBestSeatNumber_Implementation(AShooterHUD * HUD, int TargetingTeamToCheck) { return NativeCall<int, AShooterHUD *, int>(this, "APrimalStructureSeating.BPGetBestSeatNumber_Implementation", HUD, TargetingTeamToCheck); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureSeating.AllowPickupForItem", ForPC); }
	bool CanSeat(AShooterPlayerController * ForPC, AShooterCharacter * ForCharacter, bool bForce) { return NativeCall<bool, AShooterPlayerController *, AShooterCharacter *, bool>(this, "APrimalStructureSeating.CanSeat", ForPC, ForCharacter, bForce); }
	bool CanUse(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureSeating.CanUse", ForPC); }
	void ClearSeats() { NativeCall<void>(this, "APrimalStructureSeating.ClearSeats"); }
	void Control(AShooterCharacter * ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter *, int, bool>(this, "APrimalStructureSeating.Control", ShooterCharacter, SeatNumber, bLockedToSeat); }
	void Demolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController *, AActor *>(this, "APrimalStructureSeating.Demolish", ForPC, DamageCauser); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureSeating.Destroyed"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureSeating.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureSeating.GetMultiUseEntries", ForPC, MultiUseEntries); }
	int GetNearestFreeSpot(AShooterPlayerController * ForPC, FVector CharacterLocation) { return NativeCall<int, AShooterPlayerController *, FVector>(this, "APrimalStructureSeating.GetNearestFreeSpot", ForPC, CharacterLocation); }
	void GetNearestSitSpot(FVector CharacterLocation, FVector * OutSitLocation, FRotator * OutSitRotation) { NativeCall<void, FVector, FVector *, FRotator *>(this, "APrimalStructureSeating.GetNearestSitSpot", CharacterLocation, OutSitLocation, OutSitRotation); }
	void GetNearestSitSpot(FVector CharacterLocation, int SeatNumber, FVector * OutSitLocation, FRotator * OutSitRotation) { NativeCall<void, FVector, int, FVector *, FRotator *>(this, "APrimalStructureSeating.GetNearestSitSpot", CharacterLocation, SeatNumber, OutSitLocation, OutSitRotation); }
	int GetNumTakenSeats() { return NativeCall<int>(this, "APrimalStructureSeating.GetNumTakenSeats"); }
	FVector * GetUnboardLocation(FVector * result, FVector CharacterLocation) { return NativeCall<FVector *, FVector *, FVector>(this, "APrimalStructureSeating.GetUnboardLocation", result, CharacterLocation); }
	bool HasAvailableSeat() { return NativeCall<bool>(this, "APrimalStructureSeating.HasAvailableSeat"); }
	void OnRep_CharacterPerSeat() { NativeCall<void>(this, "APrimalStructureSeating.OnRep_CharacterPerSeat"); }
	void OnRep_SeatedCharacter() { NativeCall<void>(this, "APrimalStructureSeating.OnRep_SeatedCharacter"); }
	void OnStartTargeting() { NativeCall<void>(this, "APrimalStructureSeating.OnStartTargeting"); }
	void OnStopTargeting() { NativeCall<void>(this, "APrimalStructureSeating.OnStopTargeting"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSeating.PostInitializeComponents"); }
	void Release(AShooterCharacter * ShooterCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalStructureSeating.Release", ShooterCharacter); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureSeating.TryMultiUse", ForPC, UseIndex); }
	bool BPAllowSeating(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureSeating.BPAllowSeating", ForPC); }
	int BPGetBestSeatNumber(AShooterPlayerController * ForPC, int InBestSeatNumber) { return NativeCall<int, AShooterPlayerController *, int>(this, "APrimalStructureSeating.BPGetBestSeatNumber", ForPC, InBestSeatNumber); }
	bool BPHandleSitterPoop(AShooterCharacter * ForSitter) { return NativeCall<bool, AShooterCharacter *>(this, "APrimalStructureSeating.BPHandleSitterPoop", ForSitter); }
	void BPOnStartTargeting() { NativeCall<void>(this, "APrimalStructureSeating.BPOnStartTargeting"); }
	void BPOnStopTargeting() { NativeCall<void>(this, "APrimalStructureSeating.BPOnStopTargeting"); }
	bool BPPreventReleaseSeatingStructure(AShooterCharacter * ForSitter) { return NativeCall<bool, AShooterCharacter *>(this, "APrimalStructureSeating.BPPreventReleaseSeatingStructure", ForSitter); }
	void BPReleasedPlayer(AShooterCharacter * ReleasedChar, int AtSeatNumber) { NativeCall<void, AShooterCharacter *, int>(this, "APrimalStructureSeating.BPReleasedPlayer", ReleasedChar, AtSeatNumber); }
	void BPSeatedPlayer(AShooterCharacter * SeatedChar, int AtSeatNumber) { NativeCall<void, AShooterCharacter *, int>(this, "APrimalStructureSeating.BPSeatedPlayer", SeatedChar, AtSeatNumber); }
};

