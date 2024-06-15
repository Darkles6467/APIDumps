#pragma once

#include "BaseDeclarations.h"
struct HibernationUpdate
{
	char __padding[0x18L];
	ANPCZoneVolume * ZoneRefField() { return GetNativePointerField<ANPCZoneVolume *>(this, "HibernationUpdate.ZoneRef"); }
	float& InitialWeightField() { return *GetNativePointerField<float*>(this, "HibernationUpdate.InitialWeight"); }
};

