#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnIsUsedSpawnPointStillSupported_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnIsUsedSpawnPointStillSupported_Parms.ReturnValue"); }
};

