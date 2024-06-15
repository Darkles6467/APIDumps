#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Activated_eventHandleActivation_Parms
{
	char __padding[0x1L];
	bool& bActiveField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Activated_eventHandleActivation_Parms.bActive"); }
};

