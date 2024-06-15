#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SFxWidget : SCompoundWidget
{
	char __padding[0x78L];
	TAttribute<float>& RenderScaleField() { return *GetNativePointerField<TAttribute<float>*>(this, "SFxWidget.RenderScale"); }
	TAttribute<FVector2D>& RenderScaleOriginField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SFxWidget.RenderScaleOrigin"); }
	TAttribute<float>& LayoutScaleField() { return *GetNativePointerField<TAttribute<float>*>(this, "SFxWidget.LayoutScale"); }
	TAttribute<FVector2D>& VisualOffsetField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SFxWidget.VisualOffset"); }
	TAttribute<bool>& bIgnoreClippingField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SFxWidget.bIgnoreClipping"); }
};

