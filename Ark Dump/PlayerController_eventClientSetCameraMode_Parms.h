#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientSetCameraMode_Parms
{
	char __padding[0x8L];
	FName& NewCamModeField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientSetCameraMode_Parms.NewCamMode"); }
};

