#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleTypeDataBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase
{
	char __padding[0x18L];
	float& TilingDistanceField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataAnimTrail.TilingDistance"); }
	float& DistanceTessellationStepSizeField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataAnimTrail.DistanceTessellationStepSize"); }
	float& TangentTessellationStepSizeField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataAnimTrail.TangentTessellationStepSize"); }
	float& WidthTessellationStepSizeField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataAnimTrail.WidthTessellationStepSize"); }

	// Functions

};

