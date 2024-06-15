#pragma once

#include "BaseDeclarations.h"
#include "FParticleEmitterInstance.h"

struct FParticleSpriteEmitterInstance : FParticleEmitterInstance
{

	// Functions

	bool FillReplayData(FDynamicEmitterReplayDataBase * OutData) { return NativeCall<bool, FDynamicEmitterReplayDataBase *>(this, "FParticleSpriteEmitterInstance.FillReplayData", OutData); }
	void GetAllocatedSize(int * OutNum, int * OutMax) { NativeCall<void, int *, int *>(this, "FParticleSpriteEmitterInstance.GetAllocatedSize", OutNum, OutMax); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "FParticleSpriteEmitterInstance.GetResourceSize", Mode); }
	bool UpdateDynamicData(FDynamicEmitterDataBase * DynamicData, bool bSelected) { return NativeCall<bool, FDynamicEmitterDataBase *, bool>(this, "FParticleSpriteEmitterInstance.UpdateDynamicData", DynamicData, bSelected); }
};

