#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnCheckGameStateIfCanRespawn_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnCheckGameStateIfCanRespawn_Parms.ReturnValue"); }
};

