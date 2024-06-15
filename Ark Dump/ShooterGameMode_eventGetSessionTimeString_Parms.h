#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventGetSessionTimeString_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "ShooterGameMode_eventGetSessionTimeString_Parms.ReturnValue"); }
};

