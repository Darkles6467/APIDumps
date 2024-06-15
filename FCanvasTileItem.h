#pragma once

#include "BaseDeclarations.h"
#include "FCanvasItem.h"

struct FCanvasTileItem : FCanvasItem
{
	char __padding[0x48L];
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasTileItem.Size"); }
	float& ZField() { return *GetNativePointerField<float*>(this, "FCanvasTileItem.Z"); }
	FVector2D& UV0Field() { return *GetNativePointerField<FVector2D*>(this, "FCanvasTileItem.UV0"); }
	FVector2D& UV1Field() { return *GetNativePointerField<FVector2D*>(this, "FCanvasTileItem.UV1"); }
	const FTexture * TextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasTileItem.Texture"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FCanvasTileItem.Rotation"); }
	FVector2D& PivotPointField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasTileItem.PivotPoint"); }

	// Functions

	void Draw(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "FCanvasTileItem.Draw", InCanvas); }
	void RenderMaterialTile(FCanvas * InCanvas, const FVector2D * InPosition) { NativeCall<void, FCanvas *, const FVector2D *>(this, "FCanvasTileItem.RenderMaterialTile", InCanvas, InPosition); }
};

