#pragma once

#include "BaseDeclarations.h"
struct FParticleCurvePair
{
	char __padding[0x18L];
	FString& CurveNameField() { return *GetNativePointerField<FString*>(this, "FParticleCurvePair.CurveName"); }

	// Functions

};

