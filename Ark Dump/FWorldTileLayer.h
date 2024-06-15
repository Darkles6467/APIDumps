#pragma once

#include "BaseDeclarations.h"
struct FWorldTileLayer
{
	char __padding[0x30L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FWorldTileLayer.Name"); }
	FName& CachedNameField() { return *GetNativePointerField<FName*>(this, "FWorldTileLayer.CachedName"); }
	int& Reserved0Field() { return *GetNativePointerField<int*>(this, "FWorldTileLayer.Reserved0"); }
	FIntPoint& Reserved1Field() { return *GetNativePointerField<FIntPoint*>(this, "FWorldTileLayer.Reserved1"); }
	int& StreamingDistanceField() { return *GetNativePointerField<int*>(this, "FWorldTileLayer.StreamingDistance"); }
	bool& DistanceStreamingEnabledField() { return *GetNativePointerField<bool*>(this, "FWorldTileLayer.DistanceStreamingEnabled"); }
	bool& bForcedHiddenField() { return *GetNativePointerField<bool*>(this, "FWorldTileLayer.bForcedHidden"); }
	bool& bForcedLevelAsDistanceStreamingEnabledField() { return *GetNativePointerField<bool*>(this, "FWorldTileLayer.bForcedLevelAsDistanceStreamingEnabled"); }

	// Functions

	bool operator==(const FWorldTileLayer * OtherLayer) { return NativeCall<bool, const FWorldTileLayer *>(this, "FWorldTileLayer.operator==", OtherLayer); }
};

