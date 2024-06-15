#pragma once

#include "BaseDeclarations.h"
struct FLocalUniformBufferWorkArea
{
	char __padding[0x18L];
	void * ContentsField() { return GetNativePointerField<void *>(this, "FLocalUniformBufferWorkArea.Contents"); }
	FComputedUniformBuffer * ComputedUniformBufferField() { return GetNativePointerField<FComputedUniformBuffer *>(this, "FLocalUniformBufferWorkArea.ComputedUniformBuffer"); }

	// Functions

};

