#pragma once

#include "BaseDeclarations.h"
struct FGlobalBoundShaderState
{
	char __padding[0x20L];
	FieldArray<FGlobalBoundShaderStateWorkArea *, 4> WorkAreasField() { return {this, "FGlobalBoundShaderState.WorkAreas"}; }
};

