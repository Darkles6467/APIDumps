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

struct UAdminPlayerInfoEntryButton : UDataListEntryButton
{
	char __padding[0x50L];
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "UAdminPlayerInfoEntryButton.PlayerName"); }
	FString& SteamPlayerNameField() { return *GetNativePointerField<FString*>(this, "UAdminPlayerInfoEntryButton.SteamPlayerName"); }
	FString& LinkedPlayerIDField() { return *GetNativePointerField<FString*>(this, "UAdminPlayerInfoEntryButton.LinkedPlayerID"); }
	bool& bCenterDisplayNameField() { return *GetNativePointerField<bool*>(this, "UAdminPlayerInfoEntryButton.bCenterDisplayName"); }
	FLinearColor& DisplayStringSelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UAdminPlayerInfoEntryButton.DisplayStringSelectedColor"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UAdminPlayerInfoEntryButton.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
};

