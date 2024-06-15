#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FD3D11ConstantBuffer : FRenderResource
{
	char __padding[0x30L];
	FD3D11DynamicRHI * D3DRHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3D11ConstantBuffer.D3DRHI"); }
	unsigned int& MaxSizeField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11ConstantBuffer.MaxSize"); }
	char * ShadowDataField() { return GetNativePointerField<char *>(this, "FD3D11ConstantBuffer.ShadowData"); }
	unsigned int& CurrentUpdateSizeField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11ConstantBuffer.CurrentUpdateSize"); }
	unsigned int& TotalUpdateSizeField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11ConstantBuffer.TotalUpdateSize"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FD3D11ConstantBuffer.InitDynamicRHI"); }
};

struct FWinD3D11ConstantBuffer : FD3D11ConstantBuffer
{
	char __padding[0x10L];
	TRefCountPtr<ID3D11Buffer> * BuffersField() { return GetNativePointerField<TRefCountPtr<ID3D11Buffer> *>(this, "FWinD3D11ConstantBuffer.Buffers"); }
	unsigned int& CurrentSubBufferField() { return *GetNativePointerField<unsigned int*>(this, "FWinD3D11ConstantBuffer.CurrentSubBuffer"); }
	unsigned int& NumSubBuffersField() { return *GetNativePointerField<unsigned int*>(this, "FWinD3D11ConstantBuffer.NumSubBuffers"); }

	// Functions

	bool CommitConstantsToDevice(bool bDiscardSharedConstants) { return NativeCall<bool, bool>(this, "FWinD3D11ConstantBuffer.CommitConstantsToDevice", bDiscardSharedConstants); }
	void InitDynamicRHI() { NativeCall<void>(this, "FWinD3D11ConstantBuffer.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FWinD3D11ConstantBuffer.ReleaseDynamicRHI"); }
};

