#pragma once

#include "BaseDeclarations.h"
#include "UDataAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UVRBattleGroupDataAsset : UDataAsset
{
	char __padding[0x18L];
	TArray<FVRBattleWaveUnit>& UnitsField() { return *GetNativePointerField<TArray<FVRBattleWaveUnit>*>(this, "UVRBattleGroupDataAsset.Units"); }
	bool& bForceSpawnEntireGroupField() { return *GetNativePointerField<bool*>(this, "UVRBattleGroupDataAsset.bForceSpawnEntireGroup"); }

	// Functions

};

