#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{
	char __padding[0x628L];
	FEditableTextBoxStyle& EditableTextBoxStyleField() { return *GetNativePointerField<FEditableTextBoxStyle*>(this, "FInlineEditableTextBlockStyle.EditableTextBoxStyle"); }
	FTextBlockStyle& TextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "FInlineEditableTextBlockStyle.TextStyle"); }

	// Functions

	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FInlineEditableTextBlockStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FInlineEditableTextBlockStyle.GetTypeName", result); }
	FInlineEditableTextBlockStyle * operator=(const FInlineEditableTextBlockStyle * __that) { return NativeCall<FInlineEditableTextBlockStyle *, const FInlineEditableTextBlockStyle *>(this, "FInlineEditableTextBlockStyle.operator=", __that); }
};

