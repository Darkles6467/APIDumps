#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureExplosive.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalStructureExplosiveTransGPS : APrimalStructureExplosive
{
	char __padding[0x20L];
	float& CurrentFrequencyField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosiveTransGPS.CurrentFrequency"); }
	FName& InSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureExplosiveTransGPS.InSocketName"); }
	unsigned __int64& PlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "APrimalStructureExplosiveTransGPS.PlayerDataID"); }

	// Functions

	void AttachedToBase() { NativeCall<void>(this, "APrimalStructureExplosiveTransGPS.AttachedToBase"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureExplosiveTransGPS.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureExplosiveTransGPS.Destroyed"); }
	int GetHitPawnCollisionGroup() { return NativeCall<int>(this, "APrimalStructureExplosiveTransGPS.GetHitPawnCollisionGroup"); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement) { return NativeCall<int, APlayerController *, FVector, FRotator, FPlacementData *, bool, FRotator, bool>(this, "APrimalStructureExplosiveTransGPS.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement); }
	void NetSetLocation_Implementation(FVector NewLocation) { NativeCall<void, FVector>(this, "APrimalStructureExplosiveTransGPS.NetSetLocation_Implementation", NewLocation); }
	void PlaceOnToActor(APawn * AttachToPawn, FName BoneName, bool bSelfPlacement) { NativeCall<void, APawn *, FName, bool>(this, "APrimalStructureExplosiveTransGPS.PlaceOnToActor", AttachToPawn, BoneName, bSelfPlacement); }
	void SavePlacementData(FVector _AtLocation, FRotator _AtRotation, FRotator _PlayerViewRotation, FName BoneName) { NativeCall<void, FVector, FRotator, FRotator, FName>(this, "APrimalStructureExplosiveTransGPS.SavePlacementData", _AtLocation, _AtRotation, _PlayerViewRotation, BoneName); }
	void NetSetLocation(FVector NewLocation) { NativeCall<void, FVector>(this, "APrimalStructureExplosiveTransGPS.NetSetLocation", NewLocation); }
};

