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

struct UHostSessionEntryButton : UDataListEntryButton
{
	char __padding[0x58L];
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "UHostSessionEntryButton.DisplayName"); }
	bool& bCenterDisplayNameField() { return *GetNativePointerField<bool*>(this, "UHostSessionEntryButton.bCenterDisplayName"); }
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "UHostSessionEntryButton.MapName"); }
	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UHostSessionEntryButton.ModName"); }
	FString& ModPathField() { return *GetNativePointerField<FString*>(this, "UHostSessionEntryButton.ModPath"); }
	unsigned __int64& ModItemIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UHostSessionEntryButton.ModItemId"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UHostSessionEntryButton.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
};

