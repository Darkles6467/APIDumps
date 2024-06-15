#pragma once

#include "BaseDeclarations.h"
#include "FCanvasItem.h"

struct FCanvasTriangleItem : FCanvasItem
{
	char __padding[0x28L];
	const FTexture * TextureField() { return GetNativePointerField<const FTexture *>(this, "FCanvasTriangleItem.Texture"); }
	TArray<FCanvasUVTri>& TriangleListField() { return *GetNativePointerField<TArray<FCanvasUVTri>*>(this, "FCanvasTriangleItem.TriangleList"); }

	// Functions

	void Draw(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "FCanvasTriangleItem.Draw", InCanvas); }
	void SetColor(const FLinearColor * InColor) { NativeCall<void, const FLinearColor *>(this, "FCanvasTriangleItem.SetColor", InColor); }
};

