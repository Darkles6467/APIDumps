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

struct UAllPlayersEntryButton : UDataListEntryButton
{
	char __padding[0x48L];
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "UAllPlayersEntryButton.PlayerName"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "UAllPlayersEntryButton.TribeName"); }
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "UAllPlayersEntryButton.PlayerID"); }
	unsigned __int64& TargetingTeamIDField() { return *GetNativePointerField<unsigned __int64*>(this, "UAllPlayersEntryButton.TargetingTeamID"); }
	AShooterCharacter * CurrentCharachterField() { return GetNativePointerField<AShooterCharacter *>(this, "UAllPlayersEntryButton.CurrentCharachter"); }
	FLinearColor& DisplayStringSelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UAllPlayersEntryButton.DisplayStringSelectedColor"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UAllPlayersEntryButton.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
};

