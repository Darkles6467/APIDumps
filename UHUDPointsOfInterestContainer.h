#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHUDPointsOfInterestContainer : UPrimalUI
{
	char __padding[0x40L];
	FName& PointContainerCanvasNameField() { return *GetNativePointerField<FName*>(this, "UHUDPointsOfInterestContainer.PointContainerCanvasName"); }
	TSubclassOf<UTamingListEntryWidget>& TamingListEntryTemplateField() { return *GetNativePointerField<TSubclassOf<UTamingListEntryWidget>*>(this, "UHUDPointsOfInterestContainer.TamingListEntryTemplate"); }
	UCanvasPanel * PointContainerCanvasField() { return GetNativePointerField<UCanvasPanel *>(this, "UHUDPointsOfInterestContainer.PointContainerCanvas"); }
	UTamingListEntryWidget * TamingPOITooltipField() { return GetNativePointerField<UTamingListEntryWidget *>(this, "UHUDPointsOfInterestContainer.TamingPOITooltip"); }
	bool& bTooltipVisibleField() { return *GetNativePointerField<bool*>(this, "UHUDPointsOfInterestContainer.bTooltipVisible"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UHUDPointsOfInterestContainer.AddToViewport"); }
	void CreateTamingTooltip() { NativeCall<void>(this, "UHUDPointsOfInterestContainer.CreateTamingTooltip"); }
	bool DestroyPointOfInterestWidgetWithData(const FPointOfInterestData * WithPointData) { return NativeCall<bool, const FPointOfInterestData *>(this, "UHUDPointsOfInterestContainer.DestroyPointOfInterestWidgetWithData", WithPointData); }
	void ShowTamingTooltip(bool bShowTooltip) { NativeCall<void, bool>(this, "UHUDPointsOfInterestContainer.ShowTamingTooltip", bShowTooltip); }
	void SyncTamingTooltip(const FTamingDinoInfo * InInfo) { NativeCall<void, const FTamingDinoInfo *>(this, "UHUDPointsOfInterestContainer.SyncTamingTooltip", InInfo); }
};

