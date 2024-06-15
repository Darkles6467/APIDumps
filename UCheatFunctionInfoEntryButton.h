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

struct UCheatFunctionInfoEntryButton : UDataListEntryButton
{
	char __padding[0x38L];
	FString& functionNameField() { return *GetNativePointerField<FString*>(this, "UCheatFunctionInfoEntryButton.functionName"); }
	bool& bCenterDisplayNameField() { return *GetNativePointerField<bool*>(this, "UCheatFunctionInfoEntryButton.bCenterDisplayName"); }
	FLinearColor& DisplayStringSelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UCheatFunctionInfoEntryButton.DisplayStringSelectedColor"); }
	float& FolderNameTextClipOffsetField() { return *GetNativePointerField<float*>(this, "UCheatFunctionInfoEntryButton.FolderNameTextClipOffset"); }
	float& FolderNameTextFontScaleField() { return *GetNativePointerField<float*>(this, "UCheatFunctionInfoEntryButton.FolderNameTextFontScale"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UCheatFunctionInfoEntryButton.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
};

