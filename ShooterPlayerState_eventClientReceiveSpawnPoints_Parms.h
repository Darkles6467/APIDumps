#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventClientReceiveSpawnPoints_Parms
{
	char __padding[0x10L];
	TArray<FSpawnPointInfo>& SpawnPointsInfosField() { return *GetNativePointerField<TArray<FSpawnPointInfo>*>(this, "ShooterPlayerState_eventClientReceiveSpawnPoints_Parms.SpawnPointsInfos"); }
};

