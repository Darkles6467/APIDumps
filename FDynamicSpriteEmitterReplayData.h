#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSpriteEmitterReplayDataBase.h"
#include "FDynamicEmitterReplayDataBase.h"

struct FDynamicSpriteEmitterReplayData : FDynamicSpriteEmitterReplayDataBase
{

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FDynamicSpriteEmitterReplayData.Serialize", Ar); }
};

