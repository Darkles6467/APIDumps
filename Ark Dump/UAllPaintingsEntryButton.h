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

struct UAllPaintingsEntryButton : UDataListEntryButton
{
	char __padding[0x30L];
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "UAllPaintingsEntryButton.FileName"); }
	FString& FilePathField() { return *GetNativePointerField<FString*>(this, "UAllPaintingsEntryButton.FilePath"); }
	FLinearColor& DisplayStringSelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UAllPaintingsEntryButton.DisplayStringSelectedColor"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UAllPaintingsEntryButton.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
};

