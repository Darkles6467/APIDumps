#pragma once

#include "BaseDeclarations.h"
struct FSubtitleCue
{
	char __padding[0x30L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "FSubtitleCue.Text"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FSubtitleCue.Time"); }

	// Functions

};

