#pragma once

#include "BaseDeclarations.h"
struct FVehicleDifferential4WData
{
	char __padding[0x1cL];
	TEnumAsByte<enum EVehicleDifferential4W::Type>& DifferentialTypeField() { return *GetNativePointerField<TEnumAsByte<enum EVehicleDifferential4W::Type>*>(this, "FVehicleDifferential4WData.DifferentialType"); }
	float& FrontRearSplitField() { return *GetNativePointerField<float*>(this, "FVehicleDifferential4WData.FrontRearSplit"); }
	float& FrontLeftRightSplitField() { return *GetNativePointerField<float*>(this, "FVehicleDifferential4WData.FrontLeftRightSplit"); }
	float& RearLeftRightSplitField() { return *GetNativePointerField<float*>(this, "FVehicleDifferential4WData.RearLeftRightSplit"); }
	float& CentreBiasField() { return *GetNativePointerField<float*>(this, "FVehicleDifferential4WData.CentreBias"); }
	float& FrontBiasField() { return *GetNativePointerField<float*>(this, "FVehicleDifferential4WData.FrontBias"); }
	float& RearBiasField() { return *GetNativePointerField<float*>(this, "FVehicleDifferential4WData.RearBias"); }

	// Functions

};

