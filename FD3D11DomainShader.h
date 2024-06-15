#pragma once

#include "BaseDeclarations.h"
#include "FRHIShader.h"
#include "FRHIResource.h"

struct FRHIDomainShader : FRHIShader
{
};

struct FD3D11DomainShader : FRHIDomainShader
{
	char __padding[0x68L];
	TRefCountPtr<ID3D11DomainShader>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11DomainShader>*>(this, "FD3D11DomainShader.Resource"); }

	// Functions

};

