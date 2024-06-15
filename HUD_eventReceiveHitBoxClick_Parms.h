#pragma once

#include "BaseDeclarations.h"
struct HUD_eventReceiveHitBoxClick_Parms
{
	char __padding[0x8L];
	FName& BoxNameField() { return *GetNativePointerField<FName*>(this, "HUD_eventReceiveHitBoxClick_Parms.BoxName"); }
};

