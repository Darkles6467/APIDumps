#pragma once

#include "BaseDeclarations.h"
#include "FBaseShaderResourceTable.h"

struct FOpenGLShaderResourceTable : FBaseShaderResourceTable
{
	char __padding[0x10L];
	TArray<unsigned int>& TextureMapField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FOpenGLShaderResourceTable.TextureMap"); }

	// Functions

};

