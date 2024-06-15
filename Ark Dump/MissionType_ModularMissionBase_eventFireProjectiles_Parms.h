#pragma once

#include "BaseDeclarations.h"
struct MissionType_ModularMissionBase_eventFireProjectiles_Parms
{
	char __padding[0x40L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "MissionType_ModularMissionBase_eventFireProjectiles_Parms.Location"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "MissionType_ModularMissionBase_eventFireProjectiles_Parms.Velocity"); }

	// Functions

};

