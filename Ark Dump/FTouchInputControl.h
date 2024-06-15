#pragma once

#include "BaseDeclarations.h"
struct FTouchInputControl
{
	char __padding[0x68L];
	FVector2D& CenterField() { return *GetNativePointerField<FVector2D*>(this, "FTouchInputControl.Center"); }
	FVector2D& VisualSizeField() { return *GetNativePointerField<FVector2D*>(this, "FTouchInputControl.VisualSize"); }
	FVector2D& ThumbSizeField() { return *GetNativePointerField<FVector2D*>(this, "FTouchInputControl.ThumbSize"); }
	FVector2D& InteractionSizeField() { return *GetNativePointerField<FVector2D*>(this, "FTouchInputControl.InteractionSize"); }
	FVector2D& InputScaleField() { return *GetNativePointerField<FVector2D*>(this, "FTouchInputControl.InputScale"); }
	FKey& MainInputKeyField() { return *GetNativePointerField<FKey*>(this, "FTouchInputControl.MainInputKey"); }
	FKey& AltInputKeyField() { return *GetNativePointerField<FKey*>(this, "FTouchInputControl.AltInputKey"); }

	// Functions

};

