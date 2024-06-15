#pragma once

#include "BaseDeclarations.h"
#include "FRHIShader.h"
#include "FRHIResource.h"

struct FRHIPixelShader : FRHIShader
{
};

struct FD3D11PixelShader : FRHIPixelShader
{
	char __padding[0x68L];
	TRefCountPtr<ID3D11PixelShader>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11PixelShader>*>(this, "FD3D11PixelShader.Resource"); }

	// Functions

};

