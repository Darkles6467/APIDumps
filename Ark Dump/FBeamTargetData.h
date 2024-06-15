#pragma once

#include "BaseDeclarations.h"
struct FBeamTargetData
{
	char __padding[0xcL];
	FName& TargetNameField() { return *GetNativePointerField<FName*>(this, "FBeamTargetData.TargetName"); }
	float& TargetPercentageField() { return *GetNativePointerField<float*>(this, "FBeamTargetData.TargetPercentage"); }

	// Functions

};

