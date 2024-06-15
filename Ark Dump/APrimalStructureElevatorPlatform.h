#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct APrimalStructureElevatorPlatform : APrimalStructure
{
	char __padding[0xb0L];
	float& MaxCarryWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxCarryWeight"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.Speed"); }
	float& DownSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownSpeed"); }
	float& ClientLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ClientLocationInterpSpeed"); }
	float& ClientLocationInterpSpeedDownField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ClientLocationInterpSpeedDown"); }
	float& UpObstructionTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.UpObstructionTraceLength"); }
	float& DownObstructionTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownObstructionTraceLength"); }
	float& TrackTraceLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.TrackTraceLength"); }
	FVector& TraceExtentField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureElevatorPlatform.TraceExtent"); }
	float& DistanceToTravelField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DistanceToTravel"); }
	float& MaxDistanceToTravelField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxDistanceToTravel"); }
	FVector& StartLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureElevatorPlatform.StartLocation"); }
	TEnumAsByte<enum EPrimalStructureElevatorState>& CurrentStateField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalStructureElevatorState>*>(this, "APrimalStructureElevatorPlatform.CurrentState"); }
	float& TraveledDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.TraveledDistance"); }
	float& CurrentLiftedWeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.CurrentLiftedWeight"); }
	bool& bUseBPElevatorStoppedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureElevatorPlatform.bUseBPElevatorStopped"); }
	float& DistanceRepTimerField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DistanceRepTimer"); }
	float& MinHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MinHeight"); }
	float& MaxHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxHeight"); }
	float& HeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.Height"); }
	float& ReplicatedZField() { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ReplicatedZ"); }
	unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureElevatorPlatform.CurrentPinCode"); }
	long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureElevatorPlatform.LastLockStateChangeTime"); }

	// Functions

	void Activate(APlayerController * ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir, float DistanceToTravelOverride) { NativeCall<void, APlayerController *, bool, EPrimalStructureElevatorState, float>(this, "APrimalStructureElevatorPlatform.Activate", ForPC, bForceDirection, Dir, DistanceToTravelOverride); }
	void AddLiftedActor(APrimalCharacter * LiftedActor) { NativeCall<void, APrimalCharacter *>(this, "APrimalStructureElevatorPlatform.AddLiftedActor", LiftedActor); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureElevatorPlatform.AllowStructureAccess", ForPC); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureElevatorPlatform.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.BeginPlay"); }
	float CalculateCurrentLiftedWeight() { return NativeCall<float>(this, "APrimalStructureElevatorPlatform.CalculateCurrentLiftedWeight"); }
	void CalculateTrackHeight() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.CalculateTrackHeight"); }
	bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.CanBeActivated"); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureElevatorPlatform.CanOpen", ForPC); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureElevatorPlatform.ClientMultiUse", ForPC, UseIndex); }
	void Deactivate(bool bSwitchDirection) { NativeCall<void, bool>(this, "APrimalStructureElevatorPlatform.Deactivate", bSwitchDirection); }
	void Demolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController *, AActor *>(this, "APrimalStructureElevatorPlatform.Demolish", ForPC, DamageCauser); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.Destroyed"); }
	float GetCurrentLiftedWeight() { return NativeCall<float>(this, "APrimalStructureElevatorPlatform.GetCurrentLiftedWeight"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureElevatorPlatform.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureElevatorPlatform.GetMultiUseEntries", ForPC, MultiUseEntries); }
	int GetPinCode() { return NativeCall<int>(this, "APrimalStructureElevatorPlatform.GetPinCode"); }
	float GetTrackHeight() { return NativeCall<float>(this, "APrimalStructureElevatorPlatform.GetTrackHeight"); }
	void GetTrackMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureElevatorPlatform.GetTrackMultiUseEntries", ForPC, MultiUseEntries); }
	bool HasReachedMaxWeight() { return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.HasReachedMaxWeight"); }
	bool HasSamePinCode(APrimalStructureItemContainer * otherContainer) { return NativeCall<bool, APrimalStructureItemContainer *>(this, "APrimalStructureElevatorPlatform.HasSamePinCode", otherContainer); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement) { return NativeCall<int, APlayerController *, FVector, FRotator, FPlacementData *, bool, FRotator, bool>(this, "APrimalStructureElevatorPlatform.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement); }
	bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.IsPinLocked"); }
	bool NetExecCommand(FName CommandName, const FNetExecParams * ExecParams) { return NativeCall<bool, FName, const FNetExecParams *>(this, "APrimalStructureElevatorPlatform.NetExecCommand", CommandName, ExecParams); }
	bool PlatformIsActive(TEnumAsByte<enum EPrimalStructureElevatorState> * Direction) { return NativeCall<bool, TEnumAsByte<enum EPrimalStructureElevatorState> *>(this, "APrimalStructureElevatorPlatform.PlatformIsActive", Direction); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "APrimalStructureElevatorPlatform.PostNetReceiveLocationAndRotation"); }
	void RemoveLiftedActor(APrimalCharacter * LiftedActor) { NativeCall<void, APrimalCharacter *>(this, "APrimalStructureElevatorPlatform.RemoveLiftedActor", LiftedActor); }
	void ServerActivate_Implementation(APlayerController * ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir) { NativeCall<void, APlayerController *, bool, EPrimalStructureElevatorState>(this, "APrimalStructureElevatorPlatform.ServerActivate_Implementation", ForPC, bForceDirection, Dir); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorPlatform.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureElevatorPlatform.TryMultiUse", ForPC, UseIndex); }
	void UpdateLocation(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorPlatform.UpdateLocation", DeltaSeconds); }
	void GetAllTrackStructures(TArray<AActor *> * Tracks) { NativeCall<void, TArray<AActor *> *>(this, "APrimalStructureElevatorPlatform.GetAllTrackStructures", Tracks); }
	void BPElevatorStopped(bool bSwitchedDirection, EPrimalStructureElevatorState NewDirection) { NativeCall<void, bool, EPrimalStructureElevatorState>(this, "APrimalStructureElevatorPlatform.BPElevatorStopped", bSwitchedDirection, NewDirection); }
	void ServerActivate(APlayerController * ForPC, bool bForceDirection, EPrimalStructureElevatorState Dir) { NativeCall<void, APlayerController *, bool, EPrimalStructureElevatorState>(this, "APrimalStructureElevatorPlatform.ServerActivate", ForPC, bForceDirection, Dir); }
};

