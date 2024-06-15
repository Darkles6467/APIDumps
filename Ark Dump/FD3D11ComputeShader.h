#pragma once

#include "BaseDeclarations.h"
#include "FRHIShader.h"
#include "FRHIResource.h"

struct FRHIComputeShader : FRHIShader
{
};

struct FD3D11ComputeShader : FRHIComputeShader
{
	char __padding[0x68L];
	TRefCountPtr<ID3D11ComputeShader>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11ComputeShader>*>(this, "FD3D11ComputeShader.Resource"); }

	// Functions

};

