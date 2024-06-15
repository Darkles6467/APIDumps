#pragma once

#include "BaseDeclarations.h"
struct FPaintArgs
{
	char __padding[0x40L];
	bool& bDisableInternalClippingField() { return *GetNativePointerField<bool*>(this, "FPaintArgs.bDisableInternalClipping"); }
	FHittestGrid * GridField() { return GetNativePointerField<FHittestGrid *>(this, "FPaintArgs.Grid"); }
	int& LastHittestIndexField() { return *GetNativePointerField<int*>(this, "FPaintArgs.LastHittestIndex"); }
	EVisibility& LastRecordedVisibilityField() { return *GetNativePointerField<EVisibility*>(this, "FPaintArgs.LastRecordedVisibility"); }
	FVector2D& WindowOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FPaintArgs.WindowOffset"); }
	int& ParentMinXField() { return *GetNativePointerField<int*>(this, "FPaintArgs.ParentMinX"); }
	int& ParentMinYField() { return *GetNativePointerField<int*>(this, "FPaintArgs.ParentMinY"); }
	int& ParentMaxXField() { return *GetNativePointerField<int*>(this, "FPaintArgs.ParentMaxX"); }
	int& ParentMaxYField() { return *GetNativePointerField<int*>(this, "FPaintArgs.ParentMaxY"); }
	FSlateRect * ScissorRectField() { return GetNativePointerField<FSlateRect *>(this, "FPaintArgs.ScissorRect"); }

	// Functions

	FPaintArgs * RecordHittestGeometry(FPaintArgs * result, const SWidget * Widget, const FGeometry * WidgetGeometry, const FSlateRect * InClippingRect) { return NativeCall<FPaintArgs *, FPaintArgs *, const SWidget *, const FGeometry *, const FSlateRect *>(this, "FPaintArgs.RecordHittestGeometry", result, Widget, WidgetGeometry, InClippingRect); }
	FPaintArgs * WithNewParent(FPaintArgs * result, const SWidget * Parent, int ParentMinX, int ParentMinY, int ParentMaxX, int ParentMaxY) { return NativeCall<FPaintArgs *, FPaintArgs *, const SWidget *, int, int, int, int>(this, "FPaintArgs.WithNewParent", result, Parent, ParentMinX, ParentMinY, ParentMaxX, ParentMaxY); }
};

