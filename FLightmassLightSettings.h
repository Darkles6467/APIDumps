#pragma once

#include "BaseDeclarations.h"
struct FLightmassLightSettings
{
	char __padding[0xcL];
	float& IndirectLightingScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FLightmassLightSettings.IndirectLightingScale_DEPRECATED"); }
	float& IndirectLightingSaturationField() { return *GetNativePointerField<float*>(this, "FLightmassLightSettings.IndirectLightingSaturation"); }
	float& ShadowExponentField() { return *GetNativePointerField<float*>(this, "FLightmassLightSettings.ShadowExponent"); }

	// Functions

};

