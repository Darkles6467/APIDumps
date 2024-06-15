#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SThemeColorBlock : SCompoundWidget
{
	char __padding[0x70L];
	TWeakPtr<FLinearColor,0>& ColorPtrField() { return *GetNativePointerField<TWeakPtr<FLinearColor,0>*>(this, "SThemeColorBlock.ColorPtr"); }
	TWeakPtr<SThemeColorBlocksBar,0>& ParentPtrField() { return *GetNativePointerField<TWeakPtr<SThemeColorBlocksBar,0>*>(this, "SThemeColorBlock.ParentPtr"); }
	TAttribute<bool>& bUseSRGBField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SThemeColorBlock.bUseSRGB"); }
	TAttribute<bool>& bUseAlphaField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SThemeColorBlock.bUseAlpha"); }
	float& DistanceDraggedField() { return *GetNativePointerField<float*>(this, "SThemeColorBlock.DistanceDragged"); }
};

