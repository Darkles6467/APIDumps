#pragma once

#include "BaseDeclarations.h"
#include "UTexture2D.h"
#include "UTexture.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTextureLightProfile : UTexture2D
{
	char __padding[0x8L];
	float& BrightnessField() { return *GetNativePointerField<float*>(this, "UTextureLightProfile.Brightness"); }
	float& TextureMultiplierField() { return *GetNativePointerField<float*>(this, "UTextureLightProfile.TextureMultiplier"); }

	// Functions

};

