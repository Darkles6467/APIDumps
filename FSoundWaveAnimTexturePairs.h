#pragma once

#include "BaseDeclarations.h"
struct FSoundWaveAnimTexturePairs
{
	char __padding[0x20L];
	FStringAssetReference& LocalizedSoundWaveField() { return *GetNativePointerField<FStringAssetReference*>(this, "FSoundWaveAnimTexturePairs.LocalizedSoundWave"); }
	FStringAssetReference& MatchingAnimTextureField() { return *GetNativePointerField<FStringAssetReference*>(this, "FSoundWaveAnimTexturePairs.MatchingAnimTexture"); }

	// Functions

};

