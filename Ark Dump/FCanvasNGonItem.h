#pragma once

#include "BaseDeclarations.h"
#include "FCanvasItem.h"

struct FCanvasNGonItem : FCanvasItem
{
	char __padding[0x20L];
	TArray<FCanvasUVTri>& TriangleListField() { return *GetNativePointerField<TArray<FCanvasUVTri>*>(this, "FCanvasNGonItem.TriangleList"); }
	FCanvasTriangleItem * TriListItemField() { return GetNativePointerField<FCanvasTriangleItem *>(this, "FCanvasNGonItem.TriListItem"); }
	const FTexture * TextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasNGonItem.Texture"); }

	// Functions

	void Draw(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "FCanvasNGonItem.Draw", InCanvas); }
	void SetColor(const FLinearColor * InColor) { NativeCall<void, const FLinearColor *>(this, "FCanvasNGonItem.SetColor", InColor); }
	void SetupPosition(const FVector2D * InPosition, const FVector2D * InRadius) { NativeCall<void, const FVector2D *, const FVector2D *>(this, "FCanvasNGonItem.SetupPosition", InPosition, InRadius); }
};

