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

struct UDataListEntryButton_PrimalItem : UDataListEntryButton
{
	char __padding[0x568L];
	FVector2D& DesiredSizeField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.DesiredSize"); }
	FColor& MiscInfoStringColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.MiscInfoStringColor"); }
	FColor& ItemNameColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.ItemNameColor"); }
	FColor& ItemCategoryColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.ItemCategoryColor"); }
	FButtonStyle& WidgetStyleWhenBrokenField() { return *GetNativePointerField<FButtonStyle*>(this, "UDataListEntryButton_PrimalItem.WidgetStyleWhenBroken"); }
	FDataListEntryButtonBorderColors& NormalBorderColorsField() { return *GetNativePointerField<FDataListEntryButtonBorderColors*>(this, "UDataListEntryButton_PrimalItem.NormalBorderColors"); }
	FDataListEntryButtonBorderColors& BrokenBorderColorsField() { return *GetNativePointerField<FDataListEntryButtonBorderColors*>(this, "UDataListEntryButton_PrimalItem.BrokenBorderColors"); }
	float& DurabilityBarBorderThicknessField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.DurabilityBarBorderThickness"); }
	float& DurabilityBarThicknessField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.DurabilityBarThickness"); }
	FColor& DurabilityBarFgColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.DurabilityBarFgColor"); }
	FColor& DurabilityBarBgColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.DurabilityBarBgColor"); }
	FColor& SpoilingBarFgColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.SpoilingBarFgColor"); }
	FColor& SpoilingBarBgColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.SpoilingBarBgColor"); }
	FColor& UnselectedTintColorField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.UnselectedTintColor"); }
	FColor& TintEngramRequirementsMetField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.TintEngramRequirementsMet"); }
	FColor& TintEngramRequirementsUnmetField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.TintEngramRequirementsUnmet"); }
	FColor& TintBlueprintRequirementsMetField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.TintBlueprintRequirementsMet"); }
	FColor& TintBlueprintRequirementsUnmetField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.TintBlueprintRequirementsUnmet"); }
	FColor& TintTekBlueprintRequirementsMetField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.TintTekBlueprintRequirementsMet"); }
	FColor& TintTekBlueprintRequirementsUnmetField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.TintTekBlueprintRequirementsUnmet"); }
	FColor& TintCompatibleWithDraggedItemField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.TintCompatibleWithDraggedItem"); }
	FColor& CraftRepairIconTintField() { return *GetNativePointerField<FColor*>(this, "UDataListEntryButton_PrimalItem.CraftRepairIconTint"); }
	FMargin& BorderSizePxField() { return *GetNativePointerField<FMargin*>(this, "UDataListEntryButton_PrimalItem.BorderSizePx"); }
	FVector2D& QuantityTxtPositionField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.QuantityTxtPosition"); }
	FVector2D& AmmoTxtPositionField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.AmmoTxtPosition"); }
	FVector2D& WeightTxtPositionField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.WeightTxtPosition"); }
	FVector2D& NameTxtPositionPercentField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.NameTxtPositionPercent"); }
	FVector2D& NameTxtBoxSizePercentField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.NameTxtBoxSizePercent"); }
	FVector2D& CategoryTxtPositionField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.CategoryTxtPosition"); }
	FVector2D& ItemNameSpacingField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.ItemNameSpacing"); }
	int& UseItemCraftQueueIndexField() { return *GetNativePointerField<int*>(this, "UDataListEntryButton_PrimalItem.UseItemCraftQueueIndex"); }
	float& TextScaleMultiplierField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.TextScaleMultiplier"); }
	float& TextArmorDamageSizeField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.TextArmorDamageSize"); }
	float& TextQuantitySizeField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.TextQuantitySize"); }
	float& TextAmmoSizeField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.TextAmmoSize"); }
	float& TextWeightSizeField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.TextWeightSize"); }
	float& TextNameSizeField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.TextNameSize"); }
	float& TextCategorySizeField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.TextCategorySize"); }
	bool& EnableTextShadowField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_PrimalItem.EnableTextShadow"); }
	bool& EnableTextGlowField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_PrimalItem.EnableTextGlow"); }
	FLinearColor& TextGlowColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryButton_PrimalItem.TextGlowColor"); }
	FVector2D& TextGlowInnerRadiusField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.TextGlowInnerRadius"); }
	FVector2D& TextGlowOuterRadiusField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryButton_PrimalItem.TextGlowOuterRadius"); }
	UFont * DetailTextFontField() { return GetNativePointerField<UFont *>(this, "UDataListEntryButton_PrimalItem.DetailTextFont"); }
	float& ItemIconScaleField() { return *GetNativePointerField<float*>(this, "UDataListEntryButton_PrimalItem.ItemIconScale"); }
	TWeakObjectPtr<AShooterPlayerController>& TheControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "UDataListEntryButton_PrimalItem.TheController"); }
	bool& bIsCraftQueueItemField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_PrimalItem.bIsCraftQueueItem"); }
	bool& bIsCraftQueueRepairField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_PrimalItem.bIsCraftQueueRepair"); }
	int& CraftQueueQuantityField() { return *GetNativePointerField<int*>(this, "UDataListEntryButton_PrimalItem.CraftQueueQuantity"); }
	bool& bIsDefaultItemSlotItemField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_PrimalItem.bIsDefaultItemSlotItem"); }
	bool& bIsSlotActiveField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_PrimalItem.bIsSlotActive"); }
	FFontRenderInfo& fontRenderInfoField() { return *GetNativePointerField<FFontRenderInfo*>(this, "UDataListEntryButton_PrimalItem.fontRenderInfo"); }
	SCustomCanvasWidget * SlateWidgetWhileDrawingField() { return GetNativePointerField<SCustomCanvasWidget *>(this, "UDataListEntryButton_PrimalItem.SlateWidgetWhileDrawing"); }

	// Functions

	bool AllowDragging() { return NativeCall<bool>(this, "UDataListEntryButton_PrimalItem.AllowDragging"); }
	bool AllowTooltip() { return NativeCall<bool>(this, "UDataListEntryButton_PrimalItem.AllowTooltip"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDataListEntryButton_PrimalItem.ClickedButton", clickedWidget); }
	void DrawItemPart_AccessoryActive(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_AccessoryActive", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_AmmoFuelMisc(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_AmmoFuelMisc", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_ArmorDamage(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_ArmorDamage", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_AttachmentAndAmmoType(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_AttachmentAndAmmoType", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_Background(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_Background", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_BottomProgressBar(float percent, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, const FLinearColor * fgColor, const FLinearColor * bgColor, const FLinearColor * borderColor, bool bEnabled, float yOffset) { NativeCall<void, float, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, const FLinearColor *, const FLinearColor *, const FLinearColor *, bool, float>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_BottomProgressBar", percent, fcanvas, ucanvas, canvasSize, scale, fgColor, bgColor, borderColor, bEnabled, yOffset); }
	void DrawItemPart_CompatibleWithDraggedItem(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_CompatibleWithDraggedItem", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_CraftingBar(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_CraftingBar", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_DetailedInfo_Name(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled, AShooterPlayerController * ForController) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool, AShooterPlayerController *>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_DetailedInfo_Name", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled, ForController); }
	void DrawItemPart_DisplayString(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_DisplayString", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_DurabilityBar(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_DurabilityBar", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_EggIncubationBar(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_EggIncubationBar", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_Icon(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled, AShooterPlayerController * ForController) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool, AShooterPlayerController *>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_Icon", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled, ForController); }
	void DrawItemPart_ItemQty(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_ItemQty", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_OverlayBeforeText(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_OverlayBeforeText", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_RepairingBar(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_RepairingBar", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_SpoilingBar(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_SpoilingBar", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_UploadTime(AShooterPlayerController * aCont, UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, AShooterPlayerController *, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_UploadTime", aCont, PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawItemPart_Weight(UPrimalItem * PrimalItem, FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, const FVector2D scale, bool bEnabled) { NativeCall<void, UPrimalItem *, FCanvas *, UCanvas *, const FIntPoint *, const FVector2D, bool>(this, "UDataListEntryButton_PrimalItem.DrawItemPart_Weight", PrimalItem, fcanvas, ucanvas, canvasSize, scale, bEnabled); }
	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRec, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UDataListEntryButton_PrimalItem.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRec, bParentEnabled); }
	UDataListEntryWidget * GetEntryWidgetBeingDragged() { return NativeCall<UDataListEntryWidget *>(this, "UDataListEntryButton_PrimalItem.GetEntryWidgetBeingDragged"); }
	AShooterPlayerController * GetPC() { return NativeCall<AShooterPlayerController *>(this, "UDataListEntryButton_PrimalItem.GetPC"); }
	FLinearColor * GetTintColor(FLinearColor * result, const FLinearColor * color) { return NativeCall<FLinearColor *, FLinearColor *, const FLinearColor *>(this, "UDataListEntryButton_PrimalItem.GetTintColor", result, color); }
	void HandleOnContextMenuIsOpenChanged(bool bIsOpen) { NativeCall<void, bool>(this, "UDataListEntryButton_PrimalItem.HandleOnContextMenuIsOpenChanged", bIsOpen); }
	void InitializeMe(UDataListEntryWidget * forWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UDataListEntryButton_PrimalItem.InitializeMe", forWidget); }
	bool IsCraftingBarVisible(UPrimalItem * PrimalItem) { return NativeCall<bool, UPrimalItem *>(this, "UDataListEntryButton_PrimalItem.IsCraftingBarVisible", PrimalItem); }
	bool IsDurabilityBarVisible(UPrimalItem * PrimalItem) { return NativeCall<bool, UPrimalItem *>(this, "UDataListEntryButton_PrimalItem.IsDurabilityBarVisible", PrimalItem); }
	bool IsEggIncubationBarVisible(UPrimalItem * PrimalItem) { return NativeCall<bool, UPrimalItem *>(this, "UDataListEntryButton_PrimalItem.IsEggIncubationBarVisible", PrimalItem); }
	bool IsRepairingBarVisible(UPrimalItem * PrimalItem) { return NativeCall<bool, UPrimalItem *>(this, "UDataListEntryButton_PrimalItem.IsRepairingBarVisible", PrimalItem); }
	bool IsSpoilingBarVisible(UPrimalItem * PrimalItem) { return NativeCall<bool, UPrimalItem *>(this, "UDataListEntryButton_PrimalItem.IsSpoilingBarVisible", PrimalItem); }
	void NativeTick(const FGeometry * MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry *, float>(this, "UDataListEntryButton_PrimalItem.NativeTick", MyGeometry, InDeltaTime); }
	void SynchronizeProperties() { NativeCall<void>(this, "UDataListEntryButton_PrimalItem.SynchronizeProperties"); }
};

