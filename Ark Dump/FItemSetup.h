#pragma once

#include "BaseDeclarations.h"
struct FItemSetup
{
	char __padding[0x28L];
	FString& ItemBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FItemSetup.ItemBlueprintPath"); }
	float& MinQualityField() { return *GetNativePointerField<float*>(this, "FItemSetup.MinQuality"); }
	float& MaxQualityField() { return *GetNativePointerField<float*>(this, "FItemSetup.MaxQuality"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FItemSetup.Quantity"); }

	// Functions

	FItemSetup * operator=(const FItemSetup * __that) { return NativeCall<FItemSetup *, const FItemSetup *>(this, "FItemSetup.operator=", __that); }
};

