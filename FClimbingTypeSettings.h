#pragma once

#include "BaseDeclarations.h"
struct FClimbingTypeSettings
{
	char __padding[0x1cL];
	float& WaitTimeField() { return *GetNativePointerField<float*>(this, "FClimbingTypeSettings.WaitTime"); }
	float& StaminaConsumptionField() { return *GetNativePointerField<float*>(this, "FClimbingTypeSettings.StaminaConsumption"); }
	float& ConsumeDurabilityMultiplierField() { return *GetNativePointerField<float*>(this, "FClimbingTypeSettings.ConsumeDurabilityMultiplier"); }
	float& AttachMoveTraceDistanceField() { return *GetNativePointerField<float*>(this, "FClimbingTypeSettings.AttachMoveTraceDistance"); }
	float& AttachBackTraceDistanceField() { return *GetNativePointerField<float*>(this, "FClimbingTypeSettings.AttachBackTraceDistance"); }
	float& AttachForwardTraceDistanceField() { return *GetNativePointerField<float*>(this, "FClimbingTypeSettings.AttachForwardTraceDistance"); }

	// Functions

};

