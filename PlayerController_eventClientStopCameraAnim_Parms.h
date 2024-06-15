#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientStopCameraAnim_Parms
{
	char __padding[0x8L];
	UCameraAnim * AnimToStopField() { return GetNativePointerField<UCameraAnim *>(this, "PlayerController_eventClientStopCameraAnim_Parms.AnimToStop"); }
};

