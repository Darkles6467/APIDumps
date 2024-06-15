#pragma once

#include "BaseDeclarations.h"
#include "ISlateRun.h"
#include "IRun.h"
#include "FSlateImageRun.h"
#include "ILayoutBlock.h"

struct FSlateImageRun : ISlateRun
{
	char __padding[0xa8L];
	FRunInfo& RunInfoField() { return *GetNativePointerField<FRunInfo*>(this, "FSlateImageRun.RunInfo"); }
	TSharedRef<FString const ,0>& TextField() { return *GetNativePointerField<TSharedRef<FString const ,0>*>(this, "FSlateImageRun.Text"); }
	FTextRange& RangeField() { return *GetNativePointerField<FTextRange*>(this, "FSlateImageRun.Range"); }
	__int16& BaselineField() { return *GetNativePointerField<__int16*>(this, "FSlateImageRun.Baseline"); }

	// Functions

	void AppendTextTo(FString * AppendToText) { NativeCall<void, FString *>(this, "FSlateImageRun.AppendTextTo", AppendToText); }
	void AppendTextTo(FString * AppendToText, const FTextRange * PartialRange) { NativeCall<void, FString *, const FTextRange *>(this, "FSlateImageRun.AppendTextTo", AppendToText, PartialRange); }
	static TSharedRef<FSlateImageRun,0> * Create(TSharedRef<FSlateImageRun,0> * result, const FRunInfo * InRunInfo, const TSharedRef<FString const ,0> * InText, const FSlateBrush * InImage, __int16 InBaseline, const FTextRange * InRange) { return NativeCall<TSharedRef<FSlateImageRun,0> *, TSharedRef<FSlateImageRun,0> *, const FRunInfo *, const TSharedRef<FString const ,0> *, const FSlateBrush *, __int16, const FTextRange *>(nullptr, "FSlateImageRun.Create", result, InRunInfo, InText, InImage, InBaseline, InRange); }
	__int16 GetBaseLine(float Scale) { return NativeCall<__int16, float>(this, "FSlateImageRun.GetBaseLine", Scale); }
	FVector2D * GetLocationAt(FVector2D * result, const TSharedRef<ILayoutBlock,0> * Block, int Offset, float Scale) { return NativeCall<FVector2D *, FVector2D *, const TSharedRef<ILayoutBlock,0> *, int, float>(this, "FSlateImageRun.GetLocationAt", result, Block, Offset, Scale); }
	__int16 GetMaxHeight(float Scale) { return NativeCall<__int16, float>(this, "FSlateImageRun.GetMaxHeight", Scale); }
	int GetTextIndexAt(const TSharedRef<ILayoutBlock,0> * Block, const FVector2D * Location, float Scale, ETextHitPoint *const OutHitPoint) { return NativeCall<int, const TSharedRef<ILayoutBlock,0> *, const FVector2D *, float, ETextHitPoint *const>(this, "FSlateImageRun.GetTextIndexAt", Block, Location, Scale, OutHitPoint); }
	FTextRange * GetTextRange(FTextRange * result) { return NativeCall<FTextRange *, FTextRange *>(this, "FSlateImageRun.GetTextRange", result); }
	FVector2D * Measure(FVector2D * result, int BeginIndex, int EndIndex, float Scale) { return NativeCall<FVector2D *, FVector2D *, int, int, float>(this, "FSlateImageRun.Measure", result, BeginIndex, EndIndex, Scale); }
	void Move(const TSharedRef<FString,0> * NewText, const FTextRange * NewRange) { NativeCall<void, const TSharedRef<FString,0> *, const FTextRange *>(this, "FSlateImageRun.Move", NewText, NewRange); }
	int OnPaint(const FPaintArgs * Args, const FTextLayout::FLineView * Line, const TSharedRef<ILayoutBlock,0> * Block, const FTextBlockStyle * DefaultStyle, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FTextLayout::FLineView *, const TSharedRef<ILayoutBlock,0> *, const FTextBlockStyle *, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "FSlateImageRun.OnPaint", Args, Line, Block, DefaultStyle, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetTextRange(const FTextRange * Value) { NativeCall<void, const FTextRange *>(this, "FSlateImageRun.SetTextRange", Value); }
};

