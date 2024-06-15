#pragma once

#include "BaseDeclarations.h"
struct FLocalGraphicsPipelineStateWorkArea
{
	char __padding[0x128L];
	FGraphicsPipelineStateInitializer& ArgsField() { return *GetNativePointerField<FGraphicsPipelineStateInitializer*>(this, "FLocalGraphicsPipelineStateWorkArea.Args"); }
	FComputedGraphicsPipelineState * ComputedGraphicsPipelineStateField() { return GetNativePointerField<FComputedGraphicsPipelineState *>(this, "FLocalGraphicsPipelineStateWorkArea.ComputedGraphicsPipelineState"); }
};

