#pragma once

#include "BaseDeclarations.h"
struct BeamWeaponController_eventFireBeams_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "BeamWeaponController_eventFireBeams_Parms.ReturnValue"); }
};

