#pragma once

#include "BaseDeclarations.h"
struct FBlackListEntry
{
	char __padding[0x20L];
	FString& DriverVersionStringField() { return *GetNativePointerField<FString*>(this, "FBlackListEntry.DriverVersionString"); }
	FString& ReasonField() { return *GetNativePointerField<FString*>(this, "FBlackListEntry.Reason"); }
};

