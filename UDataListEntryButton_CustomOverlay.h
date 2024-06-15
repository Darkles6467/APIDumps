#pragma once

#include "BaseDeclarations.h"
#include "UDataListEntryButton.h"
#include "UCustomCanvasWidget.h"
#include "UButton.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDataListEntryButton_CustomOverlay : UDataListEntryButton
{
	char __padding[0x90L];
	FVector2D& CustomOverlayScaleField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_CustomOverlay.CustomOverlayScale"); }

	// Functions

	int OnPaint(const FPaintArgs * Args, FPaintContext * Context, const FSlateRect * MyClippingRectRenderTransform) { return NativeCall<int, const FPaintArgs *, FPaintContext *, const FSlateRect *>(this, "UDataListEntryButton_CustomOverlay.OnPaint", Args, Context, MyClippingRectRenderTransform); }
};

