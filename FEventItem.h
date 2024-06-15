#pragma once

#include "BaseDeclarations.h"
struct FEventItem
{
	char __padding[0x20L];
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "FEventItem.EventName"); }
	FString& ItemField() { return *GetNativePointerField<FString*>(this, "FEventItem.Item"); }
	bool& bIsEngramField() { return *GetNativePointerField<bool*>(this, "FEventItem.bIsEngram"); }

	// Functions

};

