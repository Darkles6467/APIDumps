#pragma once

#include "BaseDeclarations.h"
#include "FComponentInstanceDataBase.h"

struct FPrecomputedSkyLightInstanceData : FComponentInstanceDataBase
{
	char __padding[0xb8L];
	FGuid& LightGuidField() { return *GetNativePointerField<FGuid*>(this, "FPrecomputedSkyLightInstanceData.LightGuid"); }
	bool& bPrecomputedLightingIsValidField() { return *GetNativePointerField<bool*>(this, "FPrecomputedSkyLightInstanceData.bPrecomputedLightingIsValid"); }
	TSHVectorRGB<3>& IrradianceEnvironmentMapField() { return *GetNativePointerField<TSHVectorRGB<3>*>(this, "FPrecomputedSkyLightInstanceData.IrradianceEnvironmentMap"); }

	// Functions

};

