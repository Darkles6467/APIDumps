#pragma once

#include "BaseDeclarations.h"
struct FHittestGrid
{
	char __padding[0x30L];
	TSharedRef<TArray<FHittestGrid::FCachedWidget>,0>& WidgetsCachedThisFrameField() { return *GetNativePointerField<TSharedRef<TArray<FHittestGrid::FCachedWidget>,0>*>(this, "FHittestGrid.WidgetsCachedThisFrame"); }
	TArray<FHittestGrid::FCell>& CellsField() { return *GetNativePointerField<TArray<FHittestGrid::FCell>*>(this, "FHittestGrid.Cells"); }
	FVector2D& GridOriginField() { return *GetNativePointerField<FVector2D*>(this, "FHittestGrid.GridOrigin"); }
	FIntPoint& NumCellsField() { return *GetNativePointerField<FIntPoint*>(this, "FHittestGrid.NumCells"); }

	// Functions

	void FCachedWidget(const FHittestGrid::FCachedWidget * __that) { NativeCall<void, const FHittestGrid::FCachedWidget *>(this, "FHittestGrid.FCachedWidget", __that); }
	void FCachedWidget() { NativeCall<void>(this, "FHittestGrid.FCachedWidget"); }
	void FCachedWidget(const int ChildIndex) { NativeCall<void, const int>(this, "FHittestGrid.FCachedWidget", ChildIndex); }
	void BeginFrame(const FSlateRect * HittestArea) { NativeCall<void, const FSlateRect *>(this, "FHittestGrid.BeginFrame", HittestArea); }
	int InsertWidget(const int ParentHittestIndex, const EVisibility * Visibility, const FArrangedWidget * Widget, const FVector2D InWindowOffset, const FSlateRect * InClippingRect) { return NativeCall<int, const int, const EVisibility *, const FArrangedWidget *, const FVector2D, const FSlateRect *>(this, "FHittestGrid.InsertWidget", ParentHittestIndex, Visibility, Widget, InWindowOffset, InClippingRect); }
};

