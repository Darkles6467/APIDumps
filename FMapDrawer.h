#pragma once

#include "BaseDeclarations.h"
#include "FColor.h"

struct FMapDrawer
{
	char __padding[0x38L];
	int& ImageSizeField() { return *GetNativePointerField<int*>(this, "FMapDrawer.ImageSize"); }
	FBox& RegionField() { return *GetNativePointerField<FBox*>(this, "FMapDrawer.Region"); }
	TArray<FLinearColor>& ImageField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "FMapDrawer.Image"); }
	float& RegionSizeField() { return *GetNativePointerField<float*>(this, "FMapDrawer.RegionSize"); }
	float& TexelSizeInWorldField() { return *GetNativePointerField<float*>(this, "FMapDrawer.TexelSizeInWorld"); }

	// Functions

	void GetImageData(TArray<FColor> * OutColor) { NativeCall<void, TArray<FColor> *>(this, "FMapDrawer.GetImageData", OutColor); }
	void PaintData(const FVector4 * PointAndRadius, const FLinearColor * InColor) { NativeCall<void, const FVector4 *, const FLinearColor *>(this, "FMapDrawer.PaintData", PointAndRadius, InColor); }
};

