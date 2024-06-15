#pragma once

#include "BaseDeclarations.h"
#include "FCanvasItem.h"

struct FCanvasBorderItem : FCanvasItem
{
	char __padding[0x80L];
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasBorderItem.Size"); }
	FVector2D& BorderScaleField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasBorderItem.BorderScale"); }
	FVector2D& BackgroundScaleField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasBorderItem.BackgroundScale"); }
	float& ZField() { return *GetNativePointerField<float*>(this, "FCanvasBorderItem.Z"); }
	FVector2D& BorderUV0Field() { return *GetNativePointerField<FVector2D*>(this, "FCanvasBorderItem.BorderUV0"); }
	FVector2D& BorderUV1Field() { return *GetNativePointerField<FVector2D*>(this, "FCanvasBorderItem.BorderUV1"); }
	const FTexture * BorderTextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasBorderItem.BorderTexture"); }
	const FTexture * BackgroundTextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasBorderItem.BackgroundTexture"); }
	const FTexture * BorderLeftTextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasBorderItem.BorderLeftTexture"); }
	const FTexture * BorderRightTextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasBorderItem.BorderRightTexture"); }
	const FTexture * BorderTopTextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasBorderItem.BorderTopTexture"); }
	const FTexture * BorderBottomTextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasBorderItem.BorderBottomTexture"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FCanvasBorderItem.Rotation"); }
	FVector2D& PivotPointField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasBorderItem.PivotPoint"); }
	FVector2D& CornerSizeField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasBorderItem.CornerSize"); }

	// Functions

	void Draw(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "FCanvasBorderItem.Draw", InCanvas); }
};

