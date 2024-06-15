#pragma once

#include "BaseDeclarations.h"
struct BeamWeaponController_eventStartChargingBeam_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "BeamWeaponController_eventStartChargingBeam_Parms.ReturnValue"); }
};

