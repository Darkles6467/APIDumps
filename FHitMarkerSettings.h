#pragma once

#include "BaseDeclarations.h"
struct FHitMarkerSettings
{
	char __padding[0x28L];
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FHitMarkerSettings.Color"); }
	float& DrawDurationField() { return *GetNativePointerField<float*>(this, "FHitMarkerSettings.DrawDuration"); }
	FVector2D& ScaleField() { return *GetNativePointerField<FVector2D*>(this, "FHitMarkerSettings.Scale"); }

	// Functions

};

