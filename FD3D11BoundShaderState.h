#pragma once

#include "BaseDeclarations.h"
#include "FRHIBoundShaderState.h"
#include "FRHIResource.h"

struct FD3D11BoundShaderState : FRHIBoundShaderState
{
	char __padding[0x78L];
	TRefCountPtr<ID3D11InputLayout>& InputLayoutField() { return *GetNativePointerField<TRefCountPtr<ID3D11InputLayout>*>(this, "FD3D11BoundShaderState.InputLayout"); }
	TRefCountPtr<ID3D11VertexShader>& VertexShaderField() { return *GetNativePointerField<TRefCountPtr<ID3D11VertexShader>*>(this, "FD3D11BoundShaderState.VertexShader"); }
	TRefCountPtr<ID3D11PixelShader>& PixelShaderField() { return *GetNativePointerField<TRefCountPtr<ID3D11PixelShader>*>(this, "FD3D11BoundShaderState.PixelShader"); }
	TRefCountPtr<ID3D11HullShader>& HullShaderField() { return *GetNativePointerField<TRefCountPtr<ID3D11HullShader>*>(this, "FD3D11BoundShaderState.HullShader"); }
	TRefCountPtr<ID3D11DomainShader>& DomainShaderField() { return *GetNativePointerField<TRefCountPtr<ID3D11DomainShader>*>(this, "FD3D11BoundShaderState.DomainShader"); }
	TRefCountPtr<ID3D11GeometryShader>& GeometryShaderField() { return *GetNativePointerField<TRefCountPtr<ID3D11GeometryShader>*>(this, "FD3D11BoundShaderState.GeometryShader"); }
	FieldArray<bool, 6> bShaderNeedsGlobalConstantBufferField() { return {this, "FD3D11BoundShaderState.bShaderNeedsGlobalConstantBuffer"}; }

	// Functions

};

