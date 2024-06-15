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

struct APrimalStructureDoor : APrimalStructure
{
	char __padding[0x88L];
	float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.RotationSpeed"); }
	USoundCue * DoorOpenSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalStructureDoor.DoorOpenSound"); }
	USoundCue * DoorCloseSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalStructureDoor.DoorCloseSound"); }
	unsigned int& CurrentPinCodeField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureDoor.CurrentPinCode"); }
	float& DoorStateChangeIgnoreEncroachmentIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.DoorStateChangeIgnoreEncroachmentInterval"); }
	char& DoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.DoorOpenState"); }
	char& ClientPrevDoorOpenStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.ClientPrevDoorOpenState"); }
	long double& LastLockStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastLockStateChangeTime"); }
	FRotator& SecondDoorDefaultRotField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureDoor.SecondDoorDefaultRot"); }
	float& CurrentDoorAngleField() { return *GetNativePointerField<float*>(this, "APrimalStructureDoor.CurrentDoorAngle"); }
	long double& LastPinOpenSuccessTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastPinOpenSuccessTime"); }
	long double& LastDoorStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureDoor.LastDoorStateChangeTime"); }
	char& DelayedDoorStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureDoor.DelayedDoorState"); }

	// Functions

	bool AllowIgnoreCharacterEncroachment_Implementation(UPrimitiveComponent * HitComponent, AActor * EncroachingCharacter) { return NativeCall<bool, UPrimitiveComponent *, AActor *>(this, "APrimalStructureDoor.AllowIgnoreCharacterEncroachment_Implementation", HitComponent, EncroachingCharacter); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureDoor.AllowPickupForItem", ForPC); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureDoor.AllowStructureAccess", ForPC); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureDoor.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void BPSetDoorState(int DoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPSetDoorState", DoorState); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureDoor.BeginPlay"); }
	bool CanOpen(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructureDoor.CanOpen", ForPC); }
	void DelayedGotoDoorState(char DoorState, float DelayTime) { NativeCall<void, char, float>(this, "APrimalStructureDoor.DelayedGotoDoorState", DoorState, DelayTime); }
	void DelayedGotoDoorStateTimer() { NativeCall<void>(this, "APrimalStructureDoor.DelayedGotoDoorStateTimer"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureDoor.DrawHUD", HUD); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureDoor.GetDescriptiveName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureDoor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureDoor.GetMultiUseEntries", ForPC, MultiUseEntries); }
	int GetPinCode() { return NativeCall<int>(this, "APrimalStructureDoor.GetPinCode"); }
	void GotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.GotoDoorState", DoorState); }
	bool HasSamePinCode(APrimalStructureItemContainer * otherContainer) { return NativeCall<bool, APrimalStructureItemContainer *>(this, "APrimalStructureDoor.HasSamePinCode", otherContainer); }
	bool IsPinLocked() { return NativeCall<bool>(this, "APrimalStructureDoor.IsPinLocked"); }
	void NetGotoDoorState_Implementation(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState_Implementation", DoorState); }
	void OnRep_DoorOpenState(char PrevDoorOpenState) { NativeCall<void, char>(this, "APrimalStructureDoor.OnRep_DoorOpenState", PrevDoorOpenState); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureDoor.PostInitializeComponents"); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalStructureDoor.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructureDoor.SetStaticMobility"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureDoor.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureDoor.TryMultiUse", ForPC, UseIndex); }
	void BPGotoDoorState(int NewDoorState) { NativeCall<void, int>(this, "APrimalStructureDoor.BPGotoDoorState", NewDoorState); }
	void NetGotoDoorState(char DoorState) { NativeCall<void, char>(this, "APrimalStructureDoor.NetGotoDoorState", DoorState); }
};

struct APrimalStructureSkeletalDoor : APrimalStructureDoor
{
	char __padding[0x20L];

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureSkeletalDoor.BeginPlay"); }
	int GetDoorOpenState() { return NativeCall<int>(this, "APrimalStructureSkeletalDoor.GetDoorOpenState"); }
	void OnBeginOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "APrimalStructureSkeletalDoor.OnBeginOverlap", OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnEndOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex) { NativeCall<void, AActor *, UPrimitiveComponent *, int>(this, "APrimalStructureSkeletalDoor.OnEndOverlap", OtherActor, OtherComp, OtherBodyIndex); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSkeletalDoor.PostInitializeComponents"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureSkeletalDoor.Tick", DeltaSeconds); }
};

