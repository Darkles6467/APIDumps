#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SThemeColorBlocksBar : SPanel
{
	char __padding[0xc8L];
	TSlotlessChildren<SThemeColorBlock>& ColorBlocksField() { return *GetNativePointerField<TSlotlessChildren<SThemeColorBlock>*>(this, "SThemeColorBlocksBar.ColorBlocks"); }
	TSharedPtr<SThemeColorBlock,0>& NewColorBlockPlaceholderField() { return *GetNativePointerField<TSharedPtr<SThemeColorBlock,0>*>(this, "SThemeColorBlocksBar.NewColorBlockPlaceholder"); }
	TSharedPtr<FLinearColor,0>& NewColorPlaceholderField() { return *GetNativePointerField<TSharedPtr<FLinearColor,0>*>(this, "SThemeColorBlocksBar.NewColorPlaceholder"); }
	float& PlaceholderBlockOffsetField() { return *GetNativePointerField<float*>(this, "SThemeColorBlocksBar.PlaceholderBlockOffset"); }
	FVector2D& PlaceholderInitialGrabOffsetField() { return *GetNativePointerField<FVector2D*>(this, "SThemeColorBlocksBar.PlaceholderInitialGrabOffset"); }
	TAttribute<TSharedPtr<FColorTheme,0> >& ColorThemeField() { return *GetNativePointerField<TAttribute<TSharedPtr<FColorTheme,0> >*>(this, "SThemeColorBlocksBar.ColorTheme"); }
	TAttribute<bool>& bUseSRGBField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SThemeColorBlocksBar.bUseSRGB"); }
	TAttribute<bool>& bUseAlphaField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SThemeColorBlocksBar.bUseAlpha"); }
};

