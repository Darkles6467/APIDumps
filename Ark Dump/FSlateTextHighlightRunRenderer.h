#pragma once

#include "BaseDeclarations.h"
#include "FSlateTextHighlightRunRenderer.h"
#include "ISlateRun.h"
#include "ILayoutBlock.h"

struct IRunRenderer
{
	char __padding[0x8L];
};

struct ISlateRunRenderer : IRunRenderer
{
};

struct FSlateTextHighlightRunRenderer : ISlateRunRenderer
{

	// Functions

	static TSharedRef<FSlateTextHighlightRunRenderer,0> * Create(TSharedRef<FSlateTextHighlightRunRenderer,0> * result) { return NativeCall<TSharedRef<FSlateTextHighlightRunRenderer,0> *, TSharedRef<FSlateTextHighlightRunRenderer,0> *>(nullptr, "FSlateTextHighlightRunRenderer.Create", result); }
	int OnPaint(const FPaintArgs * Args, const FTextLayout::FLineView * Line, const TSharedRef<ISlateRun,0> * Run, const TSharedRef<ILayoutBlock,0> * Block, const FTextBlockStyle * DefaultStyle, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FTextLayout::FLineView *, const TSharedRef<ISlateRun,0> *, const TSharedRef<ILayoutBlock,0> *, const FTextBlockStyle *, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "FSlateTextHighlightRunRenderer.OnPaint", Args, Line, Run, Block, DefaultStyle, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
};

