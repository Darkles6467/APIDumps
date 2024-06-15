#pragma once

#include "BaseDeclarations.h"
struct FWorldContext
{
	char __padding[0x268L];
	TEnumAsByte<enum EWorldType::Type>& WorldTypeField() { return *GetNativePointerField<TEnumAsByte<enum EWorldType::Type>*>(this, "FWorldContext.WorldType"); }
	FSeamlessTravelHandler& SeamlessTravelHandlerField() { return *GetNativePointerField<FSeamlessTravelHandler*>(this, "FWorldContext.SeamlessTravelHandler"); }
	FName& ContextHandleField() { return *GetNativePointerField<FName*>(this, "FWorldContext.ContextHandle"); }
	FString& TravelURLField() { return *GetNativePointerField<FString*>(this, "FWorldContext.TravelURL"); }
	char& TravelTypeField() { return *GetNativePointerField<char*>(this, "FWorldContext.TravelType"); }
	FURL& LastURLField() { return *GetNativePointerField<FURL*>(this, "FWorldContext.LastURL"); }
	FURL& LastRemoteURLField() { return *GetNativePointerField<FURL*>(this, "FWorldContext.LastRemoteURL"); }
	UPendingNetGame * PendingNetGameField() { return GetNativePointerField<UPendingNetGame *>(this, "FWorldContext.PendingNetGame"); }
	TArray<FFullyLoadedPackagesInfo>& PackagesToFullyLoadField() { return *GetNativePointerField<TArray<FFullyLoadedPackagesInfo>*>(this, "FWorldContext.PackagesToFullyLoad"); }
	TArray<FName>& LevelsToLoadForPendingMapChangeField() { return *GetNativePointerField<TArray<FName>*>(this, "FWorldContext.LevelsToLoadForPendingMapChange"); }
	TArray<ULevel *>& LoadedLevelsForPendingMapChangeField() { return *GetNativePointerField<TArray<ULevel *>*>(this, "FWorldContext.LoadedLevelsForPendingMapChange"); }
	FString& PendingMapChangeFailureDescriptionField() { return *GetNativePointerField<FString*>(this, "FWorldContext.PendingMapChangeFailureDescription"); }
	TArray<FLevelStreamingStatus>& PendingLevelStreamingStatusUpdatesField() { return *GetNativePointerField<TArray<FLevelStreamingStatus>*>(this, "FWorldContext.PendingLevelStreamingStatusUpdates"); }
	TArray<FNamedNetDriver>& ActiveNetDriversField() { return *GetNativePointerField<TArray<FNamedNetDriver>*>(this, "FWorldContext.ActiveNetDrivers"); }
	int& PIEInstanceField() { return *GetNativePointerField<int*>(this, "FWorldContext.PIEInstance"); }
	FString& PIEPrefixField() { return *GetNativePointerField<FString*>(this, "FWorldContext.PIEPrefix"); }
	FString& PIERemapPrefixField() { return *GetNativePointerField<FString*>(this, "FWorldContext.PIERemapPrefix"); }
	bool& RunAsDedicatedField() { return *GetNativePointerField<bool*>(this, "FWorldContext.RunAsDedicated"); }
	bool& bWaitingOnOnlineSubsystemField() { return *GetNativePointerField<bool*>(this, "FWorldContext.bWaitingOnOnlineSubsystem"); }
	TArray<UWorld * *>& ExternalReferencesField() { return *GetNativePointerField<TArray<UWorld * *>*>(this, "FWorldContext.ExternalReferences"); }
	UWorld * ThisCurrentWorldField() { return GetNativePointerField<UWorld *>(this, "FWorldContext.ThisCurrentWorld"); }

	// Functions

	void AddRef(UWorld ** WorldPtr) { NativeCall<void, UWorld **>(this, "FWorldContext.AddRef", WorldPtr); }
	void SetCurrentWorld(UWorld * World) { NativeCall<void, UWorld *>(this, "FWorldContext.SetCurrentWorld", World); }
	void AddReferencedObjects(FReferenceCollector * Collector, UObject * ReferencingObject) { NativeCall<void, FReferenceCollector *, UObject *>(this, "FWorldContext.AddReferencedObjects", Collector, ReferencingObject); }
	FWorldContext * operator=(const FWorldContext * __that) { return NativeCall<FWorldContext *, const FWorldContext *>(this, "FWorldContext.operator=", __that); }
};

