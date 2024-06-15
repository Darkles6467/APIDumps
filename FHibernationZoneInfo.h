#pragma once

#include "BaseDeclarations.h"
struct FHibernationZoneInfo
{
	char __padding[0x10L];
	ANPCZoneVolume * VolumeField() { return GetNativePointerField<ANPCZoneVolume *>(this, "FHibernationZoneInfo.Volume"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FHibernationZoneInfo.Weight"); }

	// Functions

};

