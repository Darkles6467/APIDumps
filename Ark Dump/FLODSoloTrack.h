#pragma once

#include "BaseDeclarations.h"
struct FLODSoloTrack
{
	char __padding[0x10L];
	TArray<unsigned char>& SoloEnableSettingField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FLODSoloTrack.SoloEnableSetting"); }

	// Functions

};

