#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FDragDropEvent.h"

struct UUI_DyeItem : UPrimalUI
{
	char __padding[0x278L];
	FString& DyeItemsDataListNameField() { return *GetNativePointerField<FString*>(this, "UUI_DyeItem.DyeItemsDataListName"); }
	FString& BrushItemsDataListNameField() { return *GetNativePointerField<FString*>(this, "UUI_DyeItem.BrushItemsDataListName"); }
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.CloseButtonName"); }
	FName& LoadPaintingsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.LoadPaintingsButtonName"); }
	FName& SavePaintingsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.SavePaintingsButtonName"); }
	FName& ResetCameraButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.ResetCameraButtonName"); }
	FName& ItemLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.ItemLabelName"); }
	FName& DyeLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.DyeLabelName"); }
	TArray<FName>& DyeRegionButtonsNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UUI_DyeItem.DyeRegionButtonsNames"); }
	FName& DyeButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.DyeButtonName"); }
	FName& DyeIconImageNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.DyeIconImageName"); }
	FName& DurabilityProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.DurabilityProgressBarName"); }
	FName& ItemIconImageNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.ItemIconImageName"); }
	FName& TitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.TitleLabelName"); }
	FName& PreviewWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.PreviewWidgetName"); }
	FName& PaintLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.PaintLabelName"); }
	FName& EraseAllButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.EraseAllButtonName"); }
	FName& BackgroundImageNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.BackgroundImageName"); }
	bool& bOpenedForPaintingStructuresField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bOpenedForPaintingStructures"); }
	TWeakObjectPtr<UUI_PaintingsList>& theLoadingUIField() { return *GetNativePointerField<TWeakObjectPtr<UUI_PaintingsList>*>(this, "UUI_DyeItem.theLoadingUI"); }
	FName& CursorWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_DyeItem.CursorWidgetName"); }
	UProgressBar * DurabilityProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UUI_DyeItem.DurabilityProgressBar"); }
	UTextBlock * ItemLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_DyeItem.ItemLabel"); }
	UTextBlock * DyeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_DyeItem.DyeLabel"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_DyeItem.TitleLabel"); }
	UTextBlock * HighlightMessageLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_DyeItem.HighlightMessageLabel"); }
	USizeBox * PaintLabelField() { return GetNativePointerField<USizeBox *>(this, "UUI_DyeItem.PaintLabel"); }
	USizeBox * PaintDurabilityBoxField() { return GetNativePointerField<USizeBox *>(this, "UUI_DyeItem.PaintDurabilityBox"); }
	USizeBox * GamepadButtonLegend_FaceBottomField() { return GetNativePointerField<USizeBox *>(this, "UUI_DyeItem.GamepadButtonLegend_FaceBottom"); }
	USizeBox * GamepadButtonLegend_FaceRightField() { return GetNativePointerField<USizeBox *>(this, "UUI_DyeItem.GamepadButtonLegend_FaceRight"); }
	TArray<UDyeRegionButtonWidget *>& DyeRegionButtonsField() { return *GetNativePointerField<TArray<UDyeRegionButtonWidget *>*>(this, "UUI_DyeItem.DyeRegionButtons"); }
	UImage * BackgroundImageField() { return GetNativePointerField<UImage *>(this, "UUI_DyeItem.BackgroundImage"); }
	UImage * DyeIconImageField() { return GetNativePointerField<UImage *>(this, "UUI_DyeItem.DyeIconImage"); }
	UImage * ItemIconImageField() { return GetNativePointerField<UImage *>(this, "UUI_DyeItem.ItemIconImage"); }
	UDataListPanel * DyeItemsDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_DyeItem.DyeItemsDataList"); }
	UDataListPanel * BrushItemsDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_DyeItem.BrushItemsDataList"); }
	bool& bDyeStructureField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bDyeStructure"); }
	UUI_PreviewWidget * PreviewWidgetField() { return GetNativePointerField<UUI_PreviewWidget *>(this, "UUI_DyeItem.PreviewWidget"); }
	bool& bSetPaintingMaterialField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bSetPaintingMaterial"); }
	bool& bWasLeftMouseButtonDownLastFrameField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bWasLeftMouseButtonDownLastFrame"); }
	bool& bWasRightMouseButtonDownLastFrameField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bWasRightMouseButtonDownLastFrame"); }
	bool& bAllowPaintingWithoutResourcesField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bAllowPaintingWithoutResources"); }
	FVector2D& LastMousePositionField() { return *GetNativePointerField<FVector2D*>(this, "UUI_DyeItem.LastMousePosition"); }
	bool& bGloballyUpdatedField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bGloballyUpdated"); }
	bool& bIsAutoPaintingField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bIsAutoPainting"); }
	float& CurrentDyeDurabilityField() { return *GetNativePointerField<float*>(this, "UUI_DyeItem.CurrentDyeDurability"); }
	bool& bPaintingReadyField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bPaintingReady"); }
	bool& bSelectingDyeItemField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.bSelectingDyeItem"); }
	bool& Gamepad_IsZoomingPreviewField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.Gamepad_IsZoomingPreview"); }
	bool& Gamepad_IsRotatingPreviewField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.Gamepad_IsRotatingPreview"); }
	bool& Gamepad_IsThickStrokeField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.Gamepad_IsThickStroke"); }
	bool& Gamepad_IsPaintingField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.Gamepad_IsPainting"); }
	bool& Gamepad_WasPaintingLastFrameField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.Gamepad_WasPaintingLastFrame"); }
	bool& Gamepad_IsErasingField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.Gamepad_IsErasing"); }
	bool& Gamepad_WasErasingLastFrameField() { return *GetNativePointerField<bool*>(this, "UUI_DyeItem.Gamepad_WasErasingLastFrame"); }
	long double& LastRegionButtonClickedTimeField() { return *GetNativePointerField<long double*>(this, "UUI_DyeItem.LastRegionButtonClickedTime"); }
	int& LastClieckedRegionButtonIndexField() { return *GetNativePointerField<int*>(this, "UUI_DyeItem.LastClieckedRegionButtonIndex"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_DyeItem.AddToViewport"); }
	void ApplyPaintColorToRegionButton(int RegionButtonIndex) { NativeCall<void, int>(this, "UUI_DyeItem.ApplyPaintColorToRegionButton", RegionButtonIndex); }
	void BrushItemSelected(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_DyeItem.BrushItemSelected", theButton); }
	bool CanDropWidgetOn(UWidget * DraggedWidget, UWidget * WidgetToDropOn, bool bForHighlight) { return NativeCall<bool, UWidget *, UWidget *, bool>(this, "UUI_DyeItem.CanDropWidgetOn", DraggedWidget, WidgetToDropOn, bForHighlight); }
	bool CanPaint() { return NativeCall<bool>(this, "UUI_DyeItem.CanPaint"); }
	void ClearInput() { NativeCall<void>(this, "UUI_DyeItem.ClearInput"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_DyeItem.ClickedButton", clickedWidget); }
	void CloseWithAnimation() { NativeCall<void>(this, "UUI_DyeItem.CloseWithAnimation"); }
	void DrawBox(FSceneView * View, FVector2D Center, int Size, int ColorIndex) { NativeCall<void, FSceneView *, FVector2D, int, int>(this, "UUI_DyeItem.DrawBox", View, Center, Size, ColorIndex); }
	void DrawLine(FSceneView * View, FVector2D Start, FVector2D End, int ColorIndex) { NativeCall<void, FSceneView *, FVector2D, FVector2D, int>(this, "UUI_DyeItem.DrawLine", View, Start, End, ColorIndex); }
	void DrawPoint(FSceneView * View, FVector2D Point, int ColorIndex) { NativeCall<void, FSceneView *, FVector2D, int>(this, "UUI_DyeItem.DrawPoint", View, Point, ColorIndex); }
	void DrawThickLine(FSceneView * View, FVector2D Start, FVector2D End, int Thickness, int ColorIndex) { NativeCall<void, FSceneView *, FVector2D, FVector2D, int, int>(this, "UUI_DyeItem.DrawThickLine", View, Start, End, Thickness, ColorIndex); }
	void DrawWithNewDye() { NativeCall<void>(this, "UUI_DyeItem.DrawWithNewDye"); }
	void DyeItemDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_DyeItem.DyeItemDoubleClicked", theButton); }
	void DyeItemSelected(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_DyeItem.DyeItemSelected", theButton); }
	void EscapeClosed() { NativeCall<void>(this, "UUI_DyeItem.EscapeClosed"); }
	void Gamepad_DidAnalogPanZoomRotatePreview(FVector2D analogInput, float rotateDelta, float zoomDelta, float panDelta) { NativeCall<void, FVector2D, float, float, float>(this, "UUI_DyeItem.Gamepad_DidAnalogPanZoomRotatePreview", analogInput, rotateDelta, zoomDelta, panDelta); }
	bool Gamepad_DidPanZoomRotatePreview(const FKey * key, const FKey * keyMatch, ControlDirection controlDirection, float rotateDelta, float zoomDelta, const FVector2D * panDelta) { return NativeCall<bool, const FKey *, const FKey *, ControlDirection, float, float, const FVector2D *>(this, "UUI_DyeItem.Gamepad_DidPanZoomRotatePreview", key, keyMatch, controlDirection, rotateDelta, zoomDelta, panDelta); }
	void Gamepad_ResetToDefaults() { NativeCall<void>(this, "UUI_DyeItem.Gamepad_ResetToDefaults"); }
	void Gamepad_UpdateBrushThicknessText() { NativeCall<void>(this, "UUI_DyeItem.Gamepad_UpdateBrushThicknessText"); }
	FVector2D * GetPaintCursorPosition(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "UUI_DyeItem.GetPaintCursorPosition", result); }
	int GetSelectedDyeRegionButton() { return NativeCall<int>(this, "UUI_DyeItem.GetSelectedDyeRegionButton"); }
	bool GetTargetCanBePainted() { return NativeCall<bool>(this, "UUI_DyeItem.GetTargetCanBePainted"); }
	APrimalDinoCharacter * GetTargetDinoCharacter() { return NativeCall<APrimalDinoCharacter *>(this, "UUI_DyeItem.GetTargetDinoCharacter"); }
	UPaintingTexture * GetTargetPaintingTexture() { return NativeCall<UPaintingTexture *>(this, "UUI_DyeItem.GetTargetPaintingTexture"); }
	void InitColors() { NativeCall<void>(this, "UUI_DyeItem.InitColors"); }
	void InitForObjects(UObject * AssociatedObject1, UObject * AssociatedObject2, unsigned int ExtraID1, unsigned int ExtraID2) { NativeCall<void, UObject *, UObject *, unsigned int, unsigned int>(this, "UUI_DyeItem.InitForObjects", AssociatedObject1, AssociatedObject2, ExtraID1, ExtraID2); }
	bool IsErasing() { return NativeCall<bool>(this, "UUI_DyeItem.IsErasing"); }
	bool IsGamepadMode() { return NativeCall<bool>(this, "UUI_DyeItem.IsGamepadMode"); }
	bool IsPainting() { return NativeCall<bool>(this, "UUI_DyeItem.IsPainting"); }
	bool IsTargetCharacter() { return NativeCall<bool>(this, "UUI_DyeItem.IsTargetCharacter"); }
	bool IsTargetDinoCharacter() { return NativeCall<bool>(this, "UUI_DyeItem.IsTargetDinoCharacter"); }
	bool IsTargetStrcture() { return NativeCall<bool>(this, "UUI_DyeItem.IsTargetStrcture"); }
	bool IsUsingThickStroke() { return NativeCall<bool>(this, "UUI_DyeItem.IsUsingThickStroke"); }
	bool MeshTrace(UMeshComponent * MeshComponent, FVector RayStart, FVector RayEnd, unsigned int UVChannel, FMeshTraceResult * Result) { return NativeCall<bool, UMeshComponent *, FVector, FVector, unsigned int, FMeshTraceResult *>(this, "UUI_DyeItem.MeshTrace", MeshComponent, RayStart, RayEnd, UVChannel, Result); }
	void NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, bool>(this, "UUI_DyeItem.NotifyInventoryPrimalItemAdded", inventoryComp, theItem, bEquippedItem); }
	void NotifyInventoryPrimalItemRemoved(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *>(this, "UUI_DyeItem.NotifyInventoryPrimalItemRemoved", inventoryComp, theItem); }
	bool OnDragOverEx(FGeometry MyGeometry, FDragDropEvent DragEvent) { return NativeCall<bool, FGeometry, FDragDropEvent>(this, "UUI_DyeItem.OnDragOverEx", MyGeometry, DragEvent); }
	bool OnDropWidgetEx(FGeometry MyGeometry, FDragDropEvent DragEvent) { return NativeCall<bool, FGeometry, FDragDropEvent>(this, "UUI_DyeItem.OnDropWidgetEx", MyGeometry, DragEvent); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UUI_DyeItem.OnGamepadActiveChanged", bIsGamepadActive); }
	bool OnMimickDroppedWidget(UWidget * DroppedWidget, UWidget * DroppedOnWidget) { return NativeCall<bool, UWidget *, UWidget *>(this, "UUI_DyeItem.OnMimickDroppedWidget", DroppedWidget, DroppedOnWidget); }
	void OnPaintingStarted() { NativeCall<void>(this, "UUI_DyeItem.OnPaintingStarted"); }
	void OnPaintingStopped() { NativeCall<void>(this, "UUI_DyeItem.OnPaintingStopped"); }
	void PaintTemplate(FString FilePath, TMap<int,FSaveLoadDyePaintingItem,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FSaveLoadDyePaintingItem,0> > PaintMapping) { NativeCall<void, FString, TMap<int,FSaveLoadDyePaintingItem,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FSaveLoadDyePaintingItem,0> >>(this, "UUI_DyeItem.PaintTemplate", FilePath, PaintMapping); }
	void RefreshBrushItemsDataList() { NativeCall<void>(this, "UUI_DyeItem.RefreshBrushItemsDataList"); }
	void RefreshDyeItemsDataList() { NativeCall<void>(this, "UUI_DyeItem.RefreshDyeItemsDataList"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_DyeItem.RemoveFromViewport"); }
	void ResetCamera() { NativeCall<void>(this, "UUI_DyeItem.ResetCamera"); }
	bool SavePainting(FString FileName) { return NativeCall<bool, FString>(this, "UUI_DyeItem.SavePainting", FileName); }
	void SelectedDyeRegionButton(int index) { NativeCall<void, int>(this, "UUI_DyeItem.SelectedDyeRegionButton", index); }
	void SetGamepadMode(bool enable) { NativeCall<void, bool>(this, "UUI_DyeItem.SetGamepadMode", enable); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_DyeItem.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateGamepadCameraInfoVisibility() { NativeCall<void>(this, "UUI_DyeItem.UpdateGamepadCameraInfoVisibility"); }
	bool WasErasingLastFrame() { return NativeCall<bool>(this, "UUI_DyeItem.WasErasingLastFrame"); }
	bool WasPaintingLastFrame() { return NativeCall<bool>(this, "UUI_DyeItem.WasPaintingLastFrame"); }
};

