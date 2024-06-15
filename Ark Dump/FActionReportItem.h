#pragma once

#include "BaseDeclarations.h"
struct FActionReportItem
{
	char __padding[0x50L];
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FActionReportItem.PlayerName"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FActionReportItem.TribeName"); }
	FString& TimeOfDeathField() { return *GetNativePointerField<FString*>(this, "FActionReportItem.TimeOfDeath"); }
	FString& LevelOfDeathField() { return *GetNativePointerField<FString*>(this, "FActionReportItem.LevelOfDeath"); }
	FString& DeathMessageField() { return *GetNativePointerField<FString*>(this, "FActionReportItem.DeathMessage"); }

	// Functions

	FActionReportItem * operator=(const FActionReportItem * __that) { return NativeCall<FActionReportItem *, const FActionReportItem *>(this, "FActionReportItem.operator=", __that); }
};

