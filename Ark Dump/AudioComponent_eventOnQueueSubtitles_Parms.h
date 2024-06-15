#pragma once

#include "BaseDeclarations.h"
struct AudioComponent_eventOnQueueSubtitles_Parms
{
	char __padding[0x18L];
	TArray<FSubtitleCue>& SubtitlesField() { return *GetNativePointerField<TArray<FSubtitleCue>*>(this, "AudioComponent_eventOnQueueSubtitles_Parms.Subtitles"); }
	float& CueDurationField() { return *GetNativePointerField<float*>(this, "AudioComponent_eventOnQueueSubtitles_Parms.CueDuration"); }
};

