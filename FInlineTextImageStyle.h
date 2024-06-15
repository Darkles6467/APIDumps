#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FInlineTextImageStyle : FSlateWidgetStyle
{
	char __padding[0x80L];
	__int16& BaselineField() { return *GetNativePointerField<__int16*>(this, "FInlineTextImageStyle.Baseline"); }

	// Functions

	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FInlineTextImageStyle.GetTypeName", result); }
	static const FInlineTextImageStyle * GetDefault() { return NativeCall<const FInlineTextImageStyle *>(nullptr, "FInlineTextImageStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FInlineTextImageStyle.GetResources", OutBrushes); }
};

