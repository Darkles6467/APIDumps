#pragma once

#include "BaseDeclarations.h"
#include "FRHIBlendState.h"
#include "FRHIResource.h"

struct FOpenGLBlendState : FRHIBlendState
{
	char __padding[0x120L];
	FOpenGLBlendStateData& DataField() { return *GetNativePointerField<FOpenGLBlendStateData*>(this, "FOpenGLBlendState.Data"); }
};

