#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"

struct UShapeComponent : UPrimitiveComponent
{
	char __padding[0x20L];

	// Functions

	bool ShouldCollideWhenPlacing() { return NativeCall<bool>(this, "UShapeComponent.ShouldCollideWhenPlacing"); }
};

