#pragma once

#include "BaseDeclarations.h"
struct FPaintGeometry
{
	char __padding[0x38L];
	FVector2D& DrawPositionField() { return *GetNativePointerField<FVector2D*>(this, "FPaintGeometry.DrawPosition"); }
	float& DrawScaleField() { return *GetNativePointerField<float*>(this, "FPaintGeometry.DrawScale"); }
	FVector2D& DrawSizeField() { return *GetNativePointerField<FVector2D*>(this, "FPaintGeometry.DrawSize"); }
	FVector2D& LocalSizeField() { return *GetNativePointerField<FVector2D*>(this, "FPaintGeometry.LocalSize"); }
	FTransform2D& AccumulatedRenderTransformField() { return *GetNativePointerField<FTransform2D*>(this, "FPaintGeometry.AccumulatedRenderTransform"); }
	bool& bUsingLegacyConstructorField() { return *GetNativePointerField<bool*>(this, "FPaintGeometry.bUsingLegacyConstructor"); }

	// Functions

	void CommitTransformsIfUsingLegacyConstructor() { NativeCall<void>(this, "FPaintGeometry.CommitTransformsIfUsingLegacyConstructor"); }
	void AppendTransform(const FSlateLayoutTransform * LayoutTransform) { NativeCall<void, const FSlateLayoutTransform *>(this, "FPaintGeometry.AppendTransform", LayoutTransform); }
	const FVector2D * GetLocalSize() { return NativeCall<const FVector2D *>(this, "FPaintGeometry.GetLocalSize"); }
};

