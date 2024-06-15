#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FButtonStyle : FSlateWidgetStyle
{
	char __padding[0x240L];
	FMargin& NormalPaddingField() { return *GetNativePointerField<FMargin*>(this, "FButtonStyle.NormalPadding"); }
	FMargin& PressedPaddingField() { return *GetNativePointerField<FMargin*>(this, "FButtonStyle.PressedPadding"); }
	FSlateSound& PressedSlateSoundField() { return *GetNativePointerField<FSlateSound*>(this, "FButtonStyle.PressedSlateSound"); }
	FSlateSound& HoveredSlateSoundField() { return *GetNativePointerField<FSlateSound*>(this, "FButtonStyle.HoveredSlateSound"); }
	FName& PressedSound_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FButtonStyle.PressedSound_DEPRECATED"); }
	FName& HoveredSound_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FButtonStyle.HoveredSound_DEPRECATED"); }

	// Functions

	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FButtonStyle.GetTypeName", result); }
	FButtonStyle * operator=(const FButtonStyle * __that) { return NativeCall<FButtonStyle *, const FButtonStyle *>(this, "FButtonStyle.operator=", __that); }
	static const FButtonStyle * GetDefault() { return NativeCall<const FButtonStyle *>(nullptr, "FButtonStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FButtonStyle.GetResources", OutBrushes); }
	void PostSerialize(const FArchive * Ar) { NativeCall<void, const FArchive *>(this, "FButtonStyle.PostSerialize", Ar); }
	FScrollBoxStyle * SetNormal(const FSlateBrush * InTopShadowBrush) { return NativeCall<FScrollBoxStyle *, const FSlateBrush *>(this, "FButtonStyle.SetNormal", InTopShadowBrush); }
	FButtonStyle * SetNormalPadding(const FMargin * InNormalPadding) { return NativeCall<FButtonStyle *, const FMargin *>(this, "FButtonStyle.SetNormalPadding", InNormalPadding); }
	FButtonStyle * SetPressedPadding(const FMargin * InPressedPadding) { return NativeCall<FButtonStyle *, const FMargin *>(this, "FButtonStyle.SetPressedPadding", InPressedPadding); }
};

