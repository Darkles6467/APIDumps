#pragma once

#include "BaseDeclarations.h"
struct FSimpleLightEntry
{
	char __padding[0x18L];
	FVector& ColorField() { return *GetNativePointerField<FVector*>(this, "FSimpleLightEntry.Color"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FSimpleLightEntry.Radius"); }
	float& ExponentField() { return *GetNativePointerField<float*>(this, "FSimpleLightEntry.Exponent"); }
	bool& bAffectTranslucencyField() { return *GetNativePointerField<bool*>(this, "FSimpleLightEntry.bAffectTranslucency"); }
};

