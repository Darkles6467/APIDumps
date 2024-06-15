#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerSetDefaultItemSlotClass_Parms
{
	char __padding[0x18L];
	int& slotNumField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerSetDefaultItemSlotClass_Parms.slotNum"); }
	bool& bIsEngramField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerState_eventServerSetDefaultItemSlotClass_Parms.bIsEngram"); }
};

