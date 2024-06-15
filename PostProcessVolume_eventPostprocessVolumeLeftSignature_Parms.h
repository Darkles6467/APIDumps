#pragma once

#include "BaseDeclarations.h"
struct PostProcessVolume_eventPostprocessVolumeLeftSignature_Parms
{
	char __padding[0x10L];
	bool& bIsPrimaryPlayerField() { return *GetNativePointerField<bool*>(this, "PostProcessVolume_eventPostprocessVolumeLeftSignature_Parms.bIsPrimaryPlayer"); }
};

