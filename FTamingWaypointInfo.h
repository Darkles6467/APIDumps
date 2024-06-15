#pragma once

#include "BaseDeclarations.h"
struct FTamingWaypointInfo
{
	char __padding[0x90L];
	bool& bWaypointActiveField() { return *GetNativePointerField<bool*>(this, "FTamingWaypointInfo.bWaypointActive"); }
	FVector& WaypointDestinationField() { return *GetNativePointerField<FVector*>(this, "FTamingWaypointInfo.WaypointDestination"); }
	FString& WaypointTitleField() { return *GetNativePointerField<FString*>(this, "FTamingWaypointInfo.WaypointTitle"); }
	int& WaypointIDField() { return *GetNativePointerField<int*>(this, "FTamingWaypointInfo.WaypointID"); }
	FTamingDinoInfo& DinoInfoField() { return *GetNativePointerField<FTamingDinoInfo*>(this, "FTamingWaypointInfo.DinoInfo"); }
	float& ProgressBarPercentField() { return *GetNativePointerField<float*>(this, "FTamingWaypointInfo.ProgressBarPercent"); }
	bool& bIsTamedField() { return *GetNativePointerField<bool*>(this, "FTamingWaypointInfo.bIsTamed"); }

	// Functions

	int GetHash() { return NativeCall<int>(this, "FTamingWaypointInfo.GetHash"); }
	FTamingWaypointInfo * operator=(const FTamingWaypointInfo * __that) { return NativeCall<FTamingWaypointInfo *, const FTamingWaypointInfo *>(this, "FTamingWaypointInfo.operator=", __that); }
};

