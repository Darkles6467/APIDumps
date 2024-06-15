#pragma once

#include "BaseDeclarations.h"
#include "FCanvasItem.h"

struct FCanvasSimpleBorderItem : FCanvasItem
{
	char __padding[0x48L];
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasSimpleBorderItem.Size"); }
	FMargin& CornerUVMarginField() { return *GetNativePointerField<FMargin*>(this, "FCanvasSimpleBorderItem.CornerUVMargin"); }
	FVector2D& BorderScaleField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasSimpleBorderItem.BorderScale"); }
	float& ZField() { return *GetNativePointerField<float*>(this, "FCanvasSimpleBorderItem.Z"); }
	const FTexture * BorderTextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasSimpleBorderItem.BorderTexture"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FCanvasSimpleBorderItem.Rotation"); }
	FVector2D& PivotPointField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasSimpleBorderItem.PivotPoint"); }

	// Functions

	void Draw(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "FCanvasSimpleBorderItem.Draw", InCanvas); }
};

