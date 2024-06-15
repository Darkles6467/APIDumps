#pragma once

#include "BaseDeclarations.h"
struct FMissionWaypointInfo
{
	char __padding[0x28L];
	bool& bWaypointActiveField() { return *GetNativePointerField<bool*>(this, "FMissionWaypointInfo.bWaypointActive"); }
	FVector& WaypointDestinationField() { return *GetNativePointerField<FVector*>(this, "FMissionWaypointInfo.WaypointDestination"); }
	FString& WaypointTitleField() { return *GetNativePointerField<FString*>(this, "FMissionWaypointInfo.WaypointTitle"); }
	FName& WaypointIDField() { return *GetNativePointerField<FName*>(this, "FMissionWaypointInfo.WaypointID"); }

	// Functions

	FMissionWaypointInfo * operator=(const FMissionWaypointInfo * __that) { return NativeCall<FMissionWaypointInfo *, const FMissionWaypointInfo *>(this, "FMissionWaypointInfo.operator=", __that); }
};

