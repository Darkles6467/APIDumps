#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMultiUseEntry.h"

struct APointOfInterestActor : AActor
{
	char __padding[0x448L];
	TSubobjectPtr<UTextRenderComponent>& PointTextCompField() { return *GetNativePointerField<TSubobjectPtr<UTextRenderComponent>*>(this, "APointOfInterestActor.PointTextComp"); }
	TSubobjectPtr<UTextRenderComponent>& PointTitleTextCompField() { return *GetNativePointerField<TSubobjectPtr<UTextRenderComponent>*>(this, "APointOfInterestActor.PointTitleTextComp"); }
	FPointOfInterestData& MyPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "APointOfInterestActor.MyPointOfInterestData"); }
	FPointOfInterestCompanionBehavior& MyPointOfInterestCompanionBehaviorField() { return *GetNativePointerField<FPointOfInterestCompanionBehavior*>(this, "APointOfInterestActor.MyPointOfInterestCompanionBehavior"); }
	FVector& UseSphereLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APointOfInterestActor.UseSphereLocOffset"); }
	float& UseSphereRadiusField() { return *GetNativePointerField<float*>(this, "APointOfInterestActor.UseSphereRadius"); }
	float& TitleTextZOffsetField() { return *GetNativePointerField<float*>(this, "APointOfInterestActor.TitleTextZOffset"); }
	APointOfInterestManagerList * MyPointManagerField() { return GetNativePointerField<APointOfInterestManagerList *>(this, "APointOfInterestActor.MyPointManager"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APointOfInterestActor.BeginPlay"); }
	bool CanBeViewed_Implementation(AActor * ByActor) { return NativeCall<bool, AActor *>(this, "APointOfInterestActor.CanBeViewed_Implementation", ByActor); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APointOfInterestActor.ClientMultiUse", ForPC, UseIndex); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APointOfInterestActor.GetMultiUseEntries", ForPC, MultiUseEntries); }
	FPointOfInterestCompanionBehavior * GetMyPointOfInterestCompanionBehavior() { return NativeCall<FPointOfInterestCompanionBehavior *>(this, "APointOfInterestActor.GetMyPointOfInterestCompanionBehavior"); }
	FPointOfInterestData * GetMyPointOfInterestData() { return NativeCall<FPointOfInterestData *>(this, "APointOfInterestActor.GetMyPointOfInterestData"); }
	FPointOfInterestCompanionBehavior * GetPointCompanionBehaviorData_Implementation(FPointOfInterestCompanionBehavior * result) { return NativeCall<FPointOfInterestCompanionBehavior *, FPointOfInterestCompanionBehavior *>(this, "APointOfInterestActor.GetPointCompanionBehaviorData_Implementation", result); }
	FPointOfInterestData * GetPointOfInterestData_Implementation(FPointOfInterestData * result) { return NativeCall<FPointOfInterestData *, FPointOfInterestData *>(this, "APointOfInterestActor.GetPointOfInterestData_Implementation", result); }
	bool IsPointOfInterestValid_Implementation() { return NativeCall<bool>(this, "APointOfInterestActor.IsPointOfInterestValid_Implementation"); }
	void OnConstruction(const FTransform * Transform) { NativeCall<void, const FTransform *>(this, "APointOfInterestActor.OnConstruction", Transform); }
	void RefreshPointData_Implementation() { NativeCall<void>(this, "APointOfInterestActor.RefreshPointData_Implementation"); }
	void SetPointManagerRef(APointOfInterestManagerList * NewManager) { NativeCall<void, APointOfInterestManagerList *>(this, "APointOfInterestActor.SetPointManagerRef", NewManager); }
	void SetPointTagUniqueState_Implementation(bool bNewUniqueState) { NativeCall<void, bool>(this, "APointOfInterestActor.SetPointTagUniqueState_Implementation", bNewUniqueState); }
	void ViewPoint_Implementation(AActor * ViewedByActor) { NativeCall<void, AActor *>(this, "APointOfInterestActor.ViewPoint_Implementation", ViewedByActor); }
	void RefreshPointData() { NativeCall<void>(this, "APointOfInterestActor.RefreshPointData"); }
};

struct ACompanionEventTrigger : APointOfInterestActor
{
	char __padding[0x60L];
	TSubobjectPtr<UBoxComponent>& BoxTriggerCompField() { return *GetNativePointerField<TSubobjectPtr<UBoxComponent>*>(this, "ACompanionEventTrigger.BoxTriggerComp"); }
	TSubobjectPtr<UTextRenderComponent>& EventTitleTextCompField() { return *GetNativePointerField<TSubobjectPtr<UTextRenderComponent>*>(this, "ACompanionEventTrigger.EventTitleTextComp"); }
	FCompanionEventData& MyEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "ACompanionEventTrigger.MyEventData"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ACompanionEventTrigger.BeginPlay"); }
	FVector * GetHUDWorldDrawLocation(FVector * result, const FName * HUDTag) { return NativeCall<FVector *, FVector *, const FName *>(this, "ACompanionEventTrigger.GetHUDWorldDrawLocation", result, HUDTag); }
	void OnBeginOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ACompanionEventTrigger.OnBeginOverlap", Actor); }
	void OnConstruction(const FTransform * Transform) { NativeCall<void, const FTransform *>(this, "ACompanionEventTrigger.OnConstruction", Transform); }
	void OnEndOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ACompanionEventTrigger.OnEndOverlap", Actor); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ACompanionEventTrigger.Tick", DeltaSeconds); }
	FCompanionEventData * GetTriggerEventData() { return NativeCall<FCompanionEventData *>(this, "ACompanionEventTrigger.GetTriggerEventData"); }
};

