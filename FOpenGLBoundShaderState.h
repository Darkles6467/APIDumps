#pragma once

#include "BaseDeclarations.h"
#include "FRHIBoundShaderState.h"
#include "FRHIResource.h"

struct FOpenGLBoundShaderState : FRHIBoundShaderState
{
	char __padding[0x78L];
	FOpenGLLinkedProgram * LinkedProgramField() { return GetNativePointerField<FOpenGLLinkedProgram *>(this, "FOpenGLBoundShaderState.LinkedProgram"); }
	TRefCountPtr<FOpenGLVertexDeclaration>& VertexDeclarationField() { return *GetNativePointerField<TRefCountPtr<FOpenGLVertexDeclaration>*>(this, "FOpenGLBoundShaderState.VertexDeclaration"); }

	// Functions

};

