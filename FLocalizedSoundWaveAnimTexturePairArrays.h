#pragma once

#include "BaseDeclarations.h"
struct FLocalizedSoundWaveAnimTexturePairArrays
{
	char __padding[0x20L];
	FString& TwoLetterISOLanguageNameField() { return *GetNativePointerField<FString*>(this, "FLocalizedSoundWaveAnimTexturePairArrays.TwoLetterISOLanguageName"); }
	TArray<FSoundWaveAnimTexturePairs>& SoundWaveAnimTexturePairsField() { return *GetNativePointerField<TArray<FSoundWaveAnimTexturePairs>*>(this, "FLocalizedSoundWaveAnimTexturePairArrays.SoundWaveAnimTexturePairs"); }

	// Functions

	FLocalizedSoundWaveAnimTexturePairArrays * operator=(const FLocalizedSoundWaveAnimTexturePairArrays * __that) { return NativeCall<FLocalizedSoundWaveAnimTexturePairArrays *, const FLocalizedSoundWaveAnimTexturePairArrays *>(this, "FLocalizedSoundWaveAnimTexturePairArrays.operator=", __that); }
};

