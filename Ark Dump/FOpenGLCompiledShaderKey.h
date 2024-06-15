#pragma once

#include "BaseDeclarations.h"
struct FOpenGLCompiledShaderKey
{
	char __padding[0xcL];
	unsigned int& TypeEnumField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCompiledShaderKey.TypeEnum"); }
	unsigned int& CodeSizeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCompiledShaderKey.CodeSize"); }
	unsigned int& CodeCRCField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCompiledShaderKey.CodeCRC"); }
};

