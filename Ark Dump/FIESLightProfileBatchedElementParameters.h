#pragma once

#include "BaseDeclarations.h"
#include "FBatchedElementParameters.h"
#include "FRefCountedObject.h"

struct FIESLightProfileBatchedElementParameters : FBatchedElementParameters
{
	char __padding[0x8L];
	float& BrightnessInLumensField() { return *GetNativePointerField<float*>(this, "FIESLightProfileBatchedElementParameters.BrightnessInLumens"); }
};

