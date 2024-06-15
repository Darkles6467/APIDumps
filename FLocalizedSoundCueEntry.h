#pragma once

#include "BaseDeclarations.h"
struct FLocalizedSoundCueEntry
{
	char __padding[0x20L];
	FString& TwoLetterISOLanguageNameField() { return *GetNativePointerField<FString*>(this, "FLocalizedSoundCueEntry.TwoLetterISOLanguageName"); }
	FStringAssetReference& LocalizedSoundCueField() { return *GetNativePointerField<FStringAssetReference*>(this, "FLocalizedSoundCueEntry.LocalizedSoundCue"); }

	// Functions

	FLocalizedSoundCueEntry * operator=(const FLocalizedSoundCueEntry * __that) { return NativeCall<FLocalizedSoundCueEntry *, const FLocalizedSoundCueEntry *>(this, "FLocalizedSoundCueEntry.operator=", __that); }
};

