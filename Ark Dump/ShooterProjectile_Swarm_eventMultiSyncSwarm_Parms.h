#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_Swarm_eventMultiSyncSwarm_Parms
{
	char __padding[0x10L];
	TArray<FBoid>& ServerSwarmDataField() { return *GetNativePointerField<TArray<FBoid>*>(this, "ShooterProjectile_Swarm_eventMultiSyncSwarm_Parms.ServerSwarmData"); }
};

