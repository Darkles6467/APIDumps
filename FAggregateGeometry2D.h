#pragma once

#include "BaseDeclarations.h"
struct FAggregateGeometry2D
{
	char __padding[0x30L];
	TArray<FCircleElement2D>& CircleElementsField() { return *GetNativePointerField<TArray<FCircleElement2D>*>(this, "FAggregateGeometry2D.CircleElements"); }
	TArray<FBoxElement2D>& BoxElementsField() { return *GetNativePointerField<TArray<FBoxElement2D>*>(this, "FAggregateGeometry2D.BoxElements"); }
	TArray<FConvexElement2D>& ConvexElementsField() { return *GetNativePointerField<TArray<FConvexElement2D>*>(this, "FAggregateGeometry2D.ConvexElements"); }

	// Functions

	float GetArea(const FVector * Scale) { return NativeCall<float, const FVector *>(this, "FAggregateGeometry2D.GetArea", Scale); }
};

