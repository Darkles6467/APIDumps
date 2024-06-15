#pragma once

#include "BaseDeclarations.h"
struct FInterpLookupPoint
{
	char __padding[0xcL];
	FName& GroupNameField() { return *GetNativePointerField<FName*>(this, "FInterpLookupPoint.GroupName"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FInterpLookupPoint.Time"); }

	// Functions

};

