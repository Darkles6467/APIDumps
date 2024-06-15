#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventOnMyPlayerMissionComplete_Parms
{
	char __padding[0x18L];
	bool& bSuccessField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventOnMyPlayerMissionComplete_Parms.bSuccess"); }
};

