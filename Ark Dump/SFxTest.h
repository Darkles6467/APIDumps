#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SFxTest : SCompoundWidget
{
	char __padding[0x20L];
	ESlateCheckBoxState::Type& FxWidgetIgnoreClippingStateField() { return *GetNativePointerField<ESlateCheckBoxState::Type*>(this, "SFxTest.FxWidgetIgnoreClippingState"); }
	float& RenderScaleField() { return *GetNativePointerField<float*>(this, "SFxTest.RenderScale"); }
	FVector2D& RenderScaleOriginField() { return *GetNativePointerField<FVector2D*>(this, "SFxTest.RenderScaleOrigin"); }
	float& LayoutScaleField() { return *GetNativePointerField<float*>(this, "SFxTest.LayoutScale"); }
	FVector2D& VisualOffsetField() { return *GetNativePointerField<FVector2D*>(this, "SFxTest.VisualOffset"); }
};

