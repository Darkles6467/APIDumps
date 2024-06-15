#pragma once

#include "BaseDeclarations.h"
#include "FRHIGraphicsPipelineState.h"
#include "FRHIResource.h"

struct FRHIGraphicsPipelineStateFallBack : FRHIGraphicsPipelineState
{
	char __padding[0x120L];
	FGraphicsPipelineStateInitializer& InitializerField() { return *GetNativePointerField<FGraphicsPipelineStateInitializer*>(this, "FRHIGraphicsPipelineStateFallBack.Initializer"); }
};

