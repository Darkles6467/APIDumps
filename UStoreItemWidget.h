#pragma once

#include "BaseDeclarations.h"
#include "UCustomCanvasWidget.h"
#include "UButton.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UStoreItemWidget : UCustomCanvasWidget
{
	char __padding[0xc0L];
	float& ItemPriceField() { return *GetNativePointerField<float*>(this, "UStoreItemWidget.ItemPrice"); }
	FString& ItemNameField() { return *GetNativePointerField<FString*>(this, "UStoreItemWidget.ItemName"); }
	FSlateColor& ForegroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "UStoreItemWidget.ForegroundColor"); }
	float& PriceOffsetField() { return *GetNativePointerField<float*>(this, "UStoreItemWidget.PriceOffset"); }
	float& NameOffsetField() { return *GetNativePointerField<float*>(this, "UStoreItemWidget.NameOffset"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UStoreItemWidget.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
};

