#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnIsSpawnpointAllowed_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnIsSpawnpointAllowed_Parms.ReturnValue"); }
};

