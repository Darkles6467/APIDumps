#pragma once

#include "BaseDeclarations.h"
struct FActiveSubtitle
{
	char __padding[0x20L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FActiveSubtitle.Index"); }
	float& PriorityField() { return *GetNativePointerField<float*>(this, "FActiveSubtitle.Priority"); }
	bool& bSplitField() { return *GetNativePointerField<bool*>(this, "FActiveSubtitle.bSplit"); }
	bool& bSingleLineField() { return *GetNativePointerField<bool*>(this, "FActiveSubtitle.bSingleLine"); }
	TArray<FSubtitleCue>& SubtitlesField() { return *GetNativePointerField<TArray<FSubtitleCue>*>(this, "FActiveSubtitle.Subtitles"); }
};

