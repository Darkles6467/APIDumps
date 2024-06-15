#pragma once

#include "BaseDeclarations.h"
struct FMaterialRenderContext
{
	char __padding[0x18L];
	bool& bShowSelectionField() { return *GetNativePointerField<bool*>(this, "FMaterialRenderContext.bShowSelection"); }

	// Functions

};

