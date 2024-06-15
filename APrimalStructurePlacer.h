#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "APrimalStructure.h"

struct APrimalStructurePlacer : AInfo
{
	enum EPrimalStructurePlacerState
	{
		Default = 0x0,
		FadeAway = 0x1,
		PlacingStructure = 0x2,
	};

	char __padding[0xa0L];
	FieldArray<_BYTE, 1> CurrentStateField() { return {this, "APrimalStructurePlacer.CurrentState"}; }
	int& CurrentPlacingStructureIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.CurrentPlacingStructureIndex"); }
	FName& RotationAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.RotationAxisName"); }
	float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationSpeed"); }
	FName& AltRotationAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.AltRotationAxisName"); }
	float& AltRotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.AltRotationSpeed"); }
	FCanvasIcon& RotationIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "APrimalStructurePlacer.RotationIcon"); }
	float& RotationIconSizeField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationIconSize"); }
	float& RotationIconScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationIconScale"); }
	FItemNetID& PlaceUsingItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructurePlacer.PlaceUsingItemID"); }
	bool& bChoosingRotationField() { return *GetNativePointerField<bool*>(this, "APrimalStructurePlacer.bChoosingRotation"); }
	FRotator& InitialPlacerActorChooseRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructurePlacer.InitialPlacerActorChooseRotation"); }
	FRotator& LastSetViewRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructurePlacer.LastSetViewRotation"); }
	FRotator& LastHitRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructurePlacer.LastHitRotation"); }
	float& FadeTimerField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.FadeTimer"); }
	FVector& LastHitLocField() { return *GetNativePointerField<FVector*>(this, "APrimalStructurePlacer.LastHitLoc"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructurePlacer.BeginPlay"); }
	void BeginState(APrimalStructurePlacer::EPrimalStructurePlacerState PreviousState) { NativeCall<void, APrimalStructurePlacer::EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.BeginState", PreviousState); }
	bool CanStartPlacingStructure() { return NativeCall<bool>(this, "APrimalStructurePlacer.CanStartPlacingStructure"); }
	void CancelPlacingStructure() { NativeCall<void>(this, "APrimalStructurePlacer.CancelPlacingStructure"); }
	bool ConfirmPlacingStructure(bool bDontAdjustForMaxRange) { return NativeCall<bool, bool>(this, "APrimalStructurePlacer.ConfirmPlacingStructure", bDontAdjustForMaxRange); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructurePlacer.DrawHUD", HUD); }
	void DrawStructurePreviewHUD(AShooterHUD * HUD, APrimalStructure * PlacingStructure) { NativeCall<void, AShooterHUD *, APrimalStructure *>(this, "APrimalStructurePlacer.DrawStructurePreviewHUD", HUD, PlacingStructure); }
	void EndState(APrimalStructurePlacer::EPrimalStructurePlacerState NewState) { NativeCall<void, APrimalStructurePlacer::EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.EndState", NewState); }
	void FinalStructurePlacement(APlayerController * PC, int StructureIndex, FVector TestBuildLocation, FRotator TestBuildRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, APrimalDinoCharacter * DinoCharacter, FName BoneName, FItemNetID FinalPlacementItemID, bool bSnapped, bool bIsCheat, bool bIsFlipped, int SnapPointCycle) { NativeCall<void, APlayerController *, int, FVector, FRotator, FRotator, APawn *, APrimalDinoCharacter *, FName, FItemNetID, bool, bool, bool, int>(this, "APrimalStructurePlacer.FinalStructurePlacement", PC, StructureIndex, TestBuildLocation, TestBuildRotation, PlayerViewRotation, AttachToPawn, DinoCharacter, BoneName, FinalPlacementItemID, bSnapped, bIsCheat, bIsFlipped, SnapPointCycle); }
	void FlipPlacement() { NativeCall<void>(this, "APrimalStructurePlacer.FlipPlacement"); }
	void GetLastPlacementProperties(FVector * OutLastHitLoc, FRotator * OutLastHitRot, FRotator * OutLastViewRot) { NativeCall<void, FVector *, FRotator *, FRotator *>(this, "APrimalStructurePlacer.GetLastPlacementProperties", OutLastHitLoc, OutLastHitRot, OutLastViewRot); }
	void GotoState(APrimalStructurePlacer::EPrimalStructurePlacerState NewState) { NativeCall<void, APrimalStructurePlacer::EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.GotoState", NewState); }
	bool IsPlacingActive() { return NativeCall<bool>(this, "APrimalStructurePlacer.IsPlacingActive"); }
	bool IsStructureFlippable() { return NativeCall<bool>(this, "APrimalStructurePlacer.IsStructureFlippable"); }
	void SetChoosingRotation(bool bNewChoosingRotation) { NativeCall<void, bool>(this, "APrimalStructurePlacer.SetChoosingRotation", bNewChoosingRotation); }
	void SetForceDisplayMissionAreaStructureNoBuildZones(bool bForceDisplay) { NativeCall<void, bool>(this, "APrimalStructurePlacer.SetForceDisplayMissionAreaStructureNoBuildZones", bForceDisplay); }
	void StartPlacingStructure(int StructureIndex, const FItemNetID * ForItemID, bool bIsCheat) { NativeCall<void, int, const FItemNetID *, bool>(this, "APrimalStructurePlacer.StartPlacingStructure", StructureIndex, ForItemID, bIsCheat); }
	void StartPlacingStructure(TSubclassOf<APrimalStructure> StructureClass, const FItemNetID * ForItemID) { NativeCall<void, TSubclassOf<APrimalStructure>, const FItemNetID *>(this, "APrimalStructurePlacer.StartPlacingStructure", StructureClass, ForItemID); }
	bool TestStructurePlacement(TSubclassOf<APrimalStructure> StructureClass, bool bDontAdjustForMaxRange, bool ForceMessageDisplay) { return NativeCall<bool, TSubclassOf<APrimalStructure>, bool, bool>(this, "APrimalStructurePlacer.TestStructurePlacement", StructureClass, bDontAdjustForMaxRange, ForceMessageDisplay); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructurePlacer.Tick", DeltaTime); }
	void ToggleDebugStructures() { NativeCall<void>(this, "APrimalStructurePlacer.ToggleDebugStructures"); }
};

