#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientSetCinematicMode_Parms
{
	char __padding[0x4L];
	bool& bInCinematicModeField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientSetCinematicMode_Parms.bInCinematicMode"); }
	bool& bAffectsMovementField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientSetCinematicMode_Parms.bAffectsMovement"); }
	bool& bAffectsTurningField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientSetCinematicMode_Parms.bAffectsTurning"); }
	bool& bAffectsHUDField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientSetCinematicMode_Parms.bAffectsHUD"); }
};

