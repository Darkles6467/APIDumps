#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct APrimalStructureElevatorTrack : APrimalStructureItemContainer
{
	char __padding[0x10L];
	bool& bHasBaseField() { return *GetNativePointerField<bool*>(this, "APrimalStructureElevatorTrack.bHasBase"); }

	// Functions

	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureElevatorTrack.PostInitializeComponents"); }
	void AddedLinkedStructure(APrimalStructure * Structure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructureElevatorTrack.AddedLinkedStructure", Structure); }
	void CalculateTrackHeight(float * MinZ, float * MaxZ, TArray<APrimalStructureElevatorTrack *> * Tracks) { NativeCall<void, float *, float *, TArray<APrimalStructureElevatorTrack *> *>(this, "APrimalStructureElevatorTrack.CalculateTrackHeight", MinZ, MaxZ, Tracks); }
	bool CanBeActivated() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.CanBeActivated"); }
	void ClientHasPlatform_Implementation() { NativeCall<void>(this, "APrimalStructureElevatorTrack.ClientHasPlatform_Implementation"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureElevatorTrack.ClientMultiUse", ForPC, UseIndex); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureElevatorTrack.DrawHUD", HUD); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureElevatorTrack.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureElevatorTrack.GetMultiUseEntries", ForPC, MultiUseEntries); }
	bool HasPlatformAttachedToTheTrack() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.HasPlatformAttachedToTheTrack"); }
	bool IsPowered() { return NativeCall<bool>(this, "APrimalStructureElevatorTrack.IsPowered"); }
	bool IsPoweredEx(TArray<APrimalStructureElevatorTrack *> CheckedTracks) { return NativeCall<bool, TArray<APrimalStructureElevatorTrack *>>(this, "APrimalStructureElevatorTrack.IsPoweredEx", CheckedTracks); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureElevatorTrack.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void RemovedLinkedStructure(APrimalStructure * Structure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructureElevatorTrack.RemovedLinkedStructure", Structure); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureElevatorTrack.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureElevatorTrack.TryMultiUse", ForPC, UseIndex); }
	void ClientHasPlatform() { NativeCall<void>(this, "APrimalStructureElevatorTrack.ClientHasPlatform"); }
};

