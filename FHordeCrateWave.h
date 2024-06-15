#pragma once

#include "BaseDeclarations.h"
struct FHordeCrateWave
{
	char __padding[0x60L];
	int& MinNumOfNPCsField() { return *GetNativePointerField<int*>(this, "FHordeCrateWave.MinNumOfNPCs"); }
	int& MaxNumOfNPCsField() { return *GetNativePointerField<int*>(this, "FHordeCrateWave.MaxNumOfNPCs"); }
	float& TimeToPrepareForWaveField() { return *GetNativePointerField<float*>(this, "FHordeCrateWave.TimeToPrepareForWave"); }
	FHordeCrateNPCGroup& NPCsToSpawnField() { return *GetNativePointerField<FHordeCrateNPCGroup*>(this, "FHordeCrateWave.NPCsToSpawn"); }

	// Functions

};

