#pragma once

#include "BaseDeclarations.h"
#include "FLightmassLightSettings.h"

struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	char __padding[0x4L];
	float& LightSourceAngleField() { return *GetNativePointerField<float*>(this, "FLightmassDirectionalLightSettings.LightSourceAngle"); }

	// Functions

};

