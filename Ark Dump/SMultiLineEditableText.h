#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SScrollBar.h"
#include "ITextLayoutMarshaller.h"
#include "FMoveCursor.h"
#include "ISlateRun.h"
#include "ILayoutBlock.h"
#include "SWindow.h"

struct SMultiLineEditableText : SWidget
{
	enum ECursorAlignment
	{
		Left = 0x0,
		Right = 0x1,
	};

	char __padding[0x3d0L];
	TAttribute<FText>& BoundTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SMultiLineEditableText.BoundText"); }
	FTextSnapshot& BoundTextLastTickField() { return *GetNativePointerField<FTextSnapshot*>(this, "SMultiLineEditableText.BoundTextLastTick"); }
	FTextBlockStyle& TextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "SMultiLineEditableText.TextStyle"); }
	TAttribute<float>& WrapTextAtField() { return *GetNativePointerField<TAttribute<float>*>(this, "SMultiLineEditableText.WrapTextAt"); }
	TAttribute<bool>& AutoWrapTextField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SMultiLineEditableText.AutoWrapText"); }
	FVector2D& CachedSizeField() { return *GetNativePointerField<FVector2D*>(this, "SMultiLineEditableText.CachedSize"); }
	FVector2D& ScrollOffsetField() { return *GetNativePointerField<FVector2D*>(this, "SMultiLineEditableText.ScrollOffset"); }
	TAttribute<FMargin>& MarginField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "SMultiLineEditableText.Margin"); }
	TAttribute<enum ETextJustify::Type>& JustificationField() { return *GetNativePointerField<TAttribute<enum ETextJustify::Type>*>(this, "SMultiLineEditableText.Justification"); }
	TAttribute<float>& LineHeightPercentageField() { return *GetNativePointerField<TAttribute<float>*>(this, "SMultiLineEditableText.LineHeightPercentage"); }
	TSharedPtr<SMultiLineEditableText::FCursorLineHighlighter,0>& CursorLineHighlighterField() { return *GetNativePointerField<TSharedPtr<SMultiLineEditableText::FCursorLineHighlighter,0>*>(this, "SMultiLineEditableText.CursorLineHighlighter"); }
	TSharedPtr<SMultiLineEditableText::FTextCompositionHighlighter,0>& TextCompositionHighlighterField() { return *GetNativePointerField<TSharedPtr<SMultiLineEditableText::FTextCompositionHighlighter,0>*>(this, "SMultiLineEditableText.TextCompositionHighlighter"); }
	TSharedPtr<SMultiLineEditableText::FTextSelectionRunRenderer,0>& TextSelectionRunRendererField() { return *GetNativePointerField<TSharedPtr<SMultiLineEditableText::FTextSelectionRunRenderer,0>*>(this, "SMultiLineEditableText.TextSelectionRunRenderer"); }
	TOptional<FTextLocation>& SelectionStartField() { return *GetNativePointerField<TOptional<FTextLocation>*>(this, "SMultiLineEditableText.SelectionStart"); }
	SMultiLineEditableText::FCursorInfo& CursorInfoField() { return *GetNativePointerField<SMultiLineEditableText::FCursorInfo*>(this, "SMultiLineEditableText.CursorInfo"); }
	float& PreferredCursorScreenOffsetInLineField() { return *GetNativePointerField<float*>(this, "SMultiLineEditableText.PreferredCursorScreenOffsetInLine"); }
	TAttribute<bool>& bSelectAllTextWhenFocusedField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SMultiLineEditableText.bSelectAllTextWhenFocused"); }
	bool& bIsDragSelectingField() { return *GetNativePointerField<bool*>(this, "SMultiLineEditableText.bIsDragSelecting"); }
	bool& bWasFocusedByLastMouseDownField() { return *GetNativePointerField<bool*>(this, "SMultiLineEditableText.bWasFocusedByLastMouseDown"); }
	bool& bHasDragSelectedSinceFocusedField() { return *GetNativePointerField<bool*>(this, "SMultiLineEditableText.bHasDragSelectedSinceFocused"); }
	TOptional<SMultiLineEditableText::FScrollInfo>& PositionToScrollIntoViewField() { return *GetNativePointerField<TOptional<SMultiLineEditableText::FScrollInfo>*>(this, "SMultiLineEditableText.PositionToScrollIntoView"); }
	TArray<SMultiLineEditableText::FUndoState>& UndoStatesField() { return *GetNativePointerField<TArray<SMultiLineEditableText::FUndoState>*>(this, "SMultiLineEditableText.UndoStates"); }
	int& CurrentUndoLevelField() { return *GetNativePointerField<int*>(this, "SMultiLineEditableText.CurrentUndoLevel"); }
	SMultiLineEditableText::FUndoState& StateBeforeChangingTextField() { return *GetNativePointerField<SMultiLineEditableText::FUndoState*>(this, "SMultiLineEditableText.StateBeforeChangingText"); }
	bool& bIsChangingTextField() { return *GetNativePointerField<bool*>(this, "SMultiLineEditableText.bIsChangingText"); }
	TAttribute<bool>& IsReadOnlyField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SMultiLineEditableText.IsReadOnly"); }
	TSharedPtr<SScrollBar,0>& HScrollBarField() { return *GetNativePointerField<TSharedPtr<SScrollBar,0>*>(this, "SMultiLineEditableText.HScrollBar"); }
	TSharedPtr<SScrollBar,0>& VScrollBarField() { return *GetNativePointerField<TSharedPtr<SScrollBar,0>*>(this, "SMultiLineEditableText.VScrollBar"); }
	TSharedPtr<FExtender,0>& MenuExtenderField() { return *GetNativePointerField<TSharedPtr<FExtender,0>*>(this, "SMultiLineEditableText.MenuExtender"); }
	TWeakPtr<SWindow,0>& ContextMenuWindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SMultiLineEditableText.ContextMenuWindow"); }
	TSharedPtr<SMultiLineEditableText::FTextInputMethodContext,0>& TextInputMethodContextField() { return *GetNativePointerField<TSharedPtr<SMultiLineEditableText::FTextInputMethodContext,0>*>(this, "SMultiLineEditableText.TextInputMethodContext"); }
	TSharedPtr<ITextInputMethodChangeNotifier,0>& TextInputMethodChangeNotifierField() { return *GetNativePointerField<TSharedPtr<ITextInputMethodChangeNotifier,0>*>(this, "SMultiLineEditableText.TextInputMethodChangeNotifier"); }
	bool& bTextChangedByVirtualKeyboardField() { return *GetNativePointerField<bool*>(this, "SMultiLineEditableText.bTextChangedByVirtualKeyboard"); }
	char& ModifierKeyForNewLineField() { return *GetNativePointerField<char*>(this, "SMultiLineEditableText.ModifierKeyForNewLine"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SMultiLineEditableText.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SMultiLineEditableText.FArguments"); }
	SMultiLineEditableText::FArguments * FArguments(TSharedPtr<SScrollBar,0> InArg) { return NativeCall<SMultiLineEditableText::FArguments *, TSharedPtr<SScrollBar,0>>(this, "SMultiLineEditableText.FArguments", InArg); }
	SMultiLineEditableText::FArguments * FArguments(TSharedPtr<ITextLayoutMarshaller,0> InArg) { return NativeCall<SMultiLineEditableText::FArguments *, TSharedPtr<ITextLayoutMarshaller,0>>(this, "SMultiLineEditableText.FArguments", InArg); }
	SMultiLineEditableText::FArguments * FArguments(TSharedPtr<SScrollBar,0> InArg) { return NativeCall<SMultiLineEditableText::FArguments *, TSharedPtr<SScrollBar,0>>(this, "SMultiLineEditableText.FArguments", InArg); }
	void FUndoState() { NativeCall<void>(this, "SMultiLineEditableText.FUndoState"); }
	SMultiLineEditableText::FUndoState * FUndoState(const SMultiLineEditableText::FUndoState * __that) { return NativeCall<SMultiLineEditableText::FUndoState *, const SMultiLineEditableText::FUndoState *>(this, "SMultiLineEditableText.FUndoState", __that); }
	bool AnyTextSelected() { return NativeCall<bool>(this, "SMultiLineEditableText.AnyTextSelected"); }
	void BackspaceChar() { NativeCall<void>(this, "SMultiLineEditableText.BackspaceChar"); }
	void FTextInputMethodContext() { NativeCall<void>(this, "SMultiLineEditableText.FTextInputMethodContext"); }
	void BeginDragSelection() { NativeCall<void>(this, "SMultiLineEditableText.BeginDragSelection"); }
	void CacheDesiredSize() { NativeCall<void>(this, "SMultiLineEditableText.CacheDesiredSize"); }
	bool CanExecuteCopy() { return NativeCall<bool>(this, "SMultiLineEditableText.CanExecuteCopy"); }
	bool CanExecuteCut() { return NativeCall<bool>(this, "SMultiLineEditableText.CanExecuteCut"); }
	bool CanExecuteDelete() { return NativeCall<bool>(this, "SMultiLineEditableText.CanExecuteDelete"); }
	bool CanExecutePaste() { return NativeCall<bool>(this, "SMultiLineEditableText.CanExecutePaste"); }
	bool CanExecuteSelectAll() { return NativeCall<bool>(this, "SMultiLineEditableText.CanExecuteSelectAll"); }
	bool CanExecuteUndo() { return NativeCall<bool>(this, "SMultiLineEditableText.CanExecuteUndo"); }
	void ClearSelection() { NativeCall<void>(this, "SMultiLineEditableText.ClearSelection"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SMultiLineEditableText.ComputeDesiredSize", result); }
	void Construct(const SMultiLineEditableText::FArguments * InArgs) { NativeCall<void, const SMultiLineEditableText::FArguments *>(this, "SMultiLineEditableText.Construct", InArgs); }
	void CopySelectedTextToClipboard() { NativeCall<void>(this, "SMultiLineEditableText.CopySelectedTextToClipboard"); }
	static TSharedRef<SMultiLineEditableText::FCursorLineHighlighter,0> * FCursorLineHighlighter(TSharedRef<SMultiLineEditableText::FCursorLineHighlighter,0> * result, const SMultiLineEditableText::FCursorInfo * InCursorInfo) { return NativeCall<TSharedRef<SMultiLineEditableText::FCursorLineHighlighter,0> *, TSharedRef<SMultiLineEditableText::FCursorLineHighlighter,0> *, const SMultiLineEditableText::FCursorInfo *>(nullptr, "SMultiLineEditableText.FCursorLineHighlighter", result, InCursorInfo); }
	static TSharedRef<SMultiLineEditableText::FTextCompositionHighlighter,0> * FTextCompositionHighlighter(TSharedRef<SMultiLineEditableText::FTextCompositionHighlighter,0> * result) { return NativeCall<TSharedRef<SMultiLineEditableText::FTextCompositionHighlighter,0> *, TSharedRef<SMultiLineEditableText::FTextCompositionHighlighter,0> *>(nullptr, "SMultiLineEditableText.FTextCompositionHighlighter", result); }
	static TSharedRef<SMultiLineEditableText::FTextSelectionRunRenderer,0> * FTextSelectionRunRenderer(TSharedRef<SMultiLineEditableText::FTextSelectionRunRenderer,0> * result) { return NativeCall<TSharedRef<SMultiLineEditableText::FTextSelectionRunRenderer,0> *, TSharedRef<SMultiLineEditableText::FTextSelectionRunRenderer,0> *>(nullptr, "SMultiLineEditableText.FTextSelectionRunRenderer", result); }
	void CutSelectedTextToClipboard() { NativeCall<void>(this, "SMultiLineEditableText.CutSelectedTextToClipboard"); }
	void DeleteChar() { NativeCall<void>(this, "SMultiLineEditableText.DeleteChar"); }
	void DeleteSelectedText() { NativeCall<void>(this, "SMultiLineEditableText.DeleteSelectedText"); }
	void FTextInputMethodContext() { NativeCall<void>(this, "SMultiLineEditableText.FTextInputMethodContext"); }
	void EndDragSelection() { NativeCall<void>(this, "SMultiLineEditableText.EndDragSelection"); }
	void ExecuteDeleteAction() { NativeCall<void>(this, "SMultiLineEditableText.ExecuteDeleteAction"); }
	void FinishChangingText() { NativeCall<void>(this, "SMultiLineEditableText.FinishChangingText"); }
	void ForceRefreshTextLayout(const FText * CurrentText) { NativeCall<void, const FText *>(this, "SMultiLineEditableText.ForceRefreshTextLayout", CurrentText); }
	int FTextInputMethodContext(const FVector2D * Point) { return NativeCall<int, const FVector2D *>(this, "SMultiLineEditableText.FTextInputMethodContext", Point); }
	FText * GetEditableText(FText * result) { return NativeCall<FText *, FText *>(this, "SMultiLineEditableText.GetEditableText", result); }
	const FText * GetHintText(const FText * result) { return NativeCall<const FText *, const FText *>(this, "SMultiLineEditableText.GetHintText", result); }
	bool GetIsReadOnly() { return NativeCall<bool>(this, "SMultiLineEditableText.GetIsReadOnly"); }
	void FTextInputMethodContext(FVector2D * Position, FVector2D * Size) { NativeCall<void, FVector2D *, FVector2D *>(this, "SMultiLineEditableText.FTextInputMethodContext", Position, Size); }
	void FTextInputMethodContext(unsigned int * BeginIndex, unsigned int * Length, ITextInputMethodContext::ECaretPosition * OutCaretPosition) { NativeCall<void, unsigned int *, unsigned int *, ITextInputMethodContext::ECaretPosition *>(this, "SMultiLineEditableText.FTextInputMethodContext", BeginIndex, Length, OutCaretPosition); }
	const FText * GetText() { return NativeCall<const FText *>(this, "SMultiLineEditableText.GetText"); }
	bool FTextInputMethodContext(const unsigned int BeginIndex, const unsigned int Length, FVector2D * Position, FVector2D * Size) { return NativeCall<bool, const unsigned int, const unsigned int, FVector2D *, FVector2D *>(this, "SMultiLineEditableText.FTextInputMethodContext", BeginIndex, Length, Position, Size); }
	void FTextInputMethodContext(const unsigned int BeginIndex, const unsigned int Length, FString * OutString) { NativeCall<void, const unsigned int, const unsigned int, FString *>(this, "SMultiLineEditableText.FTextInputMethodContext", BeginIndex, Length, OutString); }
	unsigned int FTextInputMethodContext() { return NativeCall<unsigned int>(this, "SMultiLineEditableText.FTextInputMethodContext"); }
	void GoTo(const FTextLocation * NewLocation) { NativeCall<void, const FTextLocation *>(this, "SMultiLineEditableText.GoTo", NewLocation); }
	bool HasDragSelectedSinceFocused() { return NativeCall<bool>(this, "SMultiLineEditableText.HasDragSelectedSinceFocused"); }
	void InsertTextAtCursorImpl(const FString * InString) { NativeCall<void, const FString *>(this, "SMultiLineEditableText.InsertTextAtCursorImpl", InString); }
	bool IsAtBeginningOfDocument(const FTextLocation * Location) { return NativeCall<bool, const FTextLocation *>(this, "SMultiLineEditableText.IsAtBeginningOfDocument", Location); }
	bool IsAtWordStart(const FTextLocation * Location) { return NativeCall<bool, const FTextLocation *>(this, "SMultiLineEditableText.IsAtWordStart", Location); }
	bool IsDragSelecting() { return NativeCall<bool>(this, "SMultiLineEditableText.IsDragSelecting"); }
	bool FTextInputMethodContext() { return NativeCall<bool>(this, "SMultiLineEditableText.FTextInputMethodContext"); }
	bool IsTextSelectedAt(const FGeometry * MyGeometry, const FVector2D * ScreenSpacePosition) { return NativeCall<bool, const FGeometry *, const FVector2D *>(this, "SMultiLineEditableText.IsTextSelectedAt", MyGeometry, ScreenSpacePosition); }
	void JumpTo(ETextLocation JumpLocation, ECursorAction Action) { NativeCall<void, ETextLocation, ECursorAction>(this, "SMultiLineEditableText.JumpTo", JumpLocation, Action); }
	void LoadText() { NativeCall<void>(this, "SMultiLineEditableText.LoadText"); }
	void MakeUndoState(SMultiLineEditableText::FUndoState * OutUndoState) { NativeCall<void, SMultiLineEditableText::FUndoState *>(this, "SMultiLineEditableText.MakeUndoState", OutUndoState); }
	FReply * MoveCursor(FReply * result, FMoveCursor Args) { return NativeCall<FReply *, FReply *, FMoveCursor>(this, "SMultiLineEditableText.MoveCursor", result, Args); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SMultiLineEditableText.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "SMultiLineEditableText.OnCursorQuery", result, MyGeometry, CursorEvent); }
	void OnEnter() { NativeCall<void>(this, "SMultiLineEditableText.OnEnter"); }
	void OnHScrollBarMoved(const float InScrollOffsetFraction) { NativeCall<void, const float>(this, "SMultiLineEditableText.OnHScrollBarMoved", InScrollOffsetFraction); }
	FReply * OnKeyChar(FReply * result, const FGeometry * MyGeometry, const FCharacterEvent * InCharacterEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FCharacterEvent *>(this, "SMultiLineEditableText.OnKeyChar", result, MyGeometry, InCharacterEvent); }
	FReply * OnKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SMultiLineEditableText.OnKeyDown", result, MyGeometry, InKeyboardEvent); }
	void OnKeyboardFocusLost(const FKeyboardFocusEvent * InKeyboardFocusEvent) { NativeCall<void, const FKeyboardFocusEvent *>(this, "SMultiLineEditableText.OnKeyboardFocusLost", InKeyboardFocusEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SMultiLineEditableText.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SMultiLineEditableText.OnMouseButtonDoubleClick", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SMultiLineEditableText.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SMultiLineEditableText.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SMultiLineEditableText.OnMouseMove", result, MyGeometry, MouseEvent); }
	FReply * OnMouseWheel(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SMultiLineEditableText.OnMouseWheel", result, MyGeometry, MouseEvent); }
	int FCursorLineHighlighter(const FPaintArgs * Args, const FTextLayout::FLineView * Line, const float OffsetX, const float Width, const FTextBlockStyle * DefaultStyle, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FTextLayout::FLineView *, const float, const float, const FTextBlockStyle *, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SMultiLineEditableText.FCursorLineHighlighter", Args, Line, OffsetX, Width, DefaultStyle, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	int FTextCompositionHighlighter(const FPaintArgs * Args, const FTextLayout::FLineView * Line, const float OffsetX, const float Width, const FTextBlockStyle * DefaultStyle, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FTextLayout::FLineView *, const float, const float, const FTextBlockStyle *, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SMultiLineEditableText.FTextCompositionHighlighter", Args, Line, OffsetX, Width, DefaultStyle, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	int FTextSelectionRunRenderer(const FPaintArgs * Args, const FTextLayout::FLineView * Line, const TSharedRef<ISlateRun,0> * Run, const TSharedRef<ILayoutBlock,0> * Block, const FTextBlockStyle * DefaultStyle, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FTextLayout::FLineView *, const TSharedRef<ISlateRun,0> *, const TSharedRef<ILayoutBlock,0> *, const FTextBlockStyle *, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SMultiLineEditableText.FTextSelectionRunRenderer", Args, Line, Run, Block, DefaultStyle, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SMultiLineEditableText.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void OnVScrollBarMoved(const float InScrollOffsetFraction) { NativeCall<void, const float>(this, "SMultiLineEditableText.OnVScrollBarMoved", InScrollOffsetFraction); }
	void OnWindowClosed(const TSharedRef<SWindow,0> * __formal) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "SMultiLineEditableText.OnWindowClosed", __formal); }
	void PasteTextFromClipboard() { NativeCall<void>(this, "SMultiLineEditableText.PasteTextFromClipboard"); }
	void PushUndoState(const SMultiLineEditableText::FUndoState * InUndoState) { NativeCall<void, const SMultiLineEditableText::FUndoState *>(this, "SMultiLineEditableText.PushUndoState", InUndoState); }
	void Redo() { NativeCall<void>(this, "SMultiLineEditableText.Redo"); }
	void Refresh() { NativeCall<void>(this, "SMultiLineEditableText.Refresh"); }
	void SaveText(const FText * TextToSave) { NativeCall<void, const FText *>(this, "SMultiLineEditableText.SaveText", TextToSave); }
	FTextLocation * ScanForWordBoundary(FTextLocation * result, const FTextLocation * CurrentLocation, char Direction) { return NativeCall<FTextLocation *, FTextLocation *, const FTextLocation *, char>(this, "SMultiLineEditableText.ScanForWordBoundary", result, CurrentLocation, Direction); }
	void ScrollTo(const FTextLocation * NewLocation) { NativeCall<void, const FTextLocation *>(this, "SMultiLineEditableText.ScrollTo", NewLocation); }
	void SelectAllText() { NativeCall<void>(this, "SMultiLineEditableText.SelectAllText"); }
	bool SelectAllTextWhenFocused() { return NativeCall<bool>(this, "SMultiLineEditableText.SelectAllTextWhenFocused"); }
	void SelectWordAt(const FGeometry * MyGeometry, const FVector2D * ScreenSpacePosition) { NativeCall<void, const FGeometry *, const FVector2D *>(this, "SMultiLineEditableText.SelectWordAt", MyGeometry, ScreenSpacePosition); }
	void FCursorInfo(const TSharedPtr<FTextLayout,0> * TextLayout, const FTextLocation * InCursorPosition) { NativeCall<void, const TSharedPtr<FTextLayout,0> *, const FTextLocation *>(this, "SMultiLineEditableText.FCursorInfo", TextLayout, InCursorPosition); }
	bool SetEditableText(const FText * TextToSet, const bool bForce) { return NativeCall<bool, const FText *, const bool>(this, "SMultiLineEditableText.SetEditableText", TextToSet, bForce); }
	void SetHasDragSelectedSinceFocused(bool Value) { NativeCall<void, bool>(this, "SMultiLineEditableText.SetHasDragSelectedSinceFocused", Value); }
	void FTextInputMethodContext(const unsigned int BeginIndex, const unsigned int Length, const ITextInputMethodContext::ECaretPosition InCaretPosition) { NativeCall<void, const unsigned int, const unsigned int, const ITextInputMethodContext::ECaretPosition>(this, "SMultiLineEditableText.FTextInputMethodContext", BeginIndex, Length, InCaretPosition); }
	void SetText(const TAttribute<FText> * InText) { NativeCall<void, const TAttribute<FText> *>(this, "SMultiLineEditableText.SetText", InText); }
	void SetTextFromVirtualKeyboard(const FText * InNewText) { NativeCall<void, const FText *>(this, "SMultiLineEditableText.SetTextFromVirtualKeyboard", InNewText); }
	void FTextInputMethodContext(const unsigned int BeginIndex, const unsigned int Length, const FString * InString) { NativeCall<void, const unsigned int, const unsigned int, const FString *>(this, "SMultiLineEditableText.FTextInputMethodContext", BeginIndex, Length, InString); }
	void SetWasFocusedByLastMouseDown(bool Value) { NativeCall<void, bool>(this, "SMultiLineEditableText.SetWasFocusedByLastMouseDown", Value); }
	void StartChangingText() { NativeCall<void>(this, "SMultiLineEditableText.StartChangingText"); }
	void SummonContextMenu(const FVector2D * InLocation) { NativeCall<void, const FVector2D *>(this, "SMultiLineEditableText.SummonContextMenu", InLocation); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SMultiLineEditableText.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	void TranslateLocationVertical(const FTextLocation * Location, char Direction, float GeometryScale, FTextLocation * OutCursorPosition, TOptional<enum SMultiLineEditableText::ECursorAlignment> * OutCursorAlignment) { NativeCall<void, const FTextLocation *, char, float, FTextLocation *, TOptional<enum SMultiLineEditableText::ECursorAlignment> *>(this, "SMultiLineEditableText.TranslateLocationVertical", Location, Direction, GeometryScale, OutCursorPosition, OutCursorAlignment); }
	FTextLocation * TranslatedLocation(FTextLocation * result, const FTextLocation * Location, char Direction) { return NativeCall<FTextLocation *, FTextLocation *, const FTextLocation *, char>(this, "SMultiLineEditableText.TranslatedLocation", result, Location, Direction); }
	void TypeChar(const int Character) { NativeCall<void, const int>(this, "SMultiLineEditableText.TypeChar", Character); }
	void Undo() { NativeCall<void>(this, "SMultiLineEditableText.Undo"); }
	void FTextInputMethodContext(const int InBeginIndex, const unsigned int InLength) { NativeCall<void, const int, const unsigned int>(this, "SMultiLineEditableText.FTextInputMethodContext", InBeginIndex, InLength); }
	void UpdateCursorHighlight() { NativeCall<void>(this, "SMultiLineEditableText.UpdateCursorHighlight"); }
	void UpdatePreferredCursorScreenOffsetInLine() { NativeCall<void>(this, "SMultiLineEditableText.UpdatePreferredCursorScreenOffsetInLine"); }
	void VirtualKeyboardCancelled() { NativeCall<void>(this, "SMultiLineEditableText.VirtualKeyboardCancelled"); }
	bool WasFocusedByLastMouseDown() { return NativeCall<bool>(this, "SMultiLineEditableText.WasFocusedByLastMouseDown"); }
};

