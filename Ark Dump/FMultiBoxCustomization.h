#pragma once

#include "BaseDeclarations.h"
struct FMultiBoxCustomization
{
	char __padding[0x8L];
	FName& CustomizationNameField() { return *GetNativePointerField<FName*>(this, "FMultiBoxCustomization.CustomizationName"); }
};

