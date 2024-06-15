#pragma once

#include "BaseDeclarations.h"
#include "FRHIShader.h"
#include "FRHIResource.h"

struct FRHIHullShader : FRHIShader
{
};

struct FD3D11HullShader : FRHIHullShader
{
	char __padding[0x68L];
	TRefCountPtr<ID3D11HullShader>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11HullShader>*>(this, "FD3D11HullShader.Resource"); }

	// Functions

};

