#pragma once

#include "BaseDeclarations.h"
struct FSeamlessTravelHandler
{
	char __padding[0xa8L];
	bool& bTransitionInProgressField() { return *GetNativePointerField<bool*>(this, "FSeamlessTravelHandler.bTransitionInProgress"); }
	FURL& PendingTravelURLField() { return *GetNativePointerField<FURL*>(this, "FSeamlessTravelHandler.PendingTravelURL"); }
	FGuid& PendingTravelGuidField() { return *GetNativePointerField<FGuid*>(this, "FSeamlessTravelHandler.PendingTravelGuid"); }
	bool& bSwitchedToDefaultMapField() { return *GetNativePointerField<bool*>(this, "FSeamlessTravelHandler.bSwitchedToDefaultMap"); }
	UWorld * CurrentWorldField() { return GetNativePointerField<UWorld *>(this, "FSeamlessTravelHandler.CurrentWorld"); }
	UWorld * LoadedWorldField() { return GetNativePointerField<UWorld *>(this, "FSeamlessTravelHandler.LoadedWorld"); }
	bool& bPauseAtMidpointField() { return *GetNativePointerField<bool*>(this, "FSeamlessTravelHandler.bPauseAtMidpoint"); }
	bool& bNeedCancelCleanUpField() { return *GetNativePointerField<bool*>(this, "FSeamlessTravelHandler.bNeedCancelCleanUp"); }
	FName& WorldContextHandleField() { return *GetNativePointerField<FName*>(this, "FSeamlessTravelHandler.WorldContextHandle"); }

	// Functions

	void CancelTravel() { NativeCall<void>(this, "FSeamlessTravelHandler.CancelTravel"); }
	void CopyWorldData() { NativeCall<void>(this, "FSeamlessTravelHandler.CopyWorldData"); }
	FString * GetDestinationMapName(FString * result) { return NativeCall<FString *, FString *>(this, "FSeamlessTravelHandler.GetDestinationMapName", result); }
	void SeamlessTravelLoadCallback(const FString * PackageName, UPackage * LevelPackage) { NativeCall<void, const FString *, UPackage *>(this, "FSeamlessTravelHandler.SeamlessTravelLoadCallback", PackageName, LevelPackage); }
	void StartLoadingDestination() { NativeCall<void>(this, "FSeamlessTravelHandler.StartLoadingDestination"); }
	bool StartTravel(UWorld * InCurrentWorld, const FURL * InURL, const FGuid * InGuid) { return NativeCall<bool, UWorld *, const FURL *, const FGuid *>(this, "FSeamlessTravelHandler.StartTravel", InCurrentWorld, InURL, InGuid); }
	UWorld * Tick() { return NativeCall<UWorld *>(this, "FSeamlessTravelHandler.Tick"); }
	FSeamlessTravelHandler * operator=(const FSeamlessTravelHandler * __that) { return NativeCall<FSeamlessTravelHandler *, const FSeamlessTravelHandler *>(this, "FSeamlessTravelHandler.operator=", __that); }
};

