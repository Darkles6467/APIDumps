#pragma once

#include "BaseDeclarations.h"
#include "FRHISamplerState.h"
#include "FRHIResource.h"

struct FOpenGLSamplerState : FRHISamplerState
{
	char __padding[0x28L];
	unsigned int& ResourceField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLSamplerState.Resource"); }
	FOpenGLSamplerStateData& DataField() { return *GetNativePointerField<FOpenGLSamplerStateData*>(this, "FOpenGLSamplerState.Data"); }

	// Functions

};

