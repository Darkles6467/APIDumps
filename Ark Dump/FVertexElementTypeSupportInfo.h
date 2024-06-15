#pragma once

#include "BaseDeclarations.h"
struct FVertexElementTypeSupportInfo
{
	char __padding[0x14L];
	FieldArray<bool, 20> ElementCapsField() { return {this, "FVertexElementTypeSupportInfo.ElementCaps"}; }
};

