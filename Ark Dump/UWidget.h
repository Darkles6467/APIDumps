#pragma once

#include "BaseDeclarations.h"
#include "UVisual.h"
#include "FWidgetTransform.h"

struct UWidget : UVisual
{
	char __padding[0x160L];
	bool& bIsVariableField() { return *GetNativePointerField<bool*>(this, "UWidget.bIsVariable"); }
	bool& bCreatedByConstructionScriptField() { return *GetNativePointerField<bool*>(this, "UWidget.bCreatedByConstructionScript"); }
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "UWidget.bIsEnabled"); }
	FString& CustomDataField() { return *GetNativePointerField<FString*>(this, "UWidget.CustomData"); }
	FText& ToolTipTextField() { return *GetNativePointerField<FText*>(this, "UWidget.ToolTipText"); }
	bool& bUseCustomTooltipField() { return *GetNativePointerField<bool*>(this, "UWidget.bUseCustomTooltip"); }
	TEnumAsByte<enum EAlignHorizontalUI::Type>& CustomToolTipHorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EAlignHorizontalUI::Type>*>(this, "UWidget.CustomToolTipHorizontalAlignment"); }
	TEnumAsByte<enum EAlignVerticalUI::Type>& CustomToolTipVerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EAlignVerticalUI::Type>*>(this, "UWidget.CustomToolTipVerticalAlignment"); }
	TEnumAsByte<enum EOrientation>& CustomToolTipOrientationField() { return *GetNativePointerField<TEnumAsByte<enum EOrientation>*>(this, "UWidget.CustomToolTipOrientation"); }
	float& GamepadSelectClosestDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "UWidget.GamepadSelectClosestDistanceMultiplier"); }
	bool& bDisableAxisOrientedSweepTestOnMeField() { return *GetNativePointerField<bool*>(this, "UWidget.bDisableAxisOrientedSweepTestOnMe"); }
	FVector2D& CustomToolTipPaddingField() { return *GetNativePointerField<FVector2D*>(this, "UWidget.CustomToolTipPadding"); }
	FString& CustomToolTipStringField() { return *GetNativePointerField<FString*>(this, "UWidget.CustomToolTipString"); }
	TEnumAsByte<enum ESlateVisibility::Type>& VisiblityField() { return *GetNativePointerField<TEnumAsByte<enum ESlateVisibility::Type>*>(this, "UWidget.Visiblity"); }
	TEnumAsByte<enum EMouseCursor::Type>& CursorField() { return *GetNativePointerField<TEnumAsByte<enum EMouseCursor::Type>*>(this, "UWidget.Cursor"); }
	FWidgetTransform& RenderTransformField() { return *GetNativePointerField<FWidgetTransform*>(this, "UWidget.RenderTransform"); }
	FVector2D& RenderTransformPivotField() { return *GetNativePointerField<FVector2D*>(this, "UWidget.RenderTransformPivot"); }
	bool& HighlightableField() { return *GetNativePointerField<bool*>(this, "UWidget.Highlightable"); }
	bool& bDontRenderHighlightField() { return *GetNativePointerField<bool*>(this, "UWidget.bDontRenderHighlight"); }
	bool& bUseWindowClippingForHighlightField() { return *GetNativePointerField<bool*>(this, "UWidget.bUseWindowClippingForHighlight"); }
	bool& bPrimalSetupSpecialAdjacentsField() { return *GetNativePointerField<bool*>(this, "UWidget.bPrimalSetupSpecialAdjacents"); }
	FName& AdjacentUpNameField() { return *GetNativePointerField<FName*>(this, "UWidget.AdjacentUpName"); }
	FName& AdjacentDownNameField() { return *GetNativePointerField<FName*>(this, "UWidget.AdjacentDownName"); }
	FName& AdjacentRightNameField() { return *GetNativePointerField<FName*>(this, "UWidget.AdjacentRightName"); }
	FName& AdjacentLeftNameField() { return *GetNativePointerField<FName*>(this, "UWidget.AdjacentLeftName"); }
	bool& bDesignTimeField() { return *GetNativePointerField<bool*>(this, "UWidget.bDesignTime"); }

	// Functions

	bool UseCustomToolTip(bool bWantToDisplayTooltip) { return NativeCall<bool, bool>(this, "UWidget.UseCustomToolTip", bWantToDisplayTooltip); }
	bool CanNavigateToDifferentPanelRecursive() { return NativeCall<bool>(this, "UWidget.CanNavigateToDifferentPanelRecursive"); }
	TOptional<float> * ConvertFloatToOptionalFloat(TOptional<float> * result, TAttribute<float> InFloat) { return NativeCall<TOptional<float> *, TOptional<float> *, TAttribute<float>>(this, "UWidget.ConvertFloatToOptionalFloat", result, InFloat); }
	FSlateColor * ConvertLinearColorToSlateColor(FSlateColor * result, TAttribute<FLinearColor> InLinearColor) { return NativeCall<FSlateColor *, FSlateColor *, TAttribute<FLinearColor>>(this, "UWidget.ConvertLinearColorToSlateColor", result, InLinearColor); }
	EVisibility * ConvertVisibility(EVisibility * result, TAttribute<enum ESlateVisibility::Type> SerializedType) { return NativeCall<EVisibility *, EVisibility *, TAttribute<enum ESlateVisibility::Type>>(this, "UWidget.ConvertVisibility", result, SerializedType); }
	void ForceLayoutPrepass() { NativeCall<void>(this, "UWidget.ForceLayoutPrepass"); }
	static void GatherAllChildren(UWidget * Root, TSet<UWidget *,DefaultKeyFuncs<UWidget *,0>,FDefaultSetAllocator> * Children) { NativeCall<void, UWidget *, TSet<UWidget *,DefaultKeyFuncs<UWidget *,0>,FDefaultSetAllocator> *>(nullptr, "UWidget.GatherAllChildren", Root, Children); }
	static void GatherChildren(UWidget * Root, TSet<UWidget *,DefaultKeyFuncs<UWidget *,0>,FDefaultSetAllocator> * Children) { NativeCall<void, UWidget *, TSet<UWidget *,DefaultKeyFuncs<UWidget *,0>,FDefaultSetAllocator> *>(nullptr, "UWidget.GatherChildren", Root, Children); }
	FVector2D * GetDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "UWidget.GetDesiredSize", result); }
	bool GetIsEnabled() { return NativeCall<bool>(this, "UWidget.GetIsEnabled"); }
	bool GetIsThisAndParentsEnabled() { return NativeCall<bool>(this, "UWidget.GetIsThisAndParentsEnabled"); }
	TEnumAsByte<enum ESlateVisibility::Type> * GetVisibility(TEnumAsByte<enum ESlateVisibility::Type> * result) { return NativeCall<TEnumAsByte<enum ESlateVisibility::Type> *, TEnumAsByte<enum ESlateVisibility::Type> *>(this, "UWidget.GetVisibility", result); }
	bool HasFocusedDescendants() { return NativeCall<bool>(this, "UWidget.HasFocusedDescendants"); }
	bool HasKeyboardFocus() { return NativeCall<bool>(this, "UWidget.HasKeyboardFocus"); }
	bool HasMouseCapture() { return NativeCall<bool>(this, "UWidget.HasMouseCapture"); }
	bool IsChildOf(UWidget * PossibleParent) { return NativeCall<bool, UWidget *>(this, "UWidget.IsChildOf", PossibleParent); }
	bool IsDesignTime() { return NativeCall<bool>(this, "UWidget.IsDesignTime"); }
	bool IsHighlightable() { return NativeCall<bool>(this, "UWidget.IsHighlightable"); }
	bool IsHighlighted() { return NativeCall<bool>(this, "UWidget.IsHighlighted"); }
	bool IsHovered() { return NativeCall<bool>(this, "UWidget.IsHovered"); }
	bool IsVisible() { return NativeCall<bool>(this, "UWidget.IsVisible"); }
	bool IsVisibleRecursive() { return NativeCall<bool>(this, "UWidget.IsVisibleRecursive"); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "UWidget.Modify", bAlwaysMarkDirty); }
	void RemoveFromParent() { NativeCall<void>(this, "UWidget.RemoveFromParent"); }
	void SetClipChildren(bool InClipChildren) { NativeCall<void, bool>(this, "UWidget.SetClipChildren", InClipChildren); }
	void SetHighlight(bool Highlight, FLinearColor HighlightTint) { NativeCall<void, bool, FLinearColor>(this, "UWidget.SetHighlight", Highlight, HighlightTint); }
	void SetIsDesignTime(bool bInDesignTime) { NativeCall<void, bool>(this, "UWidget.SetIsDesignTime", bInDesignTime); }
	void SetIsEnabled(bool bInIsEnabled) { NativeCall<void, bool>(this, "UWidget.SetIsEnabled", bInIsEnabled); }
	void SetKeyboardFocus() { NativeCall<void>(this, "UWidget.SetKeyboardFocus"); }
	void SetRenderAngle(float Angle) { NativeCall<void, float>(this, "UWidget.SetRenderAngle", Angle); }
	void SetRenderScale(FVector2D Scale) { NativeCall<void, FVector2D>(this, "UWidget.SetRenderScale", Scale); }
	void SetRenderShear(FVector2D Shear) { NativeCall<void, FVector2D>(this, "UWidget.SetRenderShear", Shear); }
	void SetRenderTransform(FWidgetTransform Transform) { NativeCall<void, FWidgetTransform>(this, "UWidget.SetRenderTransform", Transform); }
	void SetRenderTransformPivot(FVector2D Pivot) { NativeCall<void, FVector2D>(this, "UWidget.SetRenderTransformPivot", Pivot); }
	void SetRenderTranslation(FVector2D Translation) { NativeCall<void, FVector2D>(this, "UWidget.SetRenderTranslation", Translation); }
	void SetToolTipText(const FText * InToolTipText) { NativeCall<void, const FText *>(this, "UWidget.SetToolTipText", InToolTipText); }
	void SetVisibility(TEnumAsByte<enum ESlateVisibility::Type> InVisibility) { NativeCall<void, TEnumAsByte<enum ESlateVisibility::Type>>(this, "UWidget.SetVisibility", InVisibility); }
	void SetVisible(bool bVisible) { NativeCall<void, bool>(this, "UWidget.SetVisible", bVisible); }
	void SynchronizeProperties() { NativeCall<void>(this, "UWidget.SynchronizeProperties"); }
	void UpdateRenderTransform() { NativeCall<void>(this, "UWidget.UpdateRenderTransform"); }
};

