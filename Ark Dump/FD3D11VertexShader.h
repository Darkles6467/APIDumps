#pragma once

#include "BaseDeclarations.h"
#include "FRHIShader.h"
#include "FRHIResource.h"

struct FRHIVertexShader : FRHIShader
{
};

struct FD3D11VertexShader : FRHIVertexShader
{
	char __padding[0x80L];
	TRefCountPtr<ID3D11VertexShader>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11VertexShader>*>(this, "FD3D11VertexShader.Resource"); }
	TArray<unsigned char>& CodeField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FD3D11VertexShader.Code"); }
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FD3D11VertexShader.Offset"); }

	// Functions

};

