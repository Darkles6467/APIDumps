#pragma once

#include "BaseDeclarations.h"
struct MediaPlayer_eventOnMediaPlayerMediaOpened_Parms
{
	char __padding[0x10L];
	FString& OpenedUrlField() { return *GetNativePointerField<FString*>(this, "MediaPlayer_eventOnMediaPlayerMediaOpened_Parms.OpenedUrl"); }
};

