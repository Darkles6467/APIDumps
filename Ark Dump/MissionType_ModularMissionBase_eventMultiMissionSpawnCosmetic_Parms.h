#pragma once

#include "BaseDeclarations.h"
struct MissionType_ModularMissionBase_eventMultiMissionSpawnCosmetic_Parms
{
	char __padding[0x50L];
	UParticleSystem * ParticleTemplateField() { return GetNativePointerField<UParticleSystem *>(this, "MissionType_ModularMissionBase_eventMultiMissionSpawnCosmetic_Parms.ParticleTemplate"); }
	FTransform& TheTransformField() { return *GetNativePointerField<FTransform*>(this, "MissionType_ModularMissionBase_eventMultiMissionSpawnCosmetic_Parms.TheTransform"); }
	float& OverrideTimeDilationField() { return *GetNativePointerField<float*>(this, "MissionType_ModularMissionBase_eventMultiMissionSpawnCosmetic_Parms.OverrideTimeDilation"); }
};

