#pragma once

#include "BaseDeclarations.h"
#include "FRHIRasterizerState.h"
#include "FRHIResource.h"

struct FOpenGLRasterizerState : FRHIRasterizerState
{
	char __padding[0x10L];
	FOpenGLRasterizerStateData& DataField() { return *GetNativePointerField<FOpenGLRasterizerStateData*>(this, "FOpenGLRasterizerState.Data"); }
};

