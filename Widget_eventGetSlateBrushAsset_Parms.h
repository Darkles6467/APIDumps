#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetSlateBrushAsset_Parms
{
	char __padding[0x8L];
	USlateBrushAsset * ReturnValueField() { return GetNativePointerField<USlateBrushAsset *>(this, "Widget_eventGetSlateBrushAsset_Parms.ReturnValue"); }
};

