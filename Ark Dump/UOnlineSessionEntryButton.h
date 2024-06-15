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

struct UOnlineSessionEntryButton : UDataListEntryButton
{
	char __padding[0x178L];
	FString& GameNameField() { return *GetNativePointerField<FString*>(this, "UOnlineSessionEntryButton.GameName"); }
	FString& BuildIdField() { return *GetNativePointerField<FString*>(this, "UOnlineSessionEntryButton.BuildId"); }
	FString& OwnerNameField() { return *GetNativePointerField<FString*>(this, "UOnlineSessionEntryButton.OwnerName"); }
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "UOnlineSessionEntryButton.MapName"); }
	FString& DayTimeStrField() { return *GetNativePointerField<FString*>(this, "UOnlineSessionEntryButton.DayTimeStr"); }
	unsigned int& NumPlayersField() { return *GetNativePointerField<unsigned int*>(this, "UOnlineSessionEntryButton.NumPlayers"); }
	unsigned int& MaxNumPlayersField() { return *GetNativePointerField<unsigned int*>(this, "UOnlineSessionEntryButton.MaxNumPlayers"); }
	unsigned __int64& ModIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UOnlineSessionEntryButton.ModId"); }
	unsigned __int64& TotalConversionIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UOnlineSessionEntryButton.TotalConversionId"); }
	unsigned __int64& PingField() { return *GetNativePointerField<unsigned __int64*>(this, "UOnlineSessionEntryButton.Ping"); }
	bool& bHasPasswordField() { return *GetNativePointerField<bool*>(this, "UOnlineSessionEntryButton.bHasPassword"); }
	bool& bIsFavouriteField() { return *GetNativePointerField<bool*>(this, "UOnlineSessionEntryButton.bIsFavourite"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "UOnlineSessionEntryButton.bIsOfficialServer"); }
	bool& bUsingBattleEyeField() { return *GetNativePointerField<bool*>(this, "UOnlineSessionEntryButton.bUsingBattleEye"); }
	bool& bAllowDownloadCharactersField() { return *GetNativePointerField<bool*>(this, "UOnlineSessionEntryButton.bAllowDownloadCharacters"); }
	bool& bAllowDownloadItemsField() { return *GetNativePointerField<bool*>(this, "UOnlineSessionEntryButton.bAllowDownloadItems"); }
	FLinearColor& DisplayStringSelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UOnlineSessionEntryButton.DisplayStringSelectedColor"); }
	FShooterSessionData& CachedSessionResultField() { return *GetNativePointerField<FShooterSessionData*>(this, "UOnlineSessionEntryButton.CachedSessionResult"); }
	FGuid& IdentifierField() { return *GetNativePointerField<FGuid*>(this, "UOnlineSessionEntryButton.Identifier"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UOnlineSessionEntryButton.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
};

