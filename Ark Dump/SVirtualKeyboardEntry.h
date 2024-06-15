#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SVirtualKeyboardEntry : SLeafWidget
{
	char __padding[0x1b8L];
	TAttribute<FText>& TextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SVirtualKeyboardEntry.Text"); }
	TAttribute<FText>& HintTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SVirtualKeyboardEntry.HintText"); }
	TAttribute<FSlateFontInfo>& FontField() { return *GetNativePointerField<TAttribute<FSlateFontInfo>*>(this, "SVirtualKeyboardEntry.Font"); }
	TAttribute<FSlateColor>& ColorAndOpacityField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SVirtualKeyboardEntry.ColorAndOpacity"); }
	TAttribute<bool>& IsReadOnlyField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SVirtualKeyboardEntry.IsReadOnly"); }
	TAttribute<bool>& ClearKeyboardFocusOnCommitField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SVirtualKeyboardEntry.ClearKeyboardFocusOnCommit"); }
	FText& EditedTextField() { return *GetNativePointerField<FText*>(this, "SVirtualKeyboardEntry.EditedText"); }
	FText& OriginalTextField() { return *GetNativePointerField<FText*>(this, "SVirtualKeyboardEntry.OriginalText"); }
	FScrollHelper& ScrollHelperField() { return *GetNativePointerField<FScrollHelper*>(this, "SVirtualKeyboardEntry.ScrollHelper"); }
	bool& bWasFocusedByLastMouseDownField() { return *GetNativePointerField<bool*>(this, "SVirtualKeyboardEntry.bWasFocusedByLastMouseDown"); }
	bool& bIsChangingTextField() { return *GetNativePointerField<bool*>(this, "SVirtualKeyboardEntry.bIsChangingText"); }
	TAttribute<float>& MinDesiredWidthField() { return *GetNativePointerField<TAttribute<float>*>(this, "SVirtualKeyboardEntry.MinDesiredWidth"); }
	TAttribute<enum EKeyboardType>& KeyboardTypeField() { return *GetNativePointerField<TAttribute<enum EKeyboardType>*>(this, "SVirtualKeyboardEntry.KeyboardType"); }
	bool& bNeedsUpdateField() { return *GetNativePointerField<bool*>(this, "SVirtualKeyboardEntry.bNeedsUpdate"); }
};

