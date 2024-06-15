#pragma once

#include "BaseDeclarations.h"
struct FScopedStrictGraphicsPipelineStateUse
{
	char __padding[0x10L];
	const unsigned int& PreviousStrictGraphicsPipelineStateUseField() { return *GetNativePointerField<const unsigned int*>(this, "FScopedStrictGraphicsPipelineStateUse.PreviousStrictGraphicsPipelineStateUse"); }
};

