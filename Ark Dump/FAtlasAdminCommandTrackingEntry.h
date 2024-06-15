#pragma once

#include "BaseDeclarations.h"
struct FAtlasAdminCommandTrackingEntry
{
	char __padding[0x60L];
	unsigned int& ServerUTCTimeField() { return *GetNativePointerField<unsigned int*>(this, "FAtlasAdminCommandTrackingEntry.ServerUTCTime"); }
	__int64& PlayerIDField() { return *GetNativePointerField<__int64*>(this, "FAtlasAdminCommandTrackingEntry.PlayerID"); }
	FString& SteamIDField() { return *GetNativePointerField<FString*>(this, "FAtlasAdminCommandTrackingEntry.SteamID"); }
	FString& _IPField() { return *GetNativePointerField<FString*>(this, "FAtlasAdminCommandTrackingEntry._IP"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FAtlasAdminCommandTrackingEntry.Location"); }
	FString& CommandTypeField() { return *GetNativePointerField<FString*>(this, "FAtlasAdminCommandTrackingEntry.CommandType"); }
	FString& CommandField() { return *GetNativePointerField<FString*>(this, "FAtlasAdminCommandTrackingEntry.Command"); }

	// Functions

	FAtlasAdminCommandTrackingEntry * operator=(const FAtlasAdminCommandTrackingEntry * __that) { return NativeCall<FAtlasAdminCommandTrackingEntry *, const FAtlasAdminCommandTrackingEntry *>(this, "FAtlasAdminCommandTrackingEntry.operator=", __that); }
};

