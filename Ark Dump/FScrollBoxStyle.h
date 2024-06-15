#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FScrollBoxStyle : FSlateWidgetStyle
{
	char __padding[0x1e0L];

	// Functions

	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FScrollBoxStyle.GetTypeName", result); }
	static const FScrollBoxStyle * GetDefault() { return NativeCall<const FScrollBoxStyle *>(nullptr, "FScrollBoxStyle.GetDefault"); }
	FTableColumnHeaderStyle * SetLeftShadowBrush(const FSlateBrush * InSortSecondaryAscendingImage) { return NativeCall<FTableColumnHeaderStyle *, const FSlateBrush *>(this, "FScrollBoxStyle.SetLeftShadowBrush", InSortSecondaryAscendingImage); }
	FTableColumnHeaderStyle * SetRightShadowBrush(const FSlateBrush * InSortSecondaryDescendingImage) { return NativeCall<FTableColumnHeaderStyle *, const FSlateBrush *>(this, "FScrollBoxStyle.SetRightShadowBrush", InSortSecondaryDescendingImage); }
	FScrollBoxStyle * operator=(const FScrollBoxStyle * __that) { return NativeCall<FScrollBoxStyle *, const FScrollBoxStyle *>(this, "FScrollBoxStyle.operator=", __that); }
};

