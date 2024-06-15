#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FCheckBoxStyle : FSlateWidgetStyle
{
	char __padding[0x500L];
	TEnumAsByte<enum ESlateCheckBoxType::Type>& CheckBoxTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESlateCheckBoxType::Type>*>(this, "FCheckBoxStyle.CheckBoxType"); }
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "FCheckBoxStyle.Padding"); }
	FSlateColor& ForegroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "FCheckBoxStyle.ForegroundColor"); }
	FSlateColor& BorderBackgroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "FCheckBoxStyle.BorderBackgroundColor"); }
	FSlateSound& CheckedSlateSoundField() { return *GetNativePointerField<FSlateSound*>(this, "FCheckBoxStyle.CheckedSlateSound"); }
	FSlateSound& UncheckedSlateSoundField() { return *GetNativePointerField<FSlateSound*>(this, "FCheckBoxStyle.UncheckedSlateSound"); }
	FSlateSound& HoveredSlateSoundField() { return *GetNativePointerField<FSlateSound*>(this, "FCheckBoxStyle.HoveredSlateSound"); }
	FName& CheckedSound_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FCheckBoxStyle.CheckedSound_DEPRECATED"); }
	FName& UncheckedSound_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FCheckBoxStyle.UncheckedSound_DEPRECATED"); }
	FName& HoveredSound_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FCheckBoxStyle.HoveredSound_DEPRECATED"); }

	// Functions

	static const FCheckBoxStyle * GetDefault() { return NativeCall<const FCheckBoxStyle *>(nullptr, "FCheckBoxStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FCheckBoxStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FCheckBoxStyle.GetTypeName", result); }
	void PostSerialize(const FArchive * Ar) { NativeCall<void, const FArchive *>(this, "FCheckBoxStyle.PostSerialize", Ar); }
	FCheckBoxStyle * SetCheckBoxType(ESlateCheckBoxType::Type InCheckBoxType) { return NativeCall<FCheckBoxStyle *, ESlateCheckBoxType::Type>(this, "FCheckBoxStyle.SetCheckBoxType", InCheckBoxType); }
	FCheckBoxStyle * SetCheckedImage(const FSlateBrush * InCheckedImage) { return NativeCall<FCheckBoxStyle *, const FSlateBrush *>(this, "FCheckBoxStyle.SetCheckedImage", InCheckedImage); }
	FCheckBoxStyle * SetUncheckedHoveredImage(const FSlateBrush * InUncheckedHoveredImage) { return NativeCall<FCheckBoxStyle *, const FSlateBrush *>(this, "FCheckBoxStyle.SetUncheckedHoveredImage", InUncheckedHoveredImage); }
	FCheckBoxStyle * SetUncheckedImage(const FSlateBrush * InUncheckedImage) { return NativeCall<FCheckBoxStyle *, const FSlateBrush *>(this, "FCheckBoxStyle.SetUncheckedImage", InUncheckedImage); }
	FCheckBoxStyle * SetUncheckedPressedImage(const FSlateBrush * InUncheckedPressedImage) { return NativeCall<FCheckBoxStyle *, const FSlateBrush *>(this, "FCheckBoxStyle.SetUncheckedPressedImage", InUncheckedPressedImage); }
	FCheckBoxStyle * SetUndeterminedHoveredImage(const FSlateBrush * InUndeterminedHoveredImage) { return NativeCall<FCheckBoxStyle *, const FSlateBrush *>(this, "FCheckBoxStyle.SetUndeterminedHoveredImage", InUndeterminedHoveredImage); }
	FCheckBoxStyle * operator=(const FCheckBoxStyle * __that) { return NativeCall<FCheckBoxStyle *, const FCheckBoxStyle *>(this, "FCheckBoxStyle.operator=", __that); }
};

