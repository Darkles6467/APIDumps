#pragma once

#include "BaseDeclarations.h"
struct FTireShaderOutput
{
	char __padding[0xcL];
	float& WheelTorqueField() { return *GetNativePointerField<float*>(this, "FTireShaderOutput.WheelTorque"); }
	float& LongForceField() { return *GetNativePointerField<float*>(this, "FTireShaderOutput.LongForce"); }
	float& LatForceField() { return *GetNativePointerField<float*>(this, "FTireShaderOutput.LatForce"); }
};

