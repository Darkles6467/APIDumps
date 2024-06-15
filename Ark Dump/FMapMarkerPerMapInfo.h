#pragma once

#include "BaseDeclarations.h"
struct FMapMarkerPerMapInfo
{
	char __padding[0x20L];
	FString& MapnameField() { return *GetNativePointerField<FString*>(this, "FMapMarkerPerMapInfo.Mapname"); }
	TArray<FPrimalMapMarkerEntryData>& MapMarkersField() { return *GetNativePointerField<TArray<FPrimalMapMarkerEntryData>*>(this, "FMapMarkerPerMapInfo.MapMarkers"); }

	// Functions

	FMapMarkerPerMapInfo * operator=(const FMapMarkerPerMapInfo * __that) { return NativeCall<FMapMarkerPerMapInfo *, const FMapMarkerPerMapInfo *>(this, "FMapMarkerPerMapInfo.operator=", __that); }
};

