#pragma once

#include "BaseDeclarations.h"
struct FTireShaderInput
{
	char __padding[0x2cL];
	float& TireFrictionField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.TireFriction"); }
	float& LongSlipField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.LongSlip"); }
	float& LatSlipField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.LatSlip"); }
	float& WheelOmegaField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.WheelOmega"); }
	float& WheelRadiusField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.WheelRadius"); }
	float& RecipWheelRadiusField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.RecipWheelRadius"); }
	float& RestTireLoadField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.RestTireLoad"); }
	float& TireLoadField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.TireLoad"); }
	float& NormalizedTireLoadField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.NormalizedTireLoad"); }
	float& GravityField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.Gravity"); }
	float& RecipGravityField() { return *GetNativePointerField<float*>(this, "FTireShaderInput.RecipGravity"); }
};

