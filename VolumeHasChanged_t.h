#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct VolumeHasChanged_t : SteamCallback_t
{
	char __padding[0x4L];
	float& m_flNewVolumeField() { return *GetNativePointerField<float*>(this, "VolumeHasChanged_t.m_flNewVolume"); }
};

