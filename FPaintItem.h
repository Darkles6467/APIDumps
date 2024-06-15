#pragma once

#include "BaseDeclarations.h"
struct FPaintItem
{
	char __padding[0x20L];
	FItemNetID& ItemIdField() { return *GetNativePointerField<FItemNetID*>(this, "FPaintItem.ItemId"); }
	char& ColorCodeField() { return *GetNativePointerField<char*>(this, "FPaintItem.ColorCode"); }
	float& XField() { return *GetNativePointerField<float*>(this, "FPaintItem.X"); }
	float& YField() { return *GetNativePointerField<float*>(this, "FPaintItem.Y"); }

	// Functions

};

