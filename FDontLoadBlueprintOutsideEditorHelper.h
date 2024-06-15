#pragma once

#include "BaseDeclarations.h"
struct FDontLoadBlueprintOutsideEditorHelper
{
	char __padding[0x1L];
	bool& bDontLoadField() { return *GetNativePointerField<bool*>(this, "FDontLoadBlueprintOutsideEditorHelper.bDontLoad"); }
};

