#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FProgressBarStyle : FSlateWidgetStyle
{
	char __padding[0x168L];

	// Functions

	static const FProgressBarStyle * GetDefault() { return NativeCall<const FProgressBarStyle *>(nullptr, "FProgressBarStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FProgressBarStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FProgressBarStyle.GetTypeName", result); }
	FProgressBarStyle * operator=(const FProgressBarStyle * __that) { return NativeCall<FProgressBarStyle *, const FProgressBarStyle *>(this, "FProgressBarStyle.operator=", __that); }
};

