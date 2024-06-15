#pragma once

#include "BaseDeclarations.h"
struct FStreamableSoundInfoDeprecated
{
	char __padding[0x18L];
	UDEPRECATED_SoundNodeWave * SoundNodeWaveField() { return GetNativePointerField<UDEPRECATED_SoundNodeWave *>(this, "FStreamableSoundInfoDeprecated.SoundNodeWave"); }
	TArray<FStreamableSoundInstanceDeprecated>& SoundInstancesField() { return *GetNativePointerField<TArray<FStreamableSoundInstanceDeprecated>*>(this, "FStreamableSoundInfoDeprecated.SoundInstances"); }
};

