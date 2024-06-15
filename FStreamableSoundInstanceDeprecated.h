#pragma once

#include "BaseDeclarations.h"
struct FStreamableSoundInstanceDeprecated
{
	char __padding[0x10L];
	FSphere& BoundingSphereField() { return *GetNativePointerField<FSphere*>(this, "FStreamableSoundInstanceDeprecated.BoundingSphere"); }
};

