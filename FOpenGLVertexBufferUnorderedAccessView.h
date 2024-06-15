#pragma once

#include "BaseDeclarations.h"
#include "FOpenGLUnorderedAccessView.h"
#include "FRHIUnorderedAccessView.h"
#include "FRHIResource.h"

struct FOpenGLVertexBufferUnorderedAccessView : FOpenGLUnorderedAccessView
{
	char __padding[0x10L];
	FOpenGLDynamicRHI * OpenGLRHIField() { return GetNativePointerField<FOpenGLDynamicRHI *>(this, "FOpenGLVertexBufferUnorderedAccessView.OpenGLRHI"); }

	// Functions

};

