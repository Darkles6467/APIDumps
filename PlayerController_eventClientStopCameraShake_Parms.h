#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientStopCameraShake_Parms
{
	char __padding[0x8L];
	TSubclassOf<UCameraShake>& ShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "PlayerController_eventClientStopCameraShake_Parms.Shake"); }
};

