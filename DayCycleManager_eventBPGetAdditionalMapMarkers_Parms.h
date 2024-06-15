#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventBPGetAdditionalMapMarkers_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "DayCycleManager_eventBPGetAdditionalMapMarkers_Parms.ForPC"); }
	TArray<FPrimalMapMarkerEntryData>& ReturnValueField() { return *GetNativePointerField<TArray<FPrimalMapMarkerEntryData>*>(this, "DayCycleManager_eventBPGetAdditionalMapMarkers_Parms.ReturnValue"); }
};

