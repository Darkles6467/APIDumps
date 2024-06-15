#pragma once

#include "BaseDeclarations.h"
#include "FMaterialRenderProxy.h"
#include "FRenderResource.h"

struct FOverrideSelectionColorMaterialRenderProxy : FMaterialRenderProxy
{
	char __padding[0x18L];
	const FLinearColor& SelectionColorField() { return *GetNativePointerField<const FLinearColor*>(this, "FOverrideSelectionColorMaterialRenderProxy.SelectionColor"); }
};

