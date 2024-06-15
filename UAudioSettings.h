#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAudioSettings : UObject
{
	char __padding[0x38L];
	FStringAssetReference& DefaultSoundClassNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UAudioSettings.DefaultSoundClassName"); }
	FStringAssetReference& DefaultBaseSoundMixField() { return *GetNativePointerField<FStringAssetReference*>(this, "UAudioSettings.DefaultBaseSoundMix"); }
	FStringAssetReference& VoiPSoundClassField() { return *GetNativePointerField<FStringAssetReference*>(this, "UAudioSettings.VoiPSoundClass"); }
	float& LowPassFilterResonanceField() { return *GetNativePointerField<float*>(this, "UAudioSettings.LowPassFilterResonance"); }
	int& MaximumConcurrentStreamsField() { return *GetNativePointerField<int*>(this, "UAudioSettings.MaximumConcurrentStreams"); }

	// Functions

};

