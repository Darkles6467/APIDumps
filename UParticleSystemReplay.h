#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleSystemReplay : UObject
{
	char __padding[0x18L];
	int& ClipIDNumberField() { return *GetNativePointerField<int*>(this, "UParticleSystemReplay.ClipIDNumber"); }
	TArray<FParticleSystemReplayFrame>& FramesField() { return *GetNativePointerField<TArray<FParticleSystemReplayFrame>*>(this, "UParticleSystemReplay.Frames"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleSystemReplay.Serialize", Ar); }
};

