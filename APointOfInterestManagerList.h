#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ACustomActorList : AInfo
{
	char __padding[0x18L];
	bool& bDestroyIfEmptyField() { return *GetNativePointerField<bool*>(this, "ACustomActorList.bDestroyIfEmpty"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ACustomActorList.BeginPlay"); }
	void DestroyActors() { NativeCall<void>(this, "ACustomActorList.DestroyActors"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ACustomActorList.EndPlay", EndPlayReason); }
};

struct APointOfInterestManagerList : ACustomActorList
{
	char __padding[0x8L];

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APointOfInterestManagerList.BeginPlay"); }
	bool CheckListForTagCollisions(AActor * ForSpecificActor) { return NativeCall<bool, AActor *>(this, "APointOfInterestManagerList.CheckListForTagCollisions", ForSpecificActor); }
	bool ManualAddPointOfInterestActor(AActor * AddActor) { return NativeCall<bool, AActor *>(this, "APointOfInterestManagerList.ManualAddPointOfInterestActor", AddActor); }
	void OnConstruction(const FTransform * Transform) { NativeCall<void, const FTransform *>(this, "APointOfInterestManagerList.OnConstruction", Transform); }
	void PopulatePointsActorList() { NativeCall<void>(this, "APointOfInterestManagerList.PopulatePointsActorList"); }
	void ReConstructPointsInList() { NativeCall<void>(this, "APointOfInterestManagerList.ReConstructPointsInList"); }
	void ScanForAllValidPointsOfInterest() { NativeCall<void>(this, "APointOfInterestManagerList.ScanForAllValidPointsOfInterest"); }
};

