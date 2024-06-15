#pragma once

#include "BaseDeclarations.h"
struct FDefaultTextureParamOverride
{
	char __padding[0x10L];
	FName& TextureParamNameField() { return *GetNativePointerField<FName*>(this, "FDefaultTextureParamOverride.TextureParamName"); }

	// Functions

};

