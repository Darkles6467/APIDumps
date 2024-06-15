#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHUDPointOfInterestWidget : UPrimalUI
{
	char __padding[0x268L];
	FName& OuterContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OuterContainerName"); }
	FName& PointTitleTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointTitleTextBlockName"); }
	FName& PointDescTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointDescTextBlockName"); }
	FName& PointIconPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointIconPanelName"); }
	FName& PointIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointIconName"); }
	FName& PointSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointSwitcherName"); }
	FName& PointOffScreenArrowNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointOffScreenArrowName"); }
	FName& PointOffScreenIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.PointOffScreenIconName"); }
	FName& OnScreenPrimaryPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OnScreenPrimaryPanelName"); }
	FName& OffScreenPrimaryPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OffScreenPrimaryPanelName"); }
	FName& OnScreenIndicatorImageNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OnScreenIndicatorImageName"); }
	FName& OffScreenIndicatorImageNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OffScreenIndicatorImageName"); }
	FName& OnScreenProgressPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OnScreenProgressPanelName"); }
	FName& OnScreenProgressLabelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OnScreenProgressLabelName"); }
	FName& OffScreenProgressPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OffScreenProgressPanelName"); }
	FName& OffScreenProgressLabelNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointOfInterestWidget.OffScreenProgressLabelName"); }
	float& WidgetTitleHiddenIconRenderOffset_YField() { return *GetNativePointerField<float*>(this, "UHUDPointOfInterestWidget.WidgetTitleHiddenIconRenderOffset_Y"); }
	FPointOfInterestData& WidgetPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "UHUDPointOfInterestWidget.WidgetPointOfInterestData"); }
	float& OffScreenWidgetScaleField() { return *GetNativePointerField<float*>(this, "UHUDPointOfInterestWidget.OffScreenWidgetScale"); }
	UCanvasPanel * OuterContainerField() { return GetNativePointerField<UCanvasPanel *>(this, "UHUDPointOfInterestWidget.OuterContainer"); }
	UTextBlock * PointOfInterest_TitleField() { return GetNativePointerField<UTextBlock *>(this, "UHUDPointOfInterestWidget.PointOfInterest_Title"); }
	UTextBlock * PointOfInterest_DescField() { return GetNativePointerField<UTextBlock *>(this, "UHUDPointOfInterestWidget.PointOfInterest_Desc"); }
	UCanvasPanel * PointIconPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UHUDPointOfInterestWidget.PointIconPanel"); }
	UImage * PointOfInterest_IconField() { return GetNativePointerField<UImage *>(this, "UHUDPointOfInterestWidget.PointOfInterest_Icon"); }
	UImage * PointOfInterest_OffScreenArrowField() { return GetNativePointerField<UImage *>(this, "UHUDPointOfInterestWidget.PointOfInterest_OffScreenArrow"); }
	UImage * PointOfInterest_OffScreenIconField() { return GetNativePointerField<UImage *>(this, "UHUDPointOfInterestWidget.PointOfInterest_OffScreenIcon"); }
	UCanvasPanel * OnScreenPrimaryPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UHUDPointOfInterestWidget.OnScreenPrimaryPanel"); }
	UCanvasPanel * OffScreenPrimaryPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UHUDPointOfInterestWidget.OffScreenPrimaryPanel"); }
	UImage * OnScreenIndicatorImageField() { return GetNativePointerField<UImage *>(this, "UHUDPointOfInterestWidget.OnScreenIndicatorImage"); }
	UImage * OffScreenIndicatorImageField() { return GetNativePointerField<UImage *>(this, "UHUDPointOfInterestWidget.OffScreenIndicatorImage"); }
	UTextBlock * OnScreenProgressLabelField() { return GetNativePointerField<UTextBlock *>(this, "UHUDPointOfInterestWidget.OnScreenProgressLabel"); }
	UTextBlock * OffScreenProgressLabelField() { return GetNativePointerField<UTextBlock *>(this, "UHUDPointOfInterestWidget.OffScreenProgressLabel"); }
	UImage * OnScreenProgressMaterialHostField() { return GetNativePointerField<UImage *>(this, "UHUDPointOfInterestWidget.OnScreenProgressMaterialHost"); }
	bool& bOnlyVisibleOffScreenField() { return *GetNativePointerField<bool*>(this, "UHUDPointOfInterestWidget.bOnlyVisibleOffScreen"); }
	bool& bOnlyVisibleOnScreenField() { return *GetNativePointerField<bool*>(this, "UHUDPointOfInterestWidget.bOnlyVisibleOnScreen"); }
	bool& bAlwaysVisibleField() { return *GetNativePointerField<bool*>(this, "UHUDPointOfInterestWidget.bAlwaysVisible"); }

	// Functions

	void DestroyPointOfInterestWidget_Implementation() { NativeCall<void>(this, "UHUDPointOfInterestWidget.DestroyPointOfInterestWidget_Implementation"); }
	static bool CanActorViewPointOfInterest(AActor * ForActor, const FPointOfInterestData * CanViewPointData) { return NativeCall<bool, AActor *, const FPointOfInterestData *>(nullptr, "UHUDPointOfInterestWidget.CanActorViewPointOfInterest", ForActor, CanViewPointData); }
	static FTransform * GetPointOfInterestCosmeticActorTransform(FTransform * result, const FPointOfInterestData * FromPointData) { return NativeCall<FTransform *, FTransform *, const FPointOfInterestData *>(nullptr, "UHUDPointOfInterestWidget.GetPointOfInterestCosmeticActorTransform", result, FromPointData); }
	const FPointOfInterestData * GetPointOfInterestData() { return NativeCall<const FPointOfInterestData *>(this, "UHUDPointOfInterestWidget.GetPointOfInterestData"); }
	static FTransform * GetPointOfInterestTransform(FTransform * result, const FPointOfInterestData * FromPointData) { return NativeCall<FTransform *, FTransform *, const FPointOfInterestData *>(nullptr, "UHUDPointOfInterestWidget.GetPointOfInterestTransform", result, FromPointData); }
	static FVector * GetPointOfInterestWorldLocation(FVector * result, const FPointOfInterestData * FromPointData) { return NativeCall<FVector *, FVector *, const FPointOfInterestData *>(nullptr, "UHUDPointOfInterestWidget.GetPointOfInterestWorldLocation", result, FromPointData); }
	static FRotator * GetPointOfInterestWorldRotation(FRotator * result, const FPointOfInterestData * FromPointData) { return NativeCall<FRotator *, FRotator *, const FPointOfInterestData *>(nullptr, "UHUDPointOfInterestWidget.GetPointOfInterestWorldRotation", result, FromPointData); }
	bool HasValidPointOfInterestData() { return NativeCall<bool>(this, "UHUDPointOfInterestWidget.HasValidPointOfInterestData"); }
	void InitializePointOfInterestWidget_Implementation(const FPointOfInterestData * FromPointData) { NativeCall<void, const FPointOfInterestData *>(this, "UHUDPointOfInterestWidget.InitializePointOfInterestWidget_Implementation", FromPointData); }
	static bool IsPointOfInterestInitialized(const FPointOfInterestData * ForPointData) { return NativeCall<bool, const FPointOfInterestData *>(nullptr, "UHUDPointOfInterestWidget.IsPointOfInterestInitialized", ForPointData); }
	static bool IsPointOfInterestValid(const FPointOfInterestData * ForPointData) { return NativeCall<bool, const FPointOfInterestData *>(nullptr, "UHUDPointOfInterestWidget.IsPointOfInterestValid", ForPointData); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UHUDPointOfInterestWidget.Tick_Implementation", MyGeometry, InDeltaTime); }
	bool UpdateWidgetPointOfInterestData_Implementation(const FPointOfInterestData * WithPointData) { return NativeCall<bool, const FPointOfInterestData *>(this, "UHUDPointOfInterestWidget.UpdateWidgetPointOfInterestData_Implementation", WithPointData); }
	void DestroyPointOfInterestWidget() { NativeCall<void>(this, "UHUDPointOfInterestWidget.DestroyPointOfInterestWidget"); }
	void InitializePointOfInterestWidget(const FPointOfInterestData * FromPointData) { NativeCall<void, const FPointOfInterestData *>(this, "UHUDPointOfInterestWidget.InitializePointOfInterestWidget", FromPointData); }
	bool UpdateWidgetPointOfInterestData(const FPointOfInterestData * WithPointData) { return NativeCall<bool, const FPointOfInterestData *>(this, "UHUDPointOfInterestWidget.UpdateWidgetPointOfInterestData", WithPointData); }
};

