#pragma once

#include "BaseDeclarations.h"
#include "FCanvasItem.h"

struct FCanvasBoxItem : FCanvasItem
{
	char __padding[0x20L];
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasBoxItem.Size"); }
	float& LineThicknessField() { return *GetNativePointerField<float*>(this, "FCanvasBoxItem.LineThickness"); }
	TArray<FVector>& CornersField() { return *GetNativePointerField<TArray<FVector>*>(this, "FCanvasBoxItem.Corners"); }

	// Functions

	void Draw(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "FCanvasBoxItem.Draw", InCanvas); }
	void SetupBox() { NativeCall<void>(this, "FCanvasBoxItem.SetupBox"); }
};

