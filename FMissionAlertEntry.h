#pragma once

#include "BaseDeclarations.h"
struct FMissionAlertEntry
{
	char __padding[0x30L];
	int& CountField() { return *GetNativePointerField<int*>(this, "FMissionAlertEntry.Count"); }
	FString& LabelField() { return *GetNativePointerField<FString*>(this, "FMissionAlertEntry.Label"); }

	// Functions

	FMissionAlertEntry * operator=(const FMissionAlertEntry * __that) { return NativeCall<FMissionAlertEntry *, const FMissionAlertEntry *>(this, "FMissionAlertEntry.operator=", __that); }
};

