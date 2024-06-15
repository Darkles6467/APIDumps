#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct ADroppedItem : AActor
{
	char __padding[0x298L];
	FItemNetInfo& MyItemInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "ADroppedItem.MyItemInfo"); }
	int& AssignedToTribeIDField() { return *GetNativePointerField<int*>(this, "ADroppedItem.AssignedToTribeID"); }
	float& ImpulseMagnitudeField() { return *GetNativePointerField<float*>(this, "ADroppedItem.ImpulseMagnitude"); }
	float& ForceSleepTimerField() { return *GetNativePointerField<float*>(this, "ADroppedItem.ForceSleepTimer"); }
	FVector& DroppedItemScaleField() { return *GetNativePointerField<FVector*>(this, "ADroppedItem.DroppedItemScale"); }
	FVector2D& OverlayTooltipPaddingField() { return *GetNativePointerField<FVector2D*>(this, "ADroppedItem.OverlayTooltipPadding"); }
	FVector2D& OverlayTooltipScaleField() { return *GetNativePointerField<FVector2D*>(this, "ADroppedItem.OverlayTooltipScale"); }
	FString& DroppedByNameField() { return *GetNativePointerField<FString*>(this, "ADroppedItem.DroppedByName"); }
	unsigned __int64& DroppedByPlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "ADroppedItem.DroppedByPlayerID"); }
	long double& DroppedItemDestructionTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItem.DroppedItemDestructionTime"); }
	FVector& DroppedItemInterpTargetField() { return *GetNativePointerField<FVector*>(this, "ADroppedItem.DroppedItemInterpTarget"); }
	bool& bClientDisablePhysicsField() { return *GetNativePointerField<bool*>(this, "ADroppedItem.bClientDisablePhysics"); }
	UStaticMesh * NetDroppedMeshOverrideField() { return GetNativePointerField<UStaticMesh *>(this, "ADroppedItem.NetDroppedMeshOverride"); }
	FVector& NetDroppedMeshOverrideScale3DField() { return *GetNativePointerField<FVector*>(this, "ADroppedItem.NetDroppedMeshOverrideScale3D"); }
	float& MaxPickUpDistanceField() { return *GetNativePointerField<float*>(this, "ADroppedItem.MaxPickUpDistance"); }
	float& PrevLinearDampingField() { return *GetNativePointerField<float*>(this, "ADroppedItem.PrevLinearDamping"); }
	float& PrevAngularDampingField() { return *GetNativePointerField<float*>(this, "ADroppedItem.PrevAngularDamping"); }
	long double& SpawnDropSoundTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItem.SpawnDropSoundTime"); }
	FVector& PreviousLocationField() { return *GetNativePointerField<FVector*>(this, "ADroppedItem.PreviousLocation"); }
	FVector& PreviousStuckLocationField() { return *GetNativePointerField<FVector*>(this, "ADroppedItem.PreviousStuckLocation"); }
	float& LocationStuckTimerField() { return *GetNativePointerField<float*>(this, "ADroppedItem.LocationStuckTimer"); }
	long double& PhysicsKeepAliveUntilTimeField() { return *GetNativePointerField<long double*>(this, "ADroppedItem.PhysicsKeepAliveUntilTime"); }
	float& FreezePhysicsAfterTimeField() { return *GetNativePointerField<float*>(this, "ADroppedItem.FreezePhysicsAfterTime"); }
	float& PickupAllRangeField() { return *GetNativePointerField<float*>(this, "ADroppedItem.PickupAllRange"); }
	float& DroppedLifeSpanOverrideField() { return *GetNativePointerField<float*>(this, "ADroppedItem.DroppedLifeSpanOverride"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ADroppedItem.BeginPlay"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "ADroppedItem.DrawHUD", HUD); }
	void ForceSleep() { NativeCall<void>(this, "ADroppedItem.ForceSleep"); }
	void FreezePhysics() { NativeCall<void>(this, "ADroppedItem.FreezePhysics"); }
	float GetDroppedItemLifeTime() { return NativeCall<float>(this, "ADroppedItem.GetDroppedItemLifeTime"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ADroppedItem.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "ADroppedItem.GetMultiUseEntries", ForPC, MultiUseEntries); }
	void KeepPhysicsActiveForDuration(float Duration) { NativeCall<void, float>(this, "ADroppedItem.KeepPhysicsActiveForDuration", Duration); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "ADroppedItem.LoadedFromSaveGame"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "ADroppedItem.PostNetReceiveLocationAndRotation"); }
	void PreInitializeComponents() { NativeCall<void>(this, "ADroppedItem.PreInitializeComponents"); }
	void ResetLifeSpan(float NewLifeSpan) { NativeCall<void, float>(this, "ADroppedItem.ResetLifeSpan", NewLifeSpan); }
	void SetupDroppedItemLifeSpan() { NativeCall<void>(this, "ADroppedItem.SetupDroppedItemLifeSpan"); }
	void SetupVisuals() { NativeCall<void>(this, "ADroppedItem.SetupVisuals"); }
	void Stasis() { NativeCall<void>(this, "ADroppedItem.Stasis"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADroppedItem.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "ADroppedItem.TryMultiUse", ForPC, UseIndex); }
	void BPOnItemPickedUp(APlayerController * ByPC, UPrimalItem * InventoryItem) { NativeCall<void, APlayerController *, UPrimalItem *>(this, "ADroppedItem.BPOnItemPickedUp", ByPC, InventoryItem); }
	bool IsAllowedToPickupItem(APlayerController * PC) { return NativeCall<bool, APlayerController *>(this, "ADroppedItem.IsAllowedToPickupItem", PC); }
};

