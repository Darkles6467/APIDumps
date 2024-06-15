#pragma once

#include "BaseDeclarations.h"
struct MissionType_ModularMissionBase_eventMultiFireProjectiles_Parms
{
	char __padding[0x38L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "MissionType_ModularMissionBase_eventMultiFireProjectiles_Parms.Location"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "MissionType_ModularMissionBase_eventMultiFireProjectiles_Parms.Velocity"); }
};

