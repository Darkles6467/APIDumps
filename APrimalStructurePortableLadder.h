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

struct APrimalStructureLadder : APrimalStructure
{
	char __padding[0x60L];
	float& LadderCenterZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.LadderCenterZOffset"); }
	FVector& LadderExitTopPointOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureLadder.LadderExitTopPointOffset"); }
	FVector& LadderExitBottomPointOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureLadder.LadderExitBottomPointOffset"); }
	FVector& LadderEnterTopPointOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureLadder.LadderEnterTopPointOffset"); }
	FVector& LadderEnterBottomPointOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureLadder.LadderEnterBottomPointOffset"); }
	FRotator& LadderClimbRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureLadder.LadderClimbRotationOffset"); }

	// Functions

	void BP_SetLaddersRetracted(bool bRetract) { NativeCall<void, bool>(this, "APrimalStructureLadder.BP_SetLaddersRetracted", bRetract); }
	void CheckForEndClimbing(AShooterCharacter * theCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalStructureLadder.CheckForEndClimbing", theCharacter); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureLadder.ClientMultiUse", ForPC, UseIndex); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureLadder.Destroyed"); }
	static void EndClimbingLadder(AShooterCharacter * theCharacter, bool bServerClimbOver, const FVector * ServerClimbOverLoc) { NativeCall<void, AShooterCharacter *, bool, const FVector *>(nullptr, "APrimalStructureLadder.EndClimbingLadder", theCharacter, bServerClimbOver, ServerClimbOverLoc); }
	FRotator * GetLadderClimbRotation(FRotator * result, bool bClimbingUp) { return NativeCall<FRotator *, FRotator *, bool>(this, "APrimalStructureLadder.GetLadderClimbRotation", result, bClimbingUp); }
	FVector * GetLadderFinalClimbLocation(FVector * result, bool bClimbingUp) { return NativeCall<FVector *, FVector *, bool>(this, "APrimalStructureLadder.GetLadderFinalClimbLocation", result, bClimbingUp); }
	FVector * GetLadderStartClimbLocation(FVector * result, bool bClimbingUp) { return NativeCall<FVector *, FVector *, bool>(this, "APrimalStructureLadder.GetLadderStartClimbLocation", result, bClimbingUp); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureLadder.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureLadder.GetMultiUseEntries", ForPC, MultiUseEntries); }
	bool IsBelowLadder(AShooterCharacter * theCharacter) { return NativeCall<bool, AShooterCharacter *>(this, "APrimalStructureLadder.IsBelowLadder", theCharacter); }
	bool IsTopLadder() { return NativeCall<bool>(this, "APrimalStructureLadder.IsTopLadder"); }
	bool IsValidForSnappingFrom_Implementation(APrimalStructure * OtherStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructureLadder.IsValidForSnappingFrom_Implementation", OtherStructure); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureLadder.PostSpawnInitialize"); }
	void SetLaddersRetracted(bool bRetract, TArray<APrimalStructureLadder *> * TestedLadders) { NativeCall<void, bool, TArray<APrimalStructureLadder *> *>(this, "APrimalStructureLadder.SetLaddersRetracted", bRetract, TestedLadders); }
	void StartClimbingLadder(AShooterCharacter * theCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalStructureLadder.StartClimbingLadder", theCharacter); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureLadder.TryMultiUse", ForPC, UseIndex); }
	void UpdateRetraction() { NativeCall<void>(this, "APrimalStructureLadder.UpdateRetraction"); }
};

struct APrimalStructurePortableLadder : APrimalStructureLadder
{
	char __padding[0xa8L];
	float& MaximumHeightAllowedForLadderField() { return *GetNativePointerField<float*>(this, "APrimalStructurePortableLadder.MaximumHeightAllowedForLadder"); }
	bool& bIsPlayingAnimationField() { return *GetNativePointerField<bool*>(this, "APrimalStructurePortableLadder.bIsPlayingAnimation"); }
	UAnimMontage * MidRetractedAnimMontageBlueprintField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructurePortableLadder.MidRetractedAnimMontageBlueprint"); }
	UAnimMontage * BottomRetractedAnimMontageBlueprintField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructurePortableLadder.BottomRetractedAnimMontageBlueprint"); }
	UAnimMontage * MidAnimMontageBlueprintField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructurePortableLadder.MidAnimMontageBlueprint"); }
	UAnimMontage * BottomAnimMontageBlueprintField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructurePortableLadder.BottomAnimMontageBlueprint"); }
	UAnimMontage * MidAnimMontageExtendedBlueprintField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructurePortableLadder.MidAnimMontageExtendedBlueprint"); }
	UAnimMontage * BottomAnimMontageExtendedBlueprintField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructurePortableLadder.BottomAnimMontageExtendedBlueprint"); }
	FTimerHandle& AnimTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePortableLadder.AnimTimerHandle"); }
	UBoxComponent * CollisionBoxComponentField() { return GetNativePointerField<UBoxComponent *>(this, "APrimalStructurePortableLadder.CollisionBoxComponent"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructurePortableLadder.BeginPlay"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructurePortableLadder.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructurePortableLadder.GetMultiUseEntries", ForPC, MultiUseEntries); }
	FVector * GetNearestLadderPosition(FVector * result, const FVector * Position) { return NativeCall<FVector *, FVector *, const FVector *>(this, "APrimalStructurePortableLadder.GetNearestLadderPosition", result, Position); }
	void ModifyHudMultiUseLoc_Implementation(FVector2D * theVec, APlayerController * PC, int index) { NativeCall<void, FVector2D *, APlayerController *, int>(this, "APrimalStructurePortableLadder.ModifyHudMultiUseLoc_Implementation", theVec, PC, index); }
	void PlacedStructureLocation() { NativeCall<void>(this, "APrimalStructurePortableLadder.PlacedStructureLocation"); }
	void PlaySetupAnimation() { NativeCall<void>(this, "APrimalStructurePortableLadder.PlaySetupAnimation"); }
	void SetLaddersRetracted(bool bRetract, TArray<APrimalStructureLadder *> * TestedLadders) { NativeCall<void, bool, TArray<APrimalStructureLadder *> *>(this, "APrimalStructurePortableLadder.SetLaddersRetracted", bRetract, TestedLadders); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructurePortableLadder.TryMultiUse", ForPC, UseIndex); }
	void UpdateLadder() { NativeCall<void>(this, "APrimalStructurePortableLadder.UpdateLadder"); }
	void UpdateRetraction() { NativeCall<void>(this, "APrimalStructurePortableLadder.UpdateRetraction"); }
	void BuildLadder() { NativeCall<void>(this, "APrimalStructurePortableLadder.BuildLadder"); }
	void UpdateBoxCollisionForRetraction(bool bRetracted) { NativeCall<void, bool>(this, "APrimalStructurePortableLadder.UpdateBoxCollisionForRetraction", bRetracted); }
};

