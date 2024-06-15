#pragma once

#include "BaseDeclarations.h"
struct BeamWeaponController_eventStartChargingBeams_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "BeamWeaponController_eventStartChargingBeams_Parms.ReturnValue"); }
};

