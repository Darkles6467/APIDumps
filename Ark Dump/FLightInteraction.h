#pragma once

#include "BaseDeclarations.h"
struct FLightInteraction
{
	char __padding[0x4L];
	ELightInteractionType& TypeField() { return *GetNativePointerField<ELightInteractionType*>(this, "FLightInteraction.Type"); }
};

