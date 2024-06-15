#pragma once

#include "BaseDeclarations.h"
struct BeamWeaponComponent_eventBeamStoppedFiringEvent_Parms
{
	char __padding[0x8L];
	UBeamWeaponComponent * BeamComponentField() { return GetNativePointerField<UBeamWeaponComponent *>(this, "BeamWeaponComponent_eventBeamStoppedFiringEvent_Parms.BeamComponent"); }
};

