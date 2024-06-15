#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientNetGUIDActorDeletion_Parms
{
	char __padding[0x4L];
	FNetworkGUID& TheNetGUIDField() { return *GetNativePointerField<FNetworkGUID*>(this, "PlayerController_eventClientNetGUIDActorDeletion_Parms.TheNetGUID"); }
};

