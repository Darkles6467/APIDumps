#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FMoveCursor.h"
#include "SWindow.h"
#include "FSlateColor.h"

struct SEditableText : SLeafWidget
{
	char __padding[0x3c0L];
	TAttribute<FText>& TextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SEditableText.Text"); }
	TAttribute<FText>& HintTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SEditableText.HintText"); }
	TAttribute<FSlateFontInfo>& FontField() { return *GetNativePointerField<TAttribute<FSlateFontInfo>*>(this, "SEditableText.Font"); }
	TAttribute<FSlateColor>& ColorAndOpacityField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SEditableText.ColorAndOpacity"); }
	TAttribute<bool>& IsReadOnlyField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SEditableText.IsReadOnly"); }
	TAttribute<bool>& IsPasswordField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SEditableText.IsPassword"); }
	TAttribute<bool>& IsCaretMovedWhenGainFocusField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SEditableText.IsCaretMovedWhenGainFocus"); }
	TAttribute<bool>& bSelectAllTextWhenFocusedField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SEditableText.bSelectAllTextWhenFocused"); }
	TAttribute<bool>& RevertTextOnEscapeField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SEditableText.RevertTextOnEscape"); }
	TAttribute<bool>& ClearKeyboardFocusOnCommitField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SEditableText.ClearKeyboardFocusOnCommit"); }
	TAttribute<bool>& SelectAllTextOnCommitField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SEditableText.SelectAllTextOnCommit"); }
	FText& EditedTextField() { return *GetNativePointerField<FText*>(this, "SEditableText.EditedText"); }
	FText& OriginalTextField() { return *GetNativePointerField<FText*>(this, "SEditableText.OriginalText"); }
	FScrollHelper& ScrollHelperField() { return *GetNativePointerField<FScrollHelper*>(this, "SEditableText.ScrollHelper"); }
	int& CaretPositionField() { return *GetNativePointerField<int*>(this, "SEditableText.CaretPosition"); }
	TSpring1D<float>& CaretVisualPositionSpringField() { return *GetNativePointerField<TSpring1D<float>*>(this, "SEditableText.CaretVisualPositionSpring"); }
	long double& LastCaretInteractionTimeField() { return *GetNativePointerField<long double*>(this, "SEditableText.LastCaretInteractionTime"); }
	TSpring1D<float>& SelectionTargetLeftSpringField() { return *GetNativePointerField<TSpring1D<float>*>(this, "SEditableText.SelectionTargetLeftSpring"); }
	TSpring1D<float>& SelectionTargetRightSpringField() { return *GetNativePointerField<TSpring1D<float>*>(this, "SEditableText.SelectionTargetRightSpring"); }
	long double& LastSelectionInteractionTimeField() { return *GetNativePointerField<long double*>(this, "SEditableText.LastSelectionInteractionTime"); }
	bool& bIsDragSelectingField() { return *GetNativePointerField<bool*>(this, "SEditableText.bIsDragSelecting"); }
	bool& bWasFocusedByLastMouseDownField() { return *GetNativePointerField<bool*>(this, "SEditableText.bWasFocusedByLastMouseDown"); }
	bool& bHasDragSelectedSinceFocusedField() { return *GetNativePointerField<bool*>(this, "SEditableText.bHasDragSelectedSinceFocused"); }
	bool& bHasDragSelectedSinceMouseDownField() { return *GetNativePointerField<bool*>(this, "SEditableText.bHasDragSelectedSinceMouseDown"); }
	int& CurrentUndoLevelField() { return *GetNativePointerField<int*>(this, "SEditableText.CurrentUndoLevel"); }
	bool& bIsChangingTextField() { return *GetNativePointerField<bool*>(this, "SEditableText.bIsChangingText"); }
	TWeakPtr<SWindow,0>& ContextMenuWindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SEditableText.ContextMenuWindow"); }
	TAttribute<float>& MinDesiredWidthField() { return *GetNativePointerField<TAttribute<float>*>(this, "SEditableText.MinDesiredWidth"); }
	TSharedPtr<FExtender,0>& MenuExtenderField() { return *GetNativePointerField<TSharedPtr<FExtender,0>*>(this, "SEditableText.MenuExtender"); }
	TSharedPtr<ITextInputMethodChangeNotifier,0>& TextInputMethodChangeNotifierField() { return *GetNativePointerField<TSharedPtr<ITextInputMethodChangeNotifier,0>*>(this, "SEditableText.TextInputMethodChangeNotifier"); }
	TAttribute<enum EKeyboardType>& VirtualKeyboardTypeField() { return *GetNativePointerField<TAttribute<enum EKeyboardType>*>(this, "SEditableText.VirtualKeyboardType"); }
	bool& bTextChangedByVirtualKeyboardField() { return *GetNativePointerField<bool*>(this, "SEditableText.bTextChangedByVirtualKeyboard"); }
	bool& bIsIMEActivateField() { return *GetNativePointerField<bool*>(this, "SEditableText.bIsIMEActivate"); }

	// Functions

	const FText * GetHintText(const FText * result) { return NativeCall<const FText *, const FText *>(this, "SEditableText.GetHintText", result); }
	EKeyboardType GetVirtualKeyboardType() { return NativeCall<EKeyboardType>(this, "SEditableText.GetVirtualKeyboardType"); }
	void FArguments() { NativeCall<void>(this, "SEditableText.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SEditableText.FArguments"); }
	bool AnyTextSelected() { return NativeCall<bool>(this, "SEditableText.AnyTextSelected"); }
	void BackspaceChar() { NativeCall<void>(this, "SEditableText.BackspaceChar"); }
	void FTextInputMethodContext() { NativeCall<void>(this, "SEditableText.FTextInputMethodContext"); }
	void BeginDragSelection() { NativeCall<void>(this, "SEditableText.BeginDragSelection"); }
	bool CanExecuteCopy() { return NativeCall<bool>(this, "SEditableText.CanExecuteCopy"); }
	bool CanExecuteCut() { return NativeCall<bool>(this, "SEditableText.CanExecuteCut"); }
	bool CanExecuteDelete() { return NativeCall<bool>(this, "SEditableText.CanExecuteDelete"); }
	bool CanExecutePaste() { return NativeCall<bool>(this, "SEditableText.CanExecutePaste"); }
	bool CanExecuteSelectAll() { return NativeCall<bool>(this, "SEditableText.CanExecuteSelectAll"); }
	bool CanExecuteUndo() { return NativeCall<bool>(this, "SEditableText.CanExecuteUndo"); }
	bool CanTypeCharacter(const wchar_t CharInQuestion) { return NativeCall<bool, const wchar_t>(this, "SEditableText.CanTypeCharacter", CharInQuestion); }
	void ClearSelection() { NativeCall<void>(this, "SEditableText.ClearSelection"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SEditableText.ComputeDesiredSize", result); }
	void Construct(const SEditableText::FArguments * InArgs) { NativeCall<void, const SEditableText::FArguments *>(this, "SEditableText.Construct", InArgs); }
	void CopySelectedTextToClipboard() { NativeCall<void>(this, "SEditableText.CopySelectedTextToClipboard"); }
	void CutSelectedTextToClipboard() { NativeCall<void>(this, "SEditableText.CutSelectedTextToClipboard"); }
	void DeleteChar() { NativeCall<void>(this, "SEditableText.DeleteChar"); }
	void DeleteSelectedText() { NativeCall<void>(this, "SEditableText.DeleteSelectedText"); }
	void FTextInputMethodContext() { NativeCall<void>(this, "SEditableText.FTextInputMethodContext"); }
	void EndDragSelection() { NativeCall<void>(this, "SEditableText.EndDragSelection"); }
	void ExecuteDeleteAction() { NativeCall<void>(this, "SEditableText.ExecuteDeleteAction"); }
	int FindClickedCharacterIndex(const FVector2D * InLocalCursorPosition, float GeometryScale) { return NativeCall<int, const FVector2D *, float>(this, "SEditableText.FindClickedCharacterIndex", InLocalCursorPosition, GeometryScale); }
	void FinishChangingText() { NativeCall<void>(this, "SEditableText.FinishChangingText"); }
	int FTextInputMethodContext(const FVector2D * Point) { return NativeCall<int, const FVector2D *>(this, "SEditableText.FTextInputMethodContext", Point); }
	bool GetIsReadOnly() { return NativeCall<bool>(this, "SEditableText.GetIsReadOnly"); }
	void FTextInputMethodContext(FVector2D * Position, FVector2D * Size) { NativeCall<void, FVector2D *, FVector2D *>(this, "SEditableText.FTextInputMethodContext", Position, Size); }
	void FTextInputMethodContext(unsigned int * BeginIndex, unsigned int * Length, ITextInputMethodContext::ECaretPosition * OutCaretPosition) { NativeCall<void, unsigned int *, unsigned int *, ITextInputMethodContext::ECaretPosition *>(this, "SEditableText.FTextInputMethodContext", BeginIndex, Length, OutCaretPosition); }
	FString * GetStringToRender(FString * result) { return NativeCall<FString *, FString *>(this, "SEditableText.GetStringToRender", result); }
	bool FTextInputMethodContext(const unsigned int BeginIndex, const unsigned int Length, FVector2D * Position, FVector2D * Size) { return NativeCall<bool, const unsigned int, const unsigned int, FVector2D *, FVector2D *>(this, "SEditableText.FTextInputMethodContext", BeginIndex, Length, Position, Size); }
	void FTextInputMethodContext(const unsigned int BeginIndex, const unsigned int Length, FString * OutString) { NativeCall<void, const unsigned int, const unsigned int, FString *>(this, "SEditableText.FTextInputMethodContext", BeginIndex, Length, OutString); }
	unsigned int FTextInputMethodContext() { return NativeCall<unsigned int>(this, "SEditableText.FTextInputMethodContext"); }
	bool HasDragSelectedSinceFocused() { return NativeCall<bool>(this, "SEditableText.HasDragSelectedSinceFocused"); }
	bool HasTextChangedFromOriginal() { return NativeCall<bool>(this, "SEditableText.HasTextChangedFromOriginal"); }
	bool IsAtWordStart(const int Location) { return NativeCall<bool, const int>(this, "SEditableText.IsAtWordStart", Location); }
	bool IsDragSelecting() { return NativeCall<bool>(this, "SEditableText.IsDragSelecting"); }
	bool FTextInputMethodContext() { return NativeCall<bool>(this, "SEditableText.FTextInputMethodContext"); }
	bool IsTextSelectedAt(const FGeometry * MyGeometry, const FVector2D * ScreenSpacePosition) { return NativeCall<bool, const FGeometry *, const FVector2D *>(this, "SEditableText.IsTextSelectedAt", MyGeometry, ScreenSpacePosition); }
	void JumpTo(ETextLocation JumpLocation, ECursorAction Action) { NativeCall<void, ETextLocation, ECursorAction>(this, "SEditableText.JumpTo", JumpLocation, Action); }
	void LoadText() { NativeCall<void>(this, "SEditableText.LoadText"); }
	FReply * MoveCursor(FReply * result, FMoveCursor Args) { return NativeCall<FReply *, FReply *, FMoveCursor>(this, "SEditableText.MoveCursor", result, Args); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SEditableText.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SEditableText.OnDrop", result, MyGeometry, DragDropEvent); }
	void OnEnter() { NativeCall<void>(this, "SEditableText.OnEnter"); }
	FReply * OnEscape(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SEditableText.OnEscape", result); }
	FReply * OnKeyChar(FReply * result, const FGeometry * MyGeometry, const FCharacterEvent * InCharacterEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FCharacterEvent *>(this, "SEditableText.OnKeyChar", result, MyGeometry, InCharacterEvent); }
	FReply * OnKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SEditableText.OnKeyDown", result, MyGeometry, InKeyboardEvent); }
	void OnKeyboardFocusLost(const FKeyboardFocusEvent * InKeyboardFocusEvent) { NativeCall<void, const FKeyboardFocusEvent *>(this, "SEditableText.OnKeyboardFocusLost", InKeyboardFocusEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SEditableText.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SEditableText.OnMouseButtonDoubleClick", result, InMyGeometry, InMouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SEditableText.OnMouseButtonDown", result, InMyGeometry, InMouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SEditableText.OnMouseButtonUp", result, InMyGeometry, InMouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SEditableText.OnMouseMove", result, InMyGeometry, InMouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SEditableText.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void OnWindowClosed(const TSharedRef<SWindow,0> * __formal) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "SEditableText.OnWindowClosed", __formal); }
	void PasteTextFromClipboard() { NativeCall<void>(this, "SEditableText.PasteTextFromClipboard"); }
	void PushUndoState(const SEditableText::FUndoState * InUndoState) { NativeCall<void, const SEditableText::FUndoState *>(this, "SEditableText.PushUndoState", InUndoState); }
	void Redo() { NativeCall<void>(this, "SEditableText.Redo"); }
	void RestartSelectionTargetAnimation() { NativeCall<void>(this, "SEditableText.RestartSelectionTargetAnimation"); }
	void RestoreOriginalText() { NativeCall<void>(this, "SEditableText.RestoreOriginalText"); }
	void SaveText() { NativeCall<void>(this, "SEditableText.SaveText"); }
	int ScanForWordBoundary(const int Location, char Direction) { return NativeCall<int, const int, char>(this, "SEditableText.ScanForWordBoundary", Location, Direction); }
	void SelectAllText() { NativeCall<void>(this, "SEditableText.SelectAllText"); }
	bool SelectAllTextWhenFocused() { return NativeCall<bool>(this, "SEditableText.SelectAllTextWhenFocused"); }
	void SelectText(const int InOldCaretPosition) { NativeCall<void, const int>(this, "SEditableText.SelectText", InOldCaretPosition); }
	void SelectWordAt(const FGeometry * MyGeometry, const FVector2D * ScreenSpacePosition) { NativeCall<void, const FGeometry *, const FVector2D *>(this, "SEditableText.SelectWordAt", MyGeometry, ScreenSpacePosition); }
	void SetColorAndOpacity(TAttribute<FSlateColor> Color) { NativeCall<void, TAttribute<FSlateColor>>(this, "SEditableText.SetColorAndOpacity", Color); }
	void SetHasDragSelectedSinceFocused(bool Value) { NativeCall<void, bool>(this, "SEditableText.SetHasDragSelectedSinceFocused", Value); }
	void SetHintText(const TAttribute<FText> * InHintText) { NativeCall<void, const TAttribute<FText> *>(this, "SEditableText.SetHintText", InHintText); }
	void SetIMERegister(bool bIsActive) { NativeCall<void, bool>(this, "SEditableText.SetIMERegister", bIsActive); }
	void SetIsPassword(TAttribute<bool> InIsPassword) { NativeCall<void, TAttribute<bool>>(this, "SEditableText.SetIsPassword", InIsPassword); }
	void SetIsReadOnly(TAttribute<bool> InIsReadOnly) { NativeCall<void, TAttribute<bool>>(this, "SEditableText.SetIsReadOnly", InIsReadOnly); }
	void FTextInputMethodContext(const unsigned int BeginIndex, const unsigned int Length, const ITextInputMethodContext::ECaretPosition InCaretPosition) { NativeCall<void, const unsigned int, const unsigned int, const ITextInputMethodContext::ECaretPosition>(this, "SEditableText.FTextInputMethodContext", BeginIndex, Length, InCaretPosition); }
	void SetText(const TAttribute<FText> * InNewText) { NativeCall<void, const TAttribute<FText> *>(this, "SEditableText.SetText", InNewText); }
	void SetTextFromVirtualKeyboard(const FText * InNewText) { NativeCall<void, const FText *>(this, "SEditableText.SetTextFromVirtualKeyboard", InNewText); }
	void FTextInputMethodContext(const unsigned int BeginIndex, const unsigned int Length, const FString * InString) { NativeCall<void, const unsigned int, const unsigned int, const FString *>(this, "SEditableText.FTextInputMethodContext", BeginIndex, Length, InString); }
	void SetWasFocusedByLastMouseDown(bool Value) { NativeCall<void, bool>(this, "SEditableText.SetWasFocusedByLastMouseDown", Value); }
	void StartChangingText() { NativeCall<void>(this, "SEditableText.StartChangingText"); }
	void SummonContextMenu(const FVector2D * InLocation) { NativeCall<void, const FVector2D *>(this, "SEditableText.SummonContextMenu", InLocation); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SEditableText.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	void TypeChar(const int InChar) { NativeCall<void, const int>(this, "SEditableText.TypeChar", InChar); }
	void Undo() { NativeCall<void>(this, "SEditableText.Undo"); }
	void FTextInputMethodContext(const int InBeginIndex, const unsigned int InLength) { NativeCall<void, const int, const unsigned int>(this, "SEditableText.FTextInputMethodContext", InBeginIndex, InLength); }
	void VirtualKeyboardCancelled() { NativeCall<void>(this, "SEditableText.VirtualKeyboardCancelled"); }
	bool WasFocusedByLastMouseDown() { return NativeCall<bool>(this, "SEditableText.WasFocusedByLastMouseDown"); }
};

struct SKeyInputWidget : SEditableText
{
	char __padding[0x28L];

	// Functions

	void FArguments() { NativeCall<void>(this, "SKeyInputWidget.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SKeyInputWidget.FArguments"); }
	void TypeChar(int index) { NativeCall<void, int>(this, "SKeyInputWidget.TypeChar", index); }
	void Construct(const SKeyInputWidget::FArguments * InArgs) { NativeCall<void, const SKeyInputWidget::FArguments *>(this, "SKeyInputWidget.Construct", InArgs); }
	FReply * OnKeyUp(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SKeyInputWidget.OnKeyUp", result, MyGeometry, InKeyboardEvent); }
	void OnKeyboardFocusLost(const FKeyboardFocusEvent * InKeyboardFocusEvent) { NativeCall<void, const FKeyboardFocusEvent *>(this, "SKeyInputWidget.OnKeyboardFocusLost", InKeyboardFocusEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SKeyInputWidget.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SKeyInputWidget.OnMouseButtonDown", result, InMyGeometry, InMouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SKeyInputWidget.OnMouseButtonUp", result, InMyGeometry, InMouseEvent); }
	FReply * OnMouseWheel(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SKeyInputWidget.OnMouseWheel", result, InMyGeometry, InMouseEvent); }
};

