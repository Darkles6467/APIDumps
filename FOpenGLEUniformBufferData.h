#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FOpenGLEUniformBufferData : FRefCountedObject
{
	char __padding[0x10L];
	TArray<unsigned int>& DataField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FOpenGLEUniformBufferData.Data"); }

	// Functions

};

