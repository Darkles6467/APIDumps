#pragma once

#include "BaseDeclarations.h"
#include "FSlateControlledConstruction.h"
#include "IToolTip.h"
#include "EVisibility.h"
#include "SWidget.h"

struct SWidget : FSlateControlledConstruction
{
	char __padding[0x1d0L];
	FVector2D& LastPaintedSizeField() { return *GetNativePointerField<FVector2D*>(this, "SWidget.LastPaintedSize"); }
	FVector2D& LastPaintedPosField() { return *GetNativePointerField<FVector2D*>(this, "SWidget.LastPaintedPos"); }
	void * UserDataField() { return GetNativePointerField<void *>(this, "SWidget.UserData"); }
	FName& TypeOfWidgetField() { return *GetNativePointerField<FName*>(this, "SWidget.TypeOfWidget"); }
	FName& CreatedInFileFullPathField() { return *GetNativePointerField<FName*>(this, "SWidget.CreatedInFileFullPath"); }
	FName& CreatedInFileField() { return *GetNativePointerField<FName*>(this, "SWidget.CreatedInFile"); }
	int& CreatedOnLineField() { return *GetNativePointerField<int*>(this, "SWidget.CreatedOnLine"); }
	FName& TagField() { return *GetNativePointerField<FName*>(this, "SWidget.Tag"); }
	TAttribute<TOptional<enum EMouseCursor::Type> >& CursorField() { return *GetNativePointerField<TAttribute<TOptional<enum EMouseCursor::Type> >*>(this, "SWidget.Cursor"); }
	TAttribute<bool>& EnabledStateField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SWidget.EnabledState"); }
	TAttribute<EVisibility>& VisibilityField() { return *GetNativePointerField<TAttribute<EVisibility>*>(this, "SWidget.Visibility"); }
	TAttribute<TOptional<FTransform2D> >& RenderTransformField() { return *GetNativePointerField<TAttribute<TOptional<FTransform2D> >*>(this, "SWidget.RenderTransform"); }
	TAttribute<FVector2D>& RenderTransformPivotField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SWidget.RenderTransformPivot"); }
	TAttribute<bool>& ClipChildrenField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SWidget.ClipChildren"); }
	TAttribute<bool>& UseScaledClipForChildrenField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SWidget.UseScaledClipForChildren"); }
	TAttribute<bool>& IsHighlightableField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SWidget.IsHighlightable"); }
	TAttribute<bool>& UseWindowClippingForHighlightField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SWidget.UseWindowClippingForHighlight"); }
	bool& IsHighlightedField() { return *GetNativePointerField<bool*>(this, "SWidget.IsHighlighted"); }
	FLinearColor& HighlightTintField() { return *GetNativePointerField<FLinearColor*>(this, "SWidget.HighlightTint"); }
	FCurveSequence& BorderIntroAnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "SWidget.BorderIntroAnimation"); }
	FCurveSequence& BorderPulseAnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "SWidget.BorderPulseAnimation"); }
	FVector2D& DesiredSizeField() { return *GetNativePointerField<FVector2D*>(this, "SWidget.DesiredSize"); }
	TSharedPtr<IToolTip,0>& ToolTipField() { return *GetNativePointerField<TSharedPtr<IToolTip,0>*>(this, "SWidget.ToolTip"); }
	bool& bToolTipForceFieldEnabledField() { return *GetNativePointerField<bool*>(this, "SWidget.bToolTipForceFieldEnabled"); }
	bool& bIsHoveredField() { return *GetNativePointerField<bool*>(this, "SWidget.bIsHovered"); }

	// Functions

	bool IsHovered() { return NativeCall<bool>(this, "SWidget.IsHovered"); }
	void SWidgetConstruct(const TAttribute<FText> * InToolTipText, const TSharedPtr<IToolTip,0> * InToolTip, const TAttribute<TOptional<enum EMouseCursor::Type> > * InCursor, const TAttribute<bool> * InEnabledState, const TAttribute<EVisibility> * InVisibility, const TAttribute<TOptional<FTransform2D> > * InTransform, const TAttribute<FVector2D> * InTransformPivot, const FName * InTag, const TArray<TSharedRef<ISlateMetaData,0>> * InMetaData) { NativeCall<void, const TAttribute<FText> *, const TSharedPtr<IToolTip,0> *, const TAttribute<TOptional<enum EMouseCursor::Type> > *, const TAttribute<bool> *, const TAttribute<EVisibility> *, const TAttribute<TOptional<FTransform2D> > *, const TAttribute<FVector2D> *, const FName *, const TArray<TSharedRef<ISlateMetaData,0>> *>(this, "SWidget.SWidgetConstruct", InToolTipText, InToolTip, InCursor, InEnabledState, InVisibility, InTransform, InTransformPivot, InTag, InMetaData); }
	bool IsEnabled() { return NativeCall<bool>(this, "SWidget.IsEnabled"); }
	void SetVisibility(TAttribute<EVisibility> InVisibility) { NativeCall<void, TAttribute<EVisibility>>(this, "SWidget.SetVisibility", InVisibility); }
	const TOptional<FTransform2D> * GetRenderTransform() { return NativeCall<const TOptional<FTransform2D> *>(this, "SWidget.GetRenderTransform"); }
	const FVector2D * GetRenderTransformPivot() { return NativeCall<const FVector2D *>(this, "SWidget.GetRenderTransformPivot"); }
	void SetRenderTransform(TAttribute<TOptional<FTransform2D> > InTransform) { NativeCall<void, TAttribute<TOptional<FTransform2D> >>(this, "SWidget.SetRenderTransform", InTransform); }
	void SetRenderTransformPivot(TAttribute<FVector2D> InTransformPivot) { NativeCall<void, TAttribute<FVector2D>>(this, "SWidget.SetRenderTransformPivot", InTransformPivot); }
	bool ShouldBeEnabled(bool InParentEnabled) { return NativeCall<bool, bool>(this, "SWidget.ShouldBeEnabled", InParentEnabled); }
	void ArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SWidget.ArrangeChildren", AllottedGeometry, ArrangedChildren); }
	void CacheDesiredSize() { NativeCall<void>(this, "SWidget.CacheDesiredSize"); }
	bool CanBeHighlighted() { return NativeCall<bool>(this, "SWidget.CanBeHighlighted"); }
	void Construct(const TAttribute<FText> * InToolTipText, const TSharedPtr<IToolTip,0> * InToolTip, const TAttribute<TOptional<enum EMouseCursor::Type> > * InCursor, const TAttribute<bool> * InEnabledState, const TAttribute<EVisibility> * InVisibility, const TAttribute<TOptional<FTransform2D> > * InTransform, const TAttribute<FVector2D> * InTransformPivot, const FName * InTag, const TArray<TSharedRef<ISlateMetaData,0>> * InMetaData) { NativeCall<void, const TAttribute<FText> *, const TSharedPtr<IToolTip,0> *, const TAttribute<TOptional<enum EMouseCursor::Type> > *, const TAttribute<bool> *, const TAttribute<EVisibility> *, const TAttribute<TOptional<FTransform2D> > *, const TAttribute<FVector2D> *, const FName *, const TArray<TSharedRef<ISlateMetaData,0>> *>(this, "SWidget.Construct", InToolTipText, InToolTip, InCursor, InEnabledState, InVisibility, InTransform, InTransformPivot, InTag, InMetaData); }
	void DoBorderHighlighting(FSlateWindowElementList * OutDrawElements, int LayerId, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FLinearColor WidgetTintColor) { NativeCall<void, FSlateWindowElementList *, int, const FGeometry *, const FSlateRect *, FLinearColor>(this, "SWidget.DoBorderHighlighting", OutDrawElements, LayerId, AllottedGeometry, MyClippingRect, WidgetTintColor); }
	void EnableToolTipForceField(const bool bEnableForceField) { NativeCall<void, const bool>(this, "SWidget.EnableToolTipForceField", bEnableForceField); }
	void FindChildGeometries_Helper(const FGeometry * MyGeometry, const TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator> * WidgetsToFind, TMap<TSharedRef<SWidget,0>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapKeyFuncs<TSharedRef<SWidget,0>,FArrangedWidget,0> > * OutResult) { NativeCall<void, const FGeometry *, const TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator> *, TMap<TSharedRef<SWidget,0>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapKeyFuncs<TSharedRef<SWidget,0>,FArrangedWidget,0> > *>(this, "SWidget.FindChildGeometries_Helper", MyGeometry, WidgetsToFind, OutResult); }
	FGeometry * FindChildGeometry(FGeometry * result, const FGeometry * MyGeometry, TSharedRef<SWidget,0> WidgetToFind) { return NativeCall<FGeometry *, FGeometry *, const FGeometry *, TSharedRef<SWidget,0>>(this, "SWidget.FindChildGeometry", result, MyGeometry, WidgetToFind); }
	FString * GetCreatedInFile(FString * result) { return NativeCall<FString *, FString *>(this, "SWidget.GetCreatedInFile", result); }
	FSlateColor * GetForegroundColor(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SWidget.GetForegroundColor", result); }
	FString * GetReadableLocation(FString * result) { return NativeCall<FString *, FString *>(this, "SWidget.GetReadableLocation", result); }
	FName * GetTag(FName * result) { return NativeCall<FName *, FName *>(this, "SWidget.GetTag", result); }
	FName * GetType(FName * result) { return NativeCall<FName *, FName *>(this, "SWidget.GetType", result); }
	FString * GetTypeAsString(FString * result) { return NativeCall<FString *, FString *>(this, "SWidget.GetTypeAsString", result); }
	bool HasFocusedDescendants() { return NativeCall<bool>(this, "SWidget.HasFocusedDescendants"); }
	bool HasKeyboardFocus() { return NativeCall<bool>(this, "SWidget.HasKeyboardFocus"); }
	bool HasMouseCapture() { return NativeCall<bool>(this, "SWidget.HasMouseCapture"); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "SWidget.OnCursorQuery", result, MyGeometry, CursorEvent); }
	void OnMouseEnter(const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "SWidget.OnMouseEnter", MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "SWidget.OnMouseLeave", MouseEvent); }
	int Paint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SWidget.Paint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetClipChildren(const TAttribute<bool> * InClipChildren) { NativeCall<void, const TAttribute<bool> *>(this, "SWidget.SetClipChildren", InClipChildren); }
	void SetCursor(const TAttribute<TOptional<enum EMouseCursor::Type> > * InCursor) { NativeCall<void, const TAttribute<TOptional<enum EMouseCursor::Type> > *>(this, "SWidget.SetCursor", InCursor); }
	void SetDebugInfo(const char * InType, const char * InFile, int OnLine) { NativeCall<void, const char *, const char *, int>(this, "SWidget.SetDebugInfo", InType, InFile, OnLine); }
	void SetHighlightState(bool bHighlight, FLinearColor highlightTint) { NativeCall<void, bool, FLinearColor>(this, "SWidget.SetHighlightState", bHighlight, highlightTint); }
	void SetHighlightable(const TAttribute<bool> * InHighlightable) { NativeCall<void, const TAttribute<bool> *>(this, "SWidget.SetHighlightable", InHighlightable); }
	void SetToolTipText(const TAttribute<FText> * ToolTipText) { NativeCall<void, const TAttribute<FText> *>(this, "SWidget.SetToolTipText", ToolTipText); }
	void SetToolTipText(const FText * ToolTipText) { NativeCall<void, const FText *>(this, "SWidget.SetToolTipText", ToolTipText); }
	void SetUseScaledClipForChildren(const TAttribute<bool> * InUseScaledClipForChildren) { NativeCall<void, const TAttribute<bool> *>(this, "SWidget.SetUseScaledClipForChildren", InUseScaledClipForChildren); }
	void SetUseWindowClippingForHighlight(const TAttribute<bool> * InUseWindowClippingForHighlight) { NativeCall<void, const TAttribute<bool> *>(this, "SWidget.SetUseWindowClippingForHighlight", InUseWindowClippingForHighlight); }
	void SlatePrepass() { NativeCall<void>(this, "SWidget.SlatePrepass"); }
	void TickWidgetsRecursively(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SWidget.TickWidgetsRecursively", AllottedGeometry, InCurrentTime, InDeltaTime); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "SWidget.ToString", result); }
	bool GetClipChildren() { return NativeCall<bool>(this, "SWidget.GetClipChildren"); }
};

