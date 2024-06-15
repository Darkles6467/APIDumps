#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SToolTip.h"
#include "FReflectorNode.h"
#include "ITableRow.h"
#include "STableViewBase.h"
#include "SWindow.h"

struct SWidgetReflector : SCompoundWidget
{
	char __padding[0x60L];
	TSharedPtr<STreeView<TSharedPtr<FReflectorNode,0> >,0>& ReflectorTreeField() { return *GetNativePointerField<TSharedPtr<STreeView<TSharedPtr<FReflectorNode,0> >,0>*>(this, "SWidgetReflector.ReflectorTree"); }
	TArray<TSharedPtr<FReflectorNode,0>>& SelectedNodesField() { return *GetNativePointerField<TArray<TSharedPtr<FReflectorNode,0>>*>(this, "SWidgetReflector.SelectedNodes"); }
	TArray<TSharedPtr<FReflectorNode,0>>& ReflectorTreeRootField() { return *GetNativePointerField<TArray<TSharedPtr<FReflectorNode,0>>*>(this, "SWidgetReflector.ReflectorTreeRoot"); }
	TArray<TSharedPtr<FReflectorNode,0>>& PickedPathField() { return *GetNativePointerField<TArray<TSharedPtr<FReflectorNode,0>>*>(this, "SWidgetReflector.PickedPath"); }
	SSplitter::FSlot * WidgetInfoLocationField() { return GetNativePointerField<SSplitter::FSlot *>(this, "SWidgetReflector.WidgetInfoLocation"); }
	bool& bShowFocusField() { return *GetNativePointerField<bool*>(this, "SWidgetReflector.bShowFocus"); }
	bool& bIsPickingField() { return *GetNativePointerField<bool*>(this, "SWidgetReflector.bIsPicking"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SWidgetReflector.FArguments"); }
	void Construct(const SWidgetReflector::FArguments * InArgs) { NativeCall<void, const SWidgetReflector::FArguments *>(this, "SWidgetReflector.Construct", InArgs); }
	TSharedRef<SToolTip,0> * GenerateToolTipForReflectorNode(TSharedRef<SToolTip,0> * result, TSharedPtr<FReflectorNode,0> InReflectorNode) { return NativeCall<TSharedRef<SToolTip,0> *, TSharedRef<SToolTip,0> *, TSharedPtr<FReflectorNode,0>>(this, "SWidgetReflector.GenerateToolTipForReflectorNode", result, InReflectorNode); }
	void HandleAppScaleSliderChanged(float NewValue) { NativeCall<void, float>(this, "SWidgetReflector.HandleAppScaleSliderChanged", NewValue); }
	float HandleAppScaleSliderValue() { return NativeCall<float>(this, "SWidgetReflector.HandleAppScaleSliderValue"); }
	void HandleFocusCheckBoxCheckedStateChanged(ESlateCheckBoxState::Type NewValue) { NativeCall<void, ESlateCheckBoxState::Type>(this, "SWidgetReflector.HandleFocusCheckBoxCheckedStateChanged", NewValue); }
	ESlateCheckBoxState::Type HandleFocusCheckBoxIsChecked() { return NativeCall<ESlateCheckBoxState::Type>(this, "SWidgetReflector.HandleFocusCheckBoxIsChecked"); }
	FReply * HandlePickButtonClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SWidgetReflector.HandlePickButtonClicked", result); }
	FSlateColor * HandlePickButtonColorAndOpacity(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SWidgetReflector.HandlePickButtonColorAndOpacity", result); }
	FString * HandlePickButtonText(FString * result) { return NativeCall<FString *, FString *>(this, "SWidgetReflector.HandlePickButtonText", result); }
	TSharedRef<ITableRow,0> * HandleReflectorTreeGenerateRow(TSharedRef<ITableRow,0> * result, TSharedPtr<FReflectorNode,0> InReflectorNode, const TSharedRef<STableViewBase,0> * OwnerTable) { return NativeCall<TSharedRef<ITableRow,0> *, TSharedRef<ITableRow,0> *, TSharedPtr<FReflectorNode,0>, const TSharedRef<STableViewBase,0> *>(this, "SWidgetReflector.HandleReflectorTreeGenerateRow", result, InReflectorNode, OwnerTable); }
	void HandleReflectorTreeGetChildren(TSharedPtr<FReflectorNode,0> InWidgetGeometry, TArray<TSharedPtr<FReflectorNode,0>> * OutChildren) { NativeCall<void, TSharedPtr<FReflectorNode,0>, TArray<TSharedPtr<FReflectorNode,0>> *>(this, "SWidgetReflector.HandleReflectorTreeGetChildren", InWidgetGeometry, OutChildren); }
	void HandleReflectorTreeSelectionChanged(TSharedPtr<FReflectorNode,0> __formal, ESelectInfo::Type __formal) { NativeCall<void, TSharedPtr<FReflectorNode,0>, ESelectInfo::Type>(this, "SWidgetReflector.HandleReflectorTreeSelectionChanged", __formal, __formal); }
	bool IsInPickingMode() { return NativeCall<bool>(this, "SWidgetReflector.IsInPickingMode"); }
	void OnWidgetPicked() { NativeCall<void>(this, "SWidgetReflector.OnWidgetPicked"); }
	bool ReflectorNeedsToDrawIn(TSharedRef<SWindow,0> ThisWindow) { return NativeCall<bool, TSharedRef<SWindow,0>>(this, "SWidgetReflector.ReflectorNeedsToDrawIn", ThisWindow); }
	void SetWidgetsToVisualize(const FWidgetPath * InWidgetsToVisualize) { NativeCall<void, const FWidgetPath *>(this, "SWidgetReflector.SetWidgetsToVisualize", InWidgetsToVisualize); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SWidgetReflector.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	int Visualize(const FWidgetPath * InWidgetsToVisualize, FSlateWindowElementList * OutDrawElements, int LayerId) { return NativeCall<int, const FWidgetPath *, FSlateWindowElementList *, int>(this, "SWidgetReflector.Visualize", InWidgetsToVisualize, OutDrawElements, LayerId); }
	void VisualizeAsTree(const TArray<TSharedPtr<FReflectorNode,0>> * WidgetPathToVisualize) { NativeCall<void, const TArray<TSharedPtr<FReflectorNode,0>> *>(this, "SWidgetReflector.VisualizeAsTree", WidgetPathToVisualize); }
	int VisualizePickAsRectangles(const FWidgetPath * InWidgetsToVisualize, FSlateWindowElementList * OutDrawElements, int LayerId) { return NativeCall<int, const FWidgetPath *, FSlateWindowElementList *, int>(this, "SWidgetReflector.VisualizePickAsRectangles", InWidgetsToVisualize, OutDrawElements, LayerId); }
	int VisualizeSelectedNodesAsRectangles(const TArray<TSharedPtr<FReflectorNode,0>> * InNodesToDraw, const TSharedRef<SWindow,0> * VisualizeInWindow, FSlateWindowElementList * OutDrawElements, int LayerId) { return NativeCall<int, const TArray<TSharedPtr<FReflectorNode,0>> *, const TSharedRef<SWindow,0> *, FSlateWindowElementList *, int>(this, "SWidgetReflector.VisualizeSelectedNodesAsRectangles", InNodesToDraw, VisualizeInWindow, OutDrawElements, LayerId); }
};

