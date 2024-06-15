#pragma once

#include "BaseDeclarations.h"
#include "FRHIDepthStencilState.h"
#include "FRHIResource.h"

struct FOpenGLDepthStencilState : FRHIDepthStencilState
{
	char __padding[0x38L];
	FOpenGLDepthStencilStateData& DataField() { return *GetNativePointerField<FOpenGLDepthStencilStateData*>(this, "FOpenGLDepthStencilState.Data"); }
};

