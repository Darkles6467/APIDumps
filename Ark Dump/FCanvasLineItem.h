#pragma once

#include "BaseDeclarations.h"
#include "FCanvasItem.h"

struct FCanvasLineItem : FCanvasItem
{
	char __padding[0x20L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "FCanvasLineItem.Origin"); }
	FVector& EndPosField() { return *GetNativePointerField<FVector*>(this, "FCanvasLineItem.EndPos"); }
	float& LineThicknessField() { return *GetNativePointerField<float*>(this, "FCanvasLineItem.LineThickness"); }

	// Functions

	void Draw(FCanvas * InCanvas, const FVector2D * InStartPos, const FVector2D * InEndPos) { NativeCall<void, FCanvas *, const FVector2D *, const FVector2D *>(this, "FCanvasLineItem.Draw", InCanvas, InStartPos, InEndPos); }
	void Draw(FCanvas * InCanvas, const FVector2D * InPosition) { NativeCall<void, FCanvas *, const FVector2D *>(this, "FCanvasLineItem.Draw", InCanvas, InPosition); }
	void Draw(FCanvas * InCanvas, const FVector * InPosition) { NativeCall<void, FCanvas *, const FVector *>(this, "FCanvasLineItem.Draw", InCanvas, InPosition); }
	void Draw(FCanvas * InCanvas, float InX, float InY) { NativeCall<void, FCanvas *, float, float>(this, "FCanvasLineItem.Draw", InCanvas, InX, InY); }
	void Draw(FCanvas * InCanvas, float X, float Y, float Z) { NativeCall<void, FCanvas *, float, float, float>(this, "FCanvasLineItem.Draw", InCanvas, X, Y, Z); }
	void Draw(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "FCanvasLineItem.Draw", InCanvas); }
};

