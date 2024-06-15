#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPGetDebugInfoString_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "ShooterWeapon_eventBPGetDebugInfoString_Parms.ReturnValue"); }
};

