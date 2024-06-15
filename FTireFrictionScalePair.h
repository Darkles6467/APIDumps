#pragma once

#include "BaseDeclarations.h"
struct FTireFrictionScalePair
{
	char __padding[0x10L];
	UTireType * TireTypeField() { return GetNativePointerField<UTireType *>(this, "FTireFrictionScalePair.TireType"); }
	float& FrictionScaleField() { return *GetNativePointerField<float*>(this, "FTireFrictionScalePair.FrictionScale"); }

	// Functions

};

