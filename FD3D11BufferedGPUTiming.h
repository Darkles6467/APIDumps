#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FD3D11BufferedGPUTiming : FRenderResource
{
	char __padding[0x30L];
	FD3D11DynamicRHI * D3DRHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3D11BufferedGPUTiming.D3DRHI"); }
	int& BufferSizeField() { return *GetNativePointerField<int*>(this, "FD3D11BufferedGPUTiming.BufferSize"); }
	int& CurrentTimestampField() { return *GetNativePointerField<int*>(this, "FD3D11BufferedGPUTiming.CurrentTimestamp"); }
	int& NumIssuedTimestampsField() { return *GetNativePointerField<int*>(this, "FD3D11BufferedGPUTiming.NumIssuedTimestamps"); }
	TRefCountPtr<ID3D11Query> * StartTimestampsField() { return GetNativePointerField<TRefCountPtr<ID3D11Query> *>(this, "FD3D11BufferedGPUTiming.StartTimestamps"); }
	TRefCountPtr<ID3D11Query> * EndTimestampsField() { return GetNativePointerField<TRefCountPtr<ID3D11Query> *>(this, "FD3D11BufferedGPUTiming.EndTimestamps"); }
	bool& bIsTimingField() { return *GetNativePointerField<bool*>(this, "FD3D11BufferedGPUTiming.bIsTiming"); }

	// Functions

	unsigned __int64 GetTiming(bool bGetCurrentResultsAndBlock) { return NativeCall<unsigned __int64, bool>(this, "FD3D11BufferedGPUTiming.GetTiming", bGetCurrentResultsAndBlock); }
	void InitDynamicRHI() { NativeCall<void>(this, "FD3D11BufferedGPUTiming.InitDynamicRHI"); }
	static void PlatformStaticInitialize(void * UserData) { NativeCall<void, void *>(nullptr, "FD3D11BufferedGPUTiming.PlatformStaticInitialize", UserData); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FD3D11BufferedGPUTiming.ReleaseDynamicRHI"); }
};

