#pragma once

#include "BaseDeclarations.h"
struct FMipFadeSettings
{
	char __padding[0x8L];
	float& FadeInSpeedField() { return *GetNativePointerField<float*>(this, "FMipFadeSettings.FadeInSpeed"); }
	float& FadeOutSpeedField() { return *GetNativePointerField<float*>(this, "FMipFadeSettings.FadeOutSpeed"); }
};

