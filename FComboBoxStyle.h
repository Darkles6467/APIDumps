#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FComboBoxStyle : FSlateWidgetStyle
{
	char __padding[0x390L];
	FComboButtonStyle& ComboButtonStyleField() { return *GetNativePointerField<FComboButtonStyle*>(this, "FComboBoxStyle.ComboButtonStyle"); }
	FSlateSound& PressedSlateSoundField() { return *GetNativePointerField<FSlateSound*>(this, "FComboBoxStyle.PressedSlateSound"); }
	FSlateSound& SelectionChangeSlateSoundField() { return *GetNativePointerField<FSlateSound*>(this, "FComboBoxStyle.SelectionChangeSlateSound"); }
	FName& PressedSound_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FComboBoxStyle.PressedSound_DEPRECATED"); }
	FName& SelectionChangeSound_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FComboBoxStyle.SelectionChangeSound_DEPRECATED"); }

	// Functions

	static const FComboBoxStyle * GetDefault() { return NativeCall<const FComboBoxStyle *>(nullptr, "FComboBoxStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FComboBoxStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FComboBoxStyle.GetTypeName", result); }
	void PostSerialize(const FArchive * Ar) { NativeCall<void, const FArchive *>(this, "FComboBoxStyle.PostSerialize", Ar); }
	FComboBoxStyle * SetComboButtonStyle(const FComboButtonStyle * InComboButtonStyle) { return NativeCall<FComboBoxStyle *, const FComboButtonStyle *>(this, "FComboBoxStyle.SetComboButtonStyle", InComboButtonStyle); }
	FComboBoxStyle * operator=(const FComboBoxStyle * __that) { return NativeCall<FComboBoxStyle *, const FComboBoxStyle *>(this, "FComboBoxStyle.operator=", __that); }
};

