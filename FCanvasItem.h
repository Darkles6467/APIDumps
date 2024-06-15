#pragma once

#include "BaseDeclarations.h"
struct FCanvasItem
{
	char __padding[0x38L];
	FVector2D& PositionField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasItem.Position"); }
	unsigned int& StereoDepthField() { return *GetNativePointerField<unsigned int*>(this, "FCanvasItem.StereoDepth"); }
	ESimpleElementBlendMode& BlendModeField() { return *GetNativePointerField<ESimpleElementBlendMode*>(this, "FCanvasItem.BlendMode"); }
	bool& bFreezeTimeField() { return *GetNativePointerField<bool*>(this, "FCanvasItem.bFreezeTime"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCanvasItem.Color"); }

	// Functions

	void Draw(FCanvas * InCanvas, const FVector2D * InPosition) { NativeCall<void, FCanvas *, const FVector2D *>(this, "FCanvasItem.Draw", InCanvas, InPosition); }
	void Draw(FCanvas * InCanvas, float X, float Y) { NativeCall<void, FCanvas *, float, float>(this, "FCanvasItem.Draw", InCanvas, X, Y); }
	void SetColor(const FLinearColor * InColor) { NativeCall<void, const FLinearColor *>(this, "FCanvasItem.SetColor", InColor); }
};

