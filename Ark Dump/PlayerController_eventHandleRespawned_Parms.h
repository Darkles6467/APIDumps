#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventHandleRespawned_Parms
{
	char __padding[0x10L];
	bool& IsFirstSpawnField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventHandleRespawned_Parms.IsFirstSpawn"); }
};

