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

struct UServerInfoInfoEntryButton : UDataListEntryButton
{
	char __padding[0x48L];
	FString& InfoNameField() { return *GetNativePointerField<FString*>(this, "UServerInfoInfoEntryButton.InfoName"); }
	FString& InfoValueField() { return *GetNativePointerField<FString*>(this, "UServerInfoInfoEntryButton.InfoValue"); }
	bool& bCenterDisplayNameField() { return *GetNativePointerField<bool*>(this, "UServerInfoInfoEntryButton.bCenterDisplayName"); }
	FLinearColor& DisplayStringSelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UServerInfoInfoEntryButton.DisplayStringSelectedColor"); }
	float& TextClipOffsetField() { return *GetNativePointerField<float*>(this, "UServerInfoInfoEntryButton.TextClipOffset"); }
	float& FolderNameTextFontScaleField() { return *GetNativePointerField<float*>(this, "UServerInfoInfoEntryButton.FolderNameTextFontScale"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UServerInfoInfoEntryButton.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
};

