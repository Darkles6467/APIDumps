#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FOpenGLDisjointTimeStampQuery : FRenderResource
{
	char __padding[0x18L];
	bool& bIsResultValidField() { return *GetNativePointerField<bool*>(this, "FOpenGLDisjointTimeStampQuery.bIsResultValid"); }
	unsigned int& DisjointQueryField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLDisjointTimeStampQuery.DisjointQuery"); }
	unsigned __int64& ContextField() { return *GetNativePointerField<unsigned __int64*>(this, "FOpenGLDisjointTimeStampQuery.Context"); }
	FOpenGLDynamicRHI * OpenGLRHIField() { return GetNativePointerField<FOpenGLDynamicRHI *>(this, "FOpenGLDisjointTimeStampQuery.OpenGLRHI"); }

	// Functions

	void `default constructor closure'() { NativeCall<void>(this, "FOpenGLDisjointTimeStampQuery.`default constructor closure'"); }
};

