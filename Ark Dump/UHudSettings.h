#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHudSettings : UObject
{
	char __padding[0x18L];
	TArray<FName>& DebugDisplayField() { return *GetNativePointerField<TArray<FName>*>(this, "UHudSettings.DebugDisplay"); }

	// Functions

};

