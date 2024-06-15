#pragma once

#include "BaseDeclarations.h"
#include "ABaseBoxTrigger.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AMissionTrigger : ABaseBoxTrigger
{
	char __padding[0x450L];
	FName& TriggerKeyField() { return *GetNativePointerField<FName*>(this, "AMissionTrigger.TriggerKey"); }
	int& TriggerOrderField() { return *GetNativePointerField<int*>(this, "AMissionTrigger.TriggerOrder"); }
	int& CustomDataIntField() { return *GetNativePointerField<int*>(this, "AMissionTrigger.CustomDataInt"); }
	float& CustomDataFloatField() { return *GetNativePointerField<float*>(this, "AMissionTrigger.CustomDataFloat"); }
	TArray<float>& CustomDataFloatArrayField() { return *GetNativePointerField<TArray<float>*>(this, "AMissionTrigger.CustomDataFloatArray"); }
	FVector& CustomDataVectorField() { return *GetNativePointerField<FVector*>(this, "AMissionTrigger.CustomDataVector"); }
	FString& CustomDataStringField() { return *GetNativePointerField<FString*>(this, "AMissionTrigger.CustomDataString"); }
	FPointOfInterestData& MyPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "AMissionTrigger.MyPointOfInterestData"); }
	FPointOfInterestCompanionBehavior& MyPointOfInterestCompanionBehaviorField() { return *GetNativePointerField<FPointOfInterestCompanionBehavior*>(this, "AMissionTrigger.MyPointOfInterestCompanionBehavior"); }

	// Functions

	bool CanBeViewed_Implementation(AActor * ByActor) { return NativeCall<bool, AActor *>(this, "AMissionTrigger.CanBeViewed_Implementation", ByActor); }
	void Destroyed() { NativeCall<void>(this, "AMissionTrigger.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AMissionTrigger.EndPlay", EndPlayReason); }
	FPointOfInterestCompanionBehavior * GetMyPointOfInterestCompanionBehavior() { return NativeCall<FPointOfInterestCompanionBehavior *>(this, "AMissionTrigger.GetMyPointOfInterestCompanionBehavior"); }
	FPointOfInterestData * GetMyPointOfInterestData() { return NativeCall<FPointOfInterestData *>(this, "AMissionTrigger.GetMyPointOfInterestData"); }
	FPointOfInterestCompanionBehavior * GetPointCompanionBehaviorData_Implementation(FPointOfInterestCompanionBehavior * result) { return NativeCall<FPointOfInterestCompanionBehavior *, FPointOfInterestCompanionBehavior *>(this, "AMissionTrigger.GetPointCompanionBehaviorData_Implementation", result); }
	FPointOfInterestData * GetPointOfInterestData_Implementation(FPointOfInterestData * result) { return NativeCall<FPointOfInterestData *, FPointOfInterestData *>(this, "AMissionTrigger.GetPointOfInterestData_Implementation", result); }
	bool IsPointOfInterestValid_Implementation() { return NativeCall<bool>(this, "AMissionTrigger.IsPointOfInterestValid_Implementation"); }
	void OnTriggerBeginOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "AMissionTrigger.OnTriggerBeginOverlap", OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnTriggerEndOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex) { NativeCall<void, AActor *, UPrimitiveComponent *, int>(this, "AMissionTrigger.OnTriggerEndOverlap", OtherActor, OtherComp, OtherBodyIndex); }
	void PostInitializeComponents() { NativeCall<void>(this, "AMissionTrigger.PostInitializeComponents"); }
	void SetPointTagUniqueState_Implementation(bool bNewUniqueState) { NativeCall<void, bool>(this, "AMissionTrigger.SetPointTagUniqueState_Implementation", bNewUniqueState); }
	void ViewPoint_Implementation(AActor * ViewedByActor) { NativeCall<void, AActor *>(this, "AMissionTrigger.ViewPoint_Implementation", ViewedByActor); }
	bool IsPointOfInterestValid() { return NativeCall<bool>(this, "AMissionTrigger.IsPointOfInterestValid"); }
};

