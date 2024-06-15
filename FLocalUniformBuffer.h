#pragma once

#include "BaseDeclarations.h"
struct FLocalUniformBuffer
{
	char __padding[0x10L];
	FLocalUniformBufferWorkArea * WorkAreaField() { return GetNativePointerField<FLocalUniformBufferWorkArea *>(this, "FLocalUniformBuffer.WorkArea"); }
};

