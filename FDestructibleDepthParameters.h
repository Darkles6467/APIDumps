#pragma once

#include "BaseDeclarations.h"
struct FDestructibleDepthParameters
{
	char __padding[0x1L];
	TEnumAsByte<enum EImpactDamageOverride>& ImpactDamageOverrideField() { return *GetNativePointerField<TEnumAsByte<enum EImpactDamageOverride>*>(this, "FDestructibleDepthParameters.ImpactDamageOverride"); }

	// Functions

};

