#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "SWindow.h"

struct FSlateWindowElementList
{
	char __padding[0x60L];
	TWeakPtr<SWindow,0>& TopLevelWindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "FSlateWindowElementList.TopLevelWindow"); }
	TArray<FSlateDrawElement>& DrawElementsField() { return *GetNativePointerField<TArray<FSlateDrawElement>*>(this, "FSlateWindowElementList.DrawElements"); }
	TArray<FSlateRenderBatch>& RenderBatchesField() { return *GetNativePointerField<TArray<FSlateRenderBatch>*>(this, "FSlateWindowElementList.RenderBatches"); }
	TArray<FSlateVertex>& BatchedVerticesField() { return *GetNativePointerField<TArray<FSlateVertex>*>(this, "FSlateWindowElementList.BatchedVertices"); }
	TArray<unsigned int>& BatchedIndicesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FSlateWindowElementList.BatchedIndices"); }
	TArray<TSharedRef<FSlateWindowElementList::FDeferredPaint,0>>& DeferredPaintListField() { return *GetNativePointerField<TArray<TSharedRef<FSlateWindowElementList::FDeferredPaint,0>>*>(this, "FSlateWindowElementList.DeferredPaintList"); }

	// Functions

	void FDeferredPaint(const FSlateWindowElementList::FDeferredPaint * __that) { NativeCall<void, const FSlateWindowElementList::FDeferredPaint *>(this, "FSlateWindowElementList.FDeferredPaint", __that); }
	void FDeferredPaint(const TSharedRef<SWidget,0> * InWidgetToPaint, const FPaintArgs * InArgs, const FGeometry InAllottedGeometry, const FSlateRect InMyClippingRect, const FWidgetStyle * InWidgetStyle, bool InParentEnabled) { NativeCall<void, const TSharedRef<SWidget,0> *, const FPaintArgs *, const FGeometry, const FSlateRect, const FWidgetStyle *, bool>(this, "FSlateWindowElementList.FDeferredPaint", InWidgetToPaint, InArgs, InAllottedGeometry, InMyClippingRect, InWidgetStyle, InParentEnabled); }
	FSlateDrawElement * AddUninitialized() { return NativeCall<FSlateDrawElement *>(this, "FSlateWindowElementList.AddUninitialized"); }
	TSharedPtr<SWindow,0> * GetWindow(TSharedPtr<SWindow,0> * result) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *>(this, "FSlateWindowElementList.GetWindow", result); }
	int PaintDeferred(int LayerId) { return NativeCall<int, int>(this, "FSlateWindowElementList.PaintDeferred", LayerId); }
	void QueueDeferredPainting(const FSlateWindowElementList::FDeferredPaint * InDeferredPaint) { NativeCall<void, const FSlateWindowElementList::FDeferredPaint *>(this, "FSlateWindowElementList.QueueDeferredPainting", InDeferredPaint); }
};

