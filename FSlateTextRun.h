#pragma once

#include "BaseDeclarations.h"
#include "ISlateRun.h"
#include "IRun.h"
#include "FSlateTextRun.h"
#include "ILayoutBlock.h"

struct FSlateTextRun : ISlateRun
{
	char __padding[0x1a0L];
	FRunInfo& RunInfoField() { return *GetNativePointerField<FRunInfo*>(this, "FSlateTextRun.RunInfo"); }
	TSharedRef<FString const ,0>& TextField() { return *GetNativePointerField<TSharedRef<FString const ,0>*>(this, "FSlateTextRun.Text"); }
	FTextBlockStyle& StyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "FSlateTextRun.Style"); }
	FTextRange& RangeField() { return *GetNativePointerField<FTextRange*>(this, "FSlateTextRun.Range"); }

	// Functions

	void AppendTextTo(FString * AppendToText) { NativeCall<void, FString *>(this, "FSlateTextRun.AppendTextTo", AppendToText); }
	static TSharedRef<FSlateTextRun,0> * Create(TSharedRef<FSlateTextRun,0> * result, const FRunInfo * InRunInfo, const TSharedRef<FString const ,0> * InText, const FTextBlockStyle * Style) { return NativeCall<TSharedRef<FSlateTextRun,0> *, TSharedRef<FSlateTextRun,0> *, const FRunInfo *, const TSharedRef<FString const ,0> *, const FTextBlockStyle *>(nullptr, "FSlateTextRun.Create", result, InRunInfo, InText, Style); }
	static TSharedRef<FSlateTextRun,0> * Create(TSharedRef<FSlateTextRun,0> * result, const FRunInfo * InRunInfo, const TSharedRef<FString const ,0> * InText, const FTextBlockStyle * Style, const FTextRange * InRange) { return NativeCall<TSharedRef<FSlateTextRun,0> *, TSharedRef<FSlateTextRun,0> *, const FRunInfo *, const TSharedRef<FString const ,0> *, const FTextBlockStyle *, const FTextRange *>(nullptr, "FSlateTextRun.Create", result, InRunInfo, InText, Style, InRange); }
	__int16 GetBaseLine(float Scale) { return NativeCall<__int16, float>(this, "FSlateTextRun.GetBaseLine", Scale); }
	float GetKerning(int CurrentIndex, float Scale) { return NativeCall<float, int, float>(this, "FSlateTextRun.GetKerning", CurrentIndex, Scale); }
	FVector2D * GetLocationAt(FVector2D * result, const TSharedRef<ILayoutBlock,0> * Block, int Offset, float Scale) { return NativeCall<FVector2D *, FVector2D *, const TSharedRef<ILayoutBlock,0> *, int, float>(this, "FSlateTextRun.GetLocationAt", result, Block, Offset, Scale); }
	__int16 GetMaxHeight(float Scale) { return NativeCall<__int16, float>(this, "FSlateTextRun.GetMaxHeight", Scale); }
	int GetTextIndexAt(const TSharedRef<ILayoutBlock,0> * Block, const FVector2D * Location, float Scale, ETextHitPoint *const OutHitPoint) { return NativeCall<int, const TSharedRef<ILayoutBlock,0> *, const FVector2D *, float, ETextHitPoint *const>(this, "FSlateTextRun.GetTextIndexAt", Block, Location, Scale, OutHitPoint); }
	FTextRange * GetTextRange(FTextRange * result) { return NativeCall<FTextRange *, FTextRange *>(this, "FSlateTextRun.GetTextRange", result); }
	FVector2D * Measure(FVector2D * result, int BeginIndex, int EndIndex, float Scale) { return NativeCall<FVector2D *, FVector2D *, int, int, float>(this, "FSlateTextRun.Measure", result, BeginIndex, EndIndex, Scale); }
	void Move(const TSharedRef<FString,0> * NewText, const FTextRange * NewRange) { NativeCall<void, const TSharedRef<FString,0> *, const FTextRange *>(this, "FSlateTextRun.Move", NewText, NewRange); }
	int OnPaint(const FPaintArgs * Args, const FTextLayout::FLineView * Line, const TSharedRef<ILayoutBlock,0> * Block, const FTextBlockStyle * DefaultStyle, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FTextLayout::FLineView *, const TSharedRef<ILayoutBlock,0> *, const FTextBlockStyle *, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "FSlateTextRun.OnPaint", Args, Line, Block, DefaultStyle, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetTextRange(const FTextRange * Value) { NativeCall<void, const FTextRange *>(this, "FSlateTextRun.SetTextRange", Value); }
};

