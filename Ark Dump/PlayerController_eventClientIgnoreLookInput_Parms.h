#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientIgnoreLookInput_Parms
{
	char __padding[0x1L];
	bool& bIgnoreField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientIgnoreLookInput_Parms.bIgnore"); }
};

