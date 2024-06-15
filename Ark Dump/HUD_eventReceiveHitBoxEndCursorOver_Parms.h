#pragma once

#include "BaseDeclarations.h"
struct HUD_eventReceiveHitBoxEndCursorOver_Parms
{
	char __padding[0x8L];
	FName& BoxNameField() { return *GetNativePointerField<FName*>(this, "HUD_eventReceiveHitBoxEndCursorOver_Parms.BoxName"); }
};

