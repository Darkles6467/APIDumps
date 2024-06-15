#pragma once

#include "BaseDeclarations.h"
struct FScrollyZoomy
{
	char __padding[0x50L];
	float& AmountScrolledWhileRightMouseDownField() { return *GetNativePointerField<float*>(this, "FScrollyZoomy.AmountScrolledWhileRightMouseDown"); }
	bool& bShowSoftwareCursorField() { return *GetNativePointerField<bool*>(this, "FScrollyZoomy.bShowSoftwareCursor"); }
	FVector2D& SoftwareCursorPositionField() { return *GetNativePointerField<FVector2D*>(this, "FScrollyZoomy.SoftwareCursorPosition"); }
	FInertialScrollManager& HorizontalIntertiaField() { return *GetNativePointerField<FInertialScrollManager*>(this, "FScrollyZoomy.HorizontalIntertia"); }
	FInertialScrollManager& VerticalIntertiaField() { return *GetNativePointerField<FInertialScrollManager*>(this, "FScrollyZoomy.VerticalIntertia"); }
};

