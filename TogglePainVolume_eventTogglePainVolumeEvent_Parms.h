#pragma once

#include "BaseDeclarations.h"
struct TogglePainVolume_eventTogglePainVolumeEvent_Parms
{
	char __padding[0x10L];
	ATogglePainVolume * ForPainVolumeField() { return GetNativePointerField<ATogglePainVolume *>(this, "TogglePainVolume_eventTogglePainVolumeEvent_Parms.ForPainVolume"); }
};

