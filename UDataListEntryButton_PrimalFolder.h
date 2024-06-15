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
#include "FColor.h"

struct UDataListEntryButton_PrimalFolder : UDataListEntryButton
{
	char __padding[0xa0L];
	FVector2D& ItemNameSpacingField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalFolder.ItemNameSpacing"); }
	float& TextScaleMultiplierField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalFolder.TextScaleMultiplier"); }
	bool& bUseNewRenderingPathField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_PrimalFolder.bUseNewRenderingPath"); }
	FName& TextLabelNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryButton_PrimalFolder.TextLabelName"); }
	FPrimalFolderIcons& IconsNormalField() { return *GetNativePointerField<FPrimalFolderIcons*>(this, "UDataListEntryButton_PrimalFolder.IconsNormal"); }
	FPrimalFolderIcons& IconsSelectedField() { return *GetNativePointerField<FPrimalFolderIcons*>(this, "UDataListEntryButton_PrimalFolder.IconsSelected"); }
	FString& FolderNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_PrimalFolder.FolderName"); }
	float& FolderNameTextClipOffsetField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalFolder.FolderNameTextClipOffset"); }
	float& FolderNameTextFontScaleField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalFolder.FolderNameTextFontScale"); }
	TEnumAsByte<enum FolderWidgetType::Type>& FolderTypeField() { return *GetNativePointerField<TEnumAsByte<enum FolderWidgetType::Type>*>(this, "UDataListEntryButton_PrimalFolder.FolderType"); }
	FColor& FontColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalFolder.FontColor"); }
	char& FolderLevelField() { return *GetNativePointerField<char*>(this, "UDataListEntryButton_PrimalFolder.FolderLevel"); }
	UDataListPanel * ParentPanelField() { return GetNativePointerField<UDataListPanel *>(this, "UDataListEntryButton_PrimalFolder.ParentPanel"); }
	UTextBlock * TextLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_PrimalFolder.TextLabel"); }

	// Functions

	bool AllowDragging() { return NativeCall<bool>(this, "UDataListEntryButton_PrimalFolder.AllowDragging"); }
	bool CanBeDragged() { return NativeCall<bool>(this, "UDataListEntryButton_PrimalFolder.CanBeDragged"); }
	void DoubleClickedButton() { NativeCall<void>(this, "UDataListEntryButton_PrimalFolder.DoubleClickedButton"); }
	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UDataListEntryButton_PrimalFolder.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
	void DrawWidget_NewPath(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, bool>(this, "UDataListEntryButton_PrimalFolder.DrawWidget_NewPath", fcanvas, ucanvas, canvasSize, bParentEnabled); }
	void DrawWidget_OldPath(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, bool>(this, "UDataListEntryButton_PrimalFolder.DrawWidget_OldPath", fcanvas, ucanvas, canvasSize, bParentEnabled); }
	FLinearColor * GetTintColor(FLinearColor * result, const FLinearColor * color) { return NativeCall<FLinearColor *, FLinearColor *, const FLinearColor *>(this, "UDataListEntryButton_PrimalFolder.GetTintColor", result, color); }
	void InitializeMe(UDataListEntryWidget * forWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UDataListEntryButton_PrimalFolder.InitializeMe", forWidget); }
	void NativeTick(const FGeometry * MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry *, float>(this, "UDataListEntryButton_PrimalFolder.NativeTick", MyGeometry, InDeltaTime); }
	void SetFolderData(FString NewFolderName, char Level, UDataListPanel * Panel, UTexture2D * FIcon, TEnumAsByte<enum FolderWidgetType::Type> FType, FColor TextColor) { NativeCall<void, FString, char, UDataListPanel *, UTexture2D *, TEnumAsByte<enum FolderWidgetType::Type>, FColor>(this, "UDataListEntryButton_PrimalFolder.SetFolderData", NewFolderName, Level, Panel, FIcon, FType, TextColor); }
};

