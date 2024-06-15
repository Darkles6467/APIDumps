#pragma once

#include "BaseDeclarations.h"
struct PostProcessVolume_eventPostprocessVolumeEnteredSignature_Parms
{
	char __padding[0x10L];
	bool& bIsPrimaryPlayerField() { return *GetNativePointerField<bool*>(this, "PostProcessVolume_eventPostprocessVolumeEnteredSignature_Parms.bIsPrimaryPlayer"); }
};

