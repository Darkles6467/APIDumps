#pragma once

#include "BaseDeclarations.h"
struct FLocalizedSubtitle
{
	char __padding[0x28L];
	FString& LanguageExtField() { return *GetNativePointerField<FString*>(this, "FLocalizedSubtitle.LanguageExt"); }
	TArray<FSubtitleCue>& SubtitlesField() { return *GetNativePointerField<TArray<FSubtitleCue>*>(this, "FLocalizedSubtitle.Subtitles"); }

	// Functions

};

