#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FOpenGLBufferedGPUTiming : FRenderResource
{
	char __padding[0x40L];
	FOpenGLDynamicRHI * OpenGLRHIField() { return GetNativePointerField<FOpenGLDynamicRHI *>(this, "FOpenGLBufferedGPUTiming.OpenGLRHI"); }
	int& BufferSizeField() { return *GetNativePointerField<int*>(this, "FOpenGLBufferedGPUTiming.BufferSize"); }
	int& CurrentTimestampField() { return *GetNativePointerField<int*>(this, "FOpenGLBufferedGPUTiming.CurrentTimestamp"); }
	int& NumIssuedTimestampsField() { return *GetNativePointerField<int*>(this, "FOpenGLBufferedGPUTiming.NumIssuedTimestamps"); }
	TArray<FOpenGLRenderQuery>& StartTimestampsField() { return *GetNativePointerField<TArray<FOpenGLRenderQuery>*>(this, "FOpenGLBufferedGPUTiming.StartTimestamps"); }
	TArray<FOpenGLRenderQuery>& EndTimestampsField() { return *GetNativePointerField<TArray<FOpenGLRenderQuery>*>(this, "FOpenGLBufferedGPUTiming.EndTimestamps"); }
	bool& bIsTimingField() { return *GetNativePointerField<bool*>(this, "FOpenGLBufferedGPUTiming.bIsTiming"); }

	// Functions

	void EndTiming() { NativeCall<void>(this, "FOpenGLBufferedGPUTiming.EndTiming"); }
	unsigned __int64 GetTiming(bool bGetCurrentResultsAndBlock) { return NativeCall<unsigned __int64, bool>(this, "FOpenGLBufferedGPUTiming.GetTiming", bGetCurrentResultsAndBlock); }
	void InitDynamicRHI() { NativeCall<void>(this, "FOpenGLBufferedGPUTiming.InitDynamicRHI"); }
	static void PlatformStaticInitialize(void * UserData) { NativeCall<void, void *>(nullptr, "FOpenGLBufferedGPUTiming.PlatformStaticInitialize", UserData); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FOpenGLBufferedGPUTiming.ReleaseDynamicRHI"); }
	void StartTiming() { NativeCall<void>(this, "FOpenGLBufferedGPUTiming.StartTiming"); }
};

