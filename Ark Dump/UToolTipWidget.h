#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"

struct UToolTipWidget : UUserWidget
{
	char __padding[0x68L];
	FString& ToolTipLabelNameField() { return *GetNativePointerField<FString*>(this, "UToolTipWidget.ToolTipLabelName"); }
	int& WidgetWidthField() { return *GetNativePointerField<int*>(this, "UToolTipWidget.WidgetWidth"); }
	int& WidgetHeightField() { return *GetNativePointerField<int*>(this, "UToolTipWidget.WidgetHeight"); }
	FVector2D& CustomOverlayScaleField() { return *GetNativePointerField<FVector2D*>(this, "UToolTipWidget.CustomOverlayScale"); }
	bool& bUseBPInitToolTipField() { return *GetNativePointerField<bool*>(this, "UToolTipWidget.bUseBPInitToolTip"); }
	bool& bUseBPUpdateToolTipField() { return *GetNativePointerField<bool*>(this, "UToolTipWidget.bUseBPUpdateToolTip"); }
	TWeakObjectPtr<UCanvasPanelSlot>& MyCanvasSlotPanelField() { return *GetNativePointerField<TWeakObjectPtr<UCanvasPanelSlot>*>(this, "UToolTipWidget.MyCanvasSlotPanel"); }
	int& LastDisplayFrameCounterField() { return *GetNativePointerField<int*>(this, "UToolTipWidget.LastDisplayFrameCounter"); }
	bool& OverlayRetainScreenProjectionFromWorldField() { return *GetNativePointerField<bool*>(this, "UToolTipWidget.OverlayRetainScreenProjectionFromWorld"); }
	FVector& OverlayScreenProjectionWorldPositionField() { return *GetNativePointerField<FVector*>(this, "UToolTipWidget.OverlayScreenProjectionWorldPosition"); }
	FVector2D& OverlayScreenProjectionPositionOffsetField() { return *GetNativePointerField<FVector2D*>(this, "UToolTipWidget.OverlayScreenProjectionPositionOffset"); }
	UTextBlock * ToolTipLabelField() { return GetNativePointerField<UTextBlock *>(this, "UToolTipWidget.ToolTipLabel"); }

	// Functions

	void ProcessSplitscreenAndAddToViewport(bool ScaleX, int YOffsetDirection) { NativeCall<void, bool, int>(this, "UToolTipWidget.ProcessSplitscreenAndAddToViewport", ScaleX, YOffsetDirection); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UToolTipWidget.UpdateToolTip", DeltaSeconds); }
	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UToolTipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTipString(FString newValue) { NativeCall<void, FString>(this, "UToolTipWidget.UpdateToolTipString", newValue); }
	void BPInitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, UObject * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, UObject *>(this, "UToolTipWidget.BPInitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void BPUpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UToolTipWidget.BPUpdateToolTip", DeltaSeconds); }
};

