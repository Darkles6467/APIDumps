#pragma once

#include "BaseDeclarations.h"
struct MissionType_ModularMissionBase_eventSpawnActorForMissionModule_Parms
{
	char __padding[0x50L];
	FTransform& ActorTransformField() { return *GetNativePointerField<FTransform*>(this, "MissionType_ModularMissionBase_eventSpawnActorForMissionModule_Parms.ActorTransform"); }
	bool& bSpawnEvenIfCollidingField() { return *GetNativePointerField<bool*>(this, "MissionType_ModularMissionBase_eventSpawnActorForMissionModule_Parms.bSpawnEvenIfColliding"); }
};

