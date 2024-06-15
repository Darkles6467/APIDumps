#pragma once

#include "BaseDeclarations.h"
struct FGlassSettings
{
	char __padding[0x8L];
	TEnumAsByte<enum EGlassTransparencyType::Type>& TransparencyTypeField() { return *GetNativePointerField<TEnumAsByte<enum EGlassTransparencyType::Type>*>(this, "FGlassSettings.TransparencyType"); }
	float& OpacityField() { return *GetNativePointerField<float*>(this, "FGlassSettings.Opacity"); }

	// Functions

};

