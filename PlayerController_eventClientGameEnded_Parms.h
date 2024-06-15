#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientGameEnded_Parms
{
	char __padding[0x10L];
	bool& bIsWinnerField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientGameEnded_Parms.bIsWinner"); }
};

