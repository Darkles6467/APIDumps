#pragma once

#include "BaseDeclarations.h"
#include "FRHIShader.h"
#include "FRHIResource.h"

struct FRHIGeometryShader : FRHIShader
{
};

struct FD3D11GeometryShader : FRHIGeometryShader
{
	char __padding[0x68L];
	TRefCountPtr<ID3D11GeometryShader>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11GeometryShader>*>(this, "FD3D11GeometryShader.Resource"); }

	// Functions

};

