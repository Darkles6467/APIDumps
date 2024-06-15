#pragma once

#include "BaseDeclarations.h"
struct FAliveNameAndLocation
{
	char __padding[0x40L];
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FAliveNameAndLocation.PlayerName"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FAliveNameAndLocation.TribeName"); }
	unsigned int& TargetingTeamField() { return *GetNativePointerField<unsigned int*>(this, "FAliveNameAndLocation.TargetingTeam"); }
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FAliveNameAndLocation.PlayerID"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FAliveNameAndLocation.Location"); }

	// Functions

	FAliveNameAndLocation * operator=(const FAliveNameAndLocation * __that) { return NativeCall<FAliveNameAndLocation *, const FAliveNameAndLocation *>(this, "FAliveNameAndLocation.operator=", __that); }
};

