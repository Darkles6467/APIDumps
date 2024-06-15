#pragma once

#include "BaseDeclarations.h"
struct FOpenGLReleasedQuery
{
	char __padding[0x10L];
	HGLRC__ * ContextField() { return GetNativePointerField<HGLRC__ *>(this, "FOpenGLReleasedQuery.Context"); }
	unsigned int& QueryField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLReleasedQuery.Query"); }
};

