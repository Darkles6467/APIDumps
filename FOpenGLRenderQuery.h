#pragma once

#include "BaseDeclarations.h"
#include "FRHIRenderQuery.h"
#include "FRHIResource.h"

struct FOpenGLRenderQuery : FRHIRenderQuery
{
	char __padding[0x20L];
	unsigned int& ResourceField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRenderQuery.Resource"); }
	unsigned __int64& ResourceContextField() { return *GetNativePointerField<unsigned __int64*>(this, "FOpenGLRenderQuery.ResourceContext"); }
	unsigned __int64& ResultField() { return *GetNativePointerField<unsigned __int64*>(this, "FOpenGLRenderQuery.Result"); }
	ERenderQueryType& QueryTypeField() { return *GetNativePointerField<ERenderQueryType*>(this, "FOpenGLRenderQuery.QueryType"); }

	// Functions

};

