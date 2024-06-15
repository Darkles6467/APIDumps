#pragma once

#include "BaseDeclarations.h"
struct FD3D11StateCacheBase
{
	char __padding[0x2468L];
	ID3D11DeviceContext * Direct3DDeviceIMContextField() { return GetNativePointerField<ID3D11DeviceContext *>(this, "FD3D11StateCacheBase.Direct3DDeviceIMContext"); }
	FieldArray<ID3D11ShaderResourceView *[6][128], 3116128> CurrentShaderResourceViewsField() { return {this, "FD3D11StateCacheBase.CurrentShaderResourceViews"}; }
	ID3D11RasterizerState * CurrentRasterizerStateField() { return GetNativePointerField<ID3D11RasterizerState *>(this, "FD3D11StateCacheBase.CurrentRasterizerState"); }
	unsigned int& CurrentReferenceStencilField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11StateCacheBase.CurrentReferenceStencil"); }
	ID3D11DepthStencilState * CurrentDepthStencilStateField() { return GetNativePointerField<ID3D11DepthStencilState *>(this, "FD3D11StateCacheBase.CurrentDepthStencilState"); }
	ID3D11VertexShader * CurrentVertexShaderField() { return GetNativePointerField<ID3D11VertexShader *>(this, "FD3D11StateCacheBase.CurrentVertexShader"); }
	ID3D11HullShader * CurrentHullShaderField() { return GetNativePointerField<ID3D11HullShader *>(this, "FD3D11StateCacheBase.CurrentHullShader"); }
	ID3D11DomainShader * CurrentDomainShaderField() { return GetNativePointerField<ID3D11DomainShader *>(this, "FD3D11StateCacheBase.CurrentDomainShader"); }
	ID3D11GeometryShader * CurrentGeometryShaderField() { return GetNativePointerField<ID3D11GeometryShader *>(this, "FD3D11StateCacheBase.CurrentGeometryShader"); }
	ID3D11PixelShader * CurrentPixelShaderField() { return GetNativePointerField<ID3D11PixelShader *>(this, "FD3D11StateCacheBase.CurrentPixelShader"); }
	ID3D11ComputeShader * CurrentComputeShaderField() { return GetNativePointerField<ID3D11ComputeShader *>(this, "FD3D11StateCacheBase.CurrentComputeShader"); }
	FieldArray<float, 4> CurrentBlendFactorField() { return {this, "FD3D11StateCacheBase.CurrentBlendFactor"}; }
	unsigned int& CurrentBlendSampleMaskField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11StateCacheBase.CurrentBlendSampleMask"); }
	ID3D11BlendState * CurrentBlendStateField() { return GetNativePointerField<ID3D11BlendState *>(this, "FD3D11StateCacheBase.CurrentBlendState"); }
	unsigned int& CurrentNumberOfViewportsField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11StateCacheBase.CurrentNumberOfViewports"); }
	FieldArray<D3D11_VIEWPORT[16], 31116> CurrentViewportField() { return {this, "FD3D11StateCacheBase.CurrentViewport"}; }
	FieldArray<FD3D11StateCacheBase::FD3D11VertexBufferState[32], 31131132> CurrentVertexBuffersField() { return {this, "FD3D11StateCacheBase.CurrentVertexBuffers"}; }
	ID3D11Buffer * CurrentIndexBufferField() { return GetNativePointerField<ID3D11Buffer *>(this, "FD3D11StateCacheBase.CurrentIndexBuffer"); }
	FieldArray<_BYTE, 4> CurrentIndexFormatField() { return {this, "FD3D11StateCacheBase.CurrentIndexFormat"}; }
	unsigned int& CurrentIndexOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11StateCacheBase.CurrentIndexOffset"); }
	D3D_PRIMITIVE_TOPOLOGY& CurrentPrimitiveTopologyField() { return *GetNativePointerField<D3D_PRIMITIVE_TOPOLOGY*>(this, "FD3D11StateCacheBase.CurrentPrimitiveTopology"); }
	ID3D11InputLayout * CurrentInputLayoutField() { return GetNativePointerField<ID3D11InputLayout *>(this, "FD3D11StateCacheBase.CurrentInputLayout"); }
	FieldArray<ID3D11SamplerState *[6][16], 311616> CurrentSamplerStatesField() { return {this, "FD3D11StateCacheBase.CurrentSamplerStates"}; }
	bool& bAlwaysSetIndexBuffersField() { return *GetNativePointerField<bool*>(this, "FD3D11StateCacheBase.bAlwaysSetIndexBuffers"); }

	// Functions

	void ClearState() { NativeCall<void>(this, "FD3D11StateCacheBase.ClearState"); }
	void SetContext(ID3D11DeviceContext * InDeviceContext) { NativeCall<void, ID3D11DeviceContext *>(this, "FD3D11StateCacheBase.SetContext", InDeviceContext); }
};

