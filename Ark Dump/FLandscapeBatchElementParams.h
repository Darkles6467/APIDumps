#pragma once

#include "BaseDeclarations.h"
struct FLandscapeBatchElementParams
{
	char __padding[0x28L];
	const TUniformBuffer<FLandscapeUniformShaderParameters> * LandscapeUniformShaderParametersResourceField() { return GetNativePointerField<const TUniformBuffer<FLandscapeUniformShaderParameters> *>(this, "FLandscapeBatchElementParams.LandscapeUniformShaderParametersResource"); }
	const FMatrix * LocalToWorldNoScalingPtrField() { return GetNativePointerField<const FMatrix *>(this, "FLandscapeBatchElementParams.LocalToWorldNoScalingPtr"); }
	int& SubXField() { return *GetNativePointerField<int*>(this, "FLandscapeBatchElementParams.SubX"); }
	int& SubYField() { return *GetNativePointerField<int*>(this, "FLandscapeBatchElementParams.SubY"); }
	int& CurrentLODField() { return *GetNativePointerField<int*>(this, "FLandscapeBatchElementParams.CurrentLOD"); }
};

