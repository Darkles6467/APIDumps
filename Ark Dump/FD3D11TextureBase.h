#pragma once

#include "BaseDeclarations.h"
#include "IRefCountedObject.h"
#include "FExclusiveDepthStencil.h"

struct FD3D11BaseShaderResource : IRefCountedObject
{
	char __padding[0x10L];
	EResourceTransitionAccess& CurrentGPUAccessField() { return *GetNativePointerField<EResourceTransitionAccess*>(this, "FD3D11BaseShaderResource.CurrentGPUAccess"); }
	unsigned int& LastFrameWrittenField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11BaseShaderResource.LastFrameWritten"); }
	bool& bDirtyField() { return *GetNativePointerField<bool*>(this, "FD3D11BaseShaderResource.bDirty"); }
};

struct FD3D11TextureBase : FD3D11BaseShaderResource
{
	char __padding[0x70L];
	FD3D11DynamicRHI * D3DRHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3D11TextureBase.D3DRHI"); }
	void * IHVResourceHandleField() { return GetNativePointerField<void *>(this, "FD3D11TextureBase.IHVResourceHandle"); }
	int& MemorySizeField() { return *GetNativePointerField<int*>(this, "FD3D11TextureBase.MemorySize"); }
	TRefCountPtr<ID3D11Resource>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11Resource>*>(this, "FD3D11TextureBase.Resource"); }
	TRefCountPtr<ID3D11ShaderResourceView>& ShaderResourceViewField() { return *GetNativePointerField<TRefCountPtr<ID3D11ShaderResourceView>*>(this, "FD3D11TextureBase.ShaderResourceView"); }
	TArray<TRefCountPtr<ID3D11RenderTargetView>>& RenderTargetViewsField() { return *GetNativePointerField<TArray<TRefCountPtr<ID3D11RenderTargetView>>*>(this, "FD3D11TextureBase.RenderTargetViews"); }
	bool& bCreatedRTVsPerSliceField() { return *GetNativePointerField<bool*>(this, "FD3D11TextureBase.bCreatedRTVsPerSlice"); }
	int& RTVArraySizeField() { return *GetNativePointerField<int*>(this, "FD3D11TextureBase.RTVArraySize"); }
	FieldArray<TRefCountPtr<ID3D11DepthStencilView>[4], 3114> DepthStencilViewsField() { return {this, "FD3D11TextureBase.DepthStencilViews"}; }
	unsigned int& NumDepthStencilViewsField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11TextureBase.NumDepthStencilViews"); }

	// Functions

	ID3D11DepthStencilView * GetDepthStencilView(FExclusiveDepthStencil AccessType) { return NativeCall<ID3D11DepthStencilView *, FExclusiveDepthStencil>(this, "FD3D11TextureBase.GetDepthStencilView", AccessType); }
};

