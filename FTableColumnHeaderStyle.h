#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FTableColumnHeaderStyle : FSlateWidgetStyle
{
	char __padding[0x438L];

	// Functions

	FTableColumnHeaderStyle * operator=(const FTableColumnHeaderStyle * __that) { return NativeCall<FTableColumnHeaderStyle *, const FTableColumnHeaderStyle *>(this, "FTableColumnHeaderStyle.operator=", __that); }
	static const FTableColumnHeaderStyle * GetDefault() { return NativeCall<const FTableColumnHeaderStyle *>(nullptr, "FTableColumnHeaderStyle.GetDefault"); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FTableColumnHeaderStyle.GetTypeName", result); }
	FTableRowStyle * SetMenuDropdownHoveredBorderBrush(const FSlateBrush * InOddRowBackgroundBrush) { return NativeCall<FTableRowStyle *, const FSlateBrush *>(this, "FTableColumnHeaderStyle.SetMenuDropdownHoveredBorderBrush", InOddRowBackgroundBrush); }
	FTableColumnHeaderStyle * SetMenuDropdownImage(const FSlateBrush * InMenuDropdownImage) { return NativeCall<FTableColumnHeaderStyle *, const FSlateBrush *>(this, "FTableColumnHeaderStyle.SetMenuDropdownImage", InMenuDropdownImage); }
};

