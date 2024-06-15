#pragma once

#include "BaseDeclarations.h"
struct FSubsurfaceProfileStruct
{
	char __padding[0x24L];
	float& ScatterRadiusField() { return *GetNativePointerField<float*>(this, "FSubsurfaceProfileStruct.ScatterRadius"); }
	FLinearColor& SubsurfaceColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSubsurfaceProfileStruct.SubsurfaceColor"); }
	FLinearColor& FalloffColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSubsurfaceProfileStruct.FalloffColor"); }

	// Functions

};

