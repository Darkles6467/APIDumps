#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientIgnoreMoveInput_Parms
{
	char __padding[0x1L];
	bool& bIgnoreField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientIgnoreMoveInput_Parms.bIgnore"); }
};

