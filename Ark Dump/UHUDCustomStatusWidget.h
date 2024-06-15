#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMargin.h"
#include "FHUDElement.h"

struct UHUDCustomStatusWidget : UPrimalUI
{
	char __padding[0xc8L];
	FName& CanvasPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.CanvasPanelName"); }
	FName& TitleWidgetTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.TitleWidgetTextBlockName"); }
	FName& TextWidgetTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.TextWidgetTextBlockName"); }
	FName& CustomTextContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.CustomTextContainerName"); }
	FName& ProgressWidgetProgressNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.ProgressWidgetProgressName"); }
	FName& ImageBackgroundWidgetNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.ImageBackgroundWidgetName"); }
	FName& IconWidgetNameField() { return *GetNativePointerField<FName*>(this, "UHUDCustomStatusWidget.IconWidgetName"); }
	UCanvasPanel * CustomStatusCanvasField() { return GetNativePointerField<UCanvasPanel *>(this, "UHUDCustomStatusWidget.CustomStatusCanvas"); }
	long double& LastGarbageCollectionTimeField() { return *GetNativePointerField<long double*>(this, "UHUDCustomStatusWidget.LastGarbageCollectionTime"); }

	// Functions

	void FWidgetOwnerData(const UHUDCustomStatusWidget::FWidgetOwnerData * __that) { NativeCall<void, const UHUDCustomStatusWidget::FWidgetOwnerData *>(this, "UHUDCustomStatusWidget.FWidgetOwnerData", __that); }
	void FWidgetOwnerData() { NativeCall<void>(this, "UHUDCustomStatusWidget.FWidgetOwnerData"); }
	void FWidgetOwnerData() { NativeCall<void>(this, "UHUDCustomStatusWidget.FWidgetOwnerData"); }
	void AddToViewport() { NativeCall<void>(this, "UHUDCustomStatusWidget.AddToViewport"); }
	void ApplyHUDElementSettings(UUserWidget * Widget, const FHUDElement * ElementInfo) { NativeCall<void, UUserWidget *, const FHUDElement *>(this, "UHUDCustomStatusWidget.ApplyHUDElementSettings", Widget, ElementInfo); }
	void DestroyAllWidgetsForOwner(unsigned int OwnerID) { NativeCall<void, unsigned int>(this, "UHUDCustomStatusWidget.DestroyAllWidgetsForOwner", OwnerID); }
	void DestroyHUDElementWidget(UUserWidget * Widget) { NativeCall<void, UUserWidget *>(this, "UHUDCustomStatusWidget.DestroyHUDElementWidget", Widget); }
	static UHUDCustomStatusWidget * GetHUDElementRootWidget(APlayerController * PlayerController) { return NativeCall<UHUDCustomStatusWidget *, APlayerController *>(nullptr, "UHUDCustomStatusWidget.GetHUDElementRootWidget", PlayerController); }
	bool IsHUDElementVisible(AActor * WidgetOwner, const FHUDElement * ElementInfo) { return NativeCall<bool, AActor *, const FHUDElement *>(this, "UHUDCustomStatusWidget.IsHUDElementVisible", WidgetOwner, ElementInfo); }
	static void SetHUDElementAnchor(FHUDElement * ElementInfo, const FAnchors * NewAnchor) { NativeCall<void, FHUDElement *, const FAnchors *>(nullptr, "UHUDCustomStatusWidget.SetHUDElementAnchor", ElementInfo, NewAnchor); }
	static void SetHUDElementBackgroundImageColor(FHUDElement * ElementInfo, FLinearColor NewColor) { NativeCall<void, FHUDElement *, FLinearColor>(nullptr, "UHUDCustomStatusWidget.SetHUDElementBackgroundImageColor", ElementInfo, NewColor); }
	static void SetHUDElementIconColor(FHUDElement * ElementInfo, FLinearColor NewColor) { NativeCall<void, FHUDElement *, FLinearColor>(nullptr, "UHUDCustomStatusWidget.SetHUDElementIconColor", ElementInfo, NewColor); }
	static void SetHUDElementIconPadding(FHUDElement * ElementInfo, FMargin NewPadding) { NativeCall<void, FHUDElement *, FMargin>(nullptr, "UHUDCustomStatusWidget.SetHUDElementIconPadding", ElementInfo, NewPadding); }
	static void SetHUDElementIconScale(FHUDElement * ElementInfo, const FVector2D * NewScale) { NativeCall<void, FHUDElement *, const FVector2D *>(nullptr, "UHUDCustomStatusWidget.SetHUDElementIconScale", ElementInfo, NewScale); }
	static void SetHUDElementImage(FHUDElement * ElementInfo, UTexture2D * NewIcon, bool bSetIcon, bool bSetProgressBarFillImage, bool bSetBackgroundImage) { NativeCall<void, FHUDElement *, UTexture2D *, bool, bool, bool>(nullptr, "UHUDCustomStatusWidget.SetHUDElementImage", ElementInfo, NewIcon, bSetIcon, bSetProgressBarFillImage, bSetBackgroundImage); }
	static void SetHUDElementLabel(FHUDElement * ElementInfo, FString NewLabel) { NativeCall<void, FHUDElement *, FString>(nullptr, "UHUDCustomStatusWidget.SetHUDElementLabel", ElementInfo, NewLabel); }
	static void SetHUDElementLabelNumeric(FHUDElement * ElementInfo, float LabelValue, TEnumAsByte<enum ERoundingMode> RoundingMode, bool bUseGrouping, int MinIntDigits, int MaxIntDigits, int MinFractionalDigits, int MaxFractionalDigits, bool bAddPercentSymbol) { NativeCall<void, FHUDElement *, float, TEnumAsByte<enum ERoundingMode>, bool, int, int, int, int, bool>(nullptr, "UHUDCustomStatusWidget.SetHUDElementLabelNumeric", ElementInfo, LabelValue, RoundingMode, bUseGrouping, MinIntDigits, MaxIntDigits, MinFractionalDigits, MaxFractionalDigits, bAddPercentSymbol); }
	static void SetHUDElementLocation(FHUDElement * ElementInfo, const FVector2D * NewLocation) { NativeCall<void, FHUDElement *, const FVector2D *>(nullptr, "UHUDCustomStatusWidget.SetHUDElementLocation", ElementInfo, NewLocation); }
	static void SetHUDElementProgress(FHUDElement * ElementInfo, float NewProgress) { NativeCall<void, FHUDElement *, float>(nullptr, "UHUDCustomStatusWidget.SetHUDElementProgress", ElementInfo, NewProgress); }
	static void SetHUDElementProgressBarPadding(FHUDElement * ElementInfo, FMargin NewPadding) { NativeCall<void, FHUDElement *, FMargin>(nullptr, "UHUDCustomStatusWidget.SetHUDElementProgressBarPadding", ElementInfo, NewPadding); }
	static void SetHUDElementProgressBarScale(FHUDElement * ElementInfo, const FVector2D * NewScale) { NativeCall<void, FHUDElement *, const FVector2D *>(nullptr, "UHUDCustomStatusWidget.SetHUDElementProgressBarScale", ElementInfo, NewScale); }
	static void SetHUDElementProgressColor(FHUDElement * ElementInfo, FLinearColor NewColor) { NativeCall<void, FHUDElement *, FLinearColor>(nullptr, "UHUDCustomStatusWidget.SetHUDElementProgressColor", ElementInfo, NewColor); }
	static void SetHUDElementScale(FHUDElement * ElementInfo, const FVector2D * NewScale) { NativeCall<void, FHUDElement *, const FVector2D *>(nullptr, "UHUDCustomStatusWidget.SetHUDElementScale", ElementInfo, NewScale); }
	static void SetHUDElementSize(FHUDElement * ElementInfo, const FVector2D * NewSize) { NativeCall<void, FHUDElement *, const FVector2D *>(nullptr, "UHUDCustomStatusWidget.SetHUDElementSize", ElementInfo, NewSize); }
	static void SetHUDElementTextAlignment_Label(FHUDElement * ElementInfo, TEnumAsByte<enum ETextJustify::Type> NewAlignment) { NativeCall<void, FHUDElement *, TEnumAsByte<enum ETextJustify::Type>>(nullptr, "UHUDCustomStatusWidget.SetHUDElementTextAlignment_Label", ElementInfo, NewAlignment); }
	static void SetHUDElementTextAlignment_Title(FHUDElement * ElementInfo, TEnumAsByte<enum ETextJustify::Type> NewAlignment) { NativeCall<void, FHUDElement *, TEnumAsByte<enum ETextJustify::Type>>(nullptr, "UHUDCustomStatusWidget.SetHUDElementTextAlignment_Title", ElementInfo, NewAlignment); }
	static void SetHUDElementTextColor(FHUDElement * ElementInfo, FLinearColor NewColor) { NativeCall<void, FHUDElement *, FLinearColor>(nullptr, "UHUDCustomStatusWidget.SetHUDElementTextColor", ElementInfo, NewColor); }
	static void SetHUDElementTextPadding(FHUDElement * ElementInfo, FMargin NewPadding) { NativeCall<void, FHUDElement *, FMargin>(nullptr, "UHUDCustomStatusWidget.SetHUDElementTextPadding", ElementInfo, NewPadding); }
	static void SetHUDElementTextScale(FHUDElement * ElementInfo, float NewScale) { NativeCall<void, FHUDElement *, float>(nullptr, "UHUDCustomStatusWidget.SetHUDElementTextScale", ElementInfo, NewScale); }
	static void SetHUDElementTitle(FHUDElement * ElementInfo, FString NewTitle) { NativeCall<void, FHUDElement *, FString>(nullptr, "UHUDCustomStatusWidget.SetHUDElementTitle", ElementInfo, NewTitle); }
	static void SetHUDElementVisibility(FHUDElement * ElementInfo, bool bIsVisible) { NativeCall<void, FHUDElement *, bool>(nullptr, "UHUDCustomStatusWidget.SetHUDElementVisibility", ElementInfo, bIsVisible); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UHUDCustomStatusWidget.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateActorWidgets(AActor * Actor, const TArray<FHUDElement> * Widgets) { NativeCall<void, AActor *, const TArray<FHUDElement> *>(this, "UHUDCustomStatusWidget.UpdateActorWidgets", Actor, Widgets); }
};

