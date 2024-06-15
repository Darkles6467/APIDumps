#pragma once

#include "BaseDeclarations.h"
struct FLocalGraphicsPipelineState
{
	char __padding[0x10L];
	FLocalGraphicsPipelineStateWorkArea * WorkAreaField() { return GetNativePointerField<FLocalGraphicsPipelineStateWorkArea *>(this, "FLocalGraphicsPipelineState.WorkArea"); }
};

