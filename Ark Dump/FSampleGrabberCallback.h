#pragma once

#include "BaseDeclarations.h"
#include "IMFSampleGrabberSinkCallback.h"
#include "IMFClockStateSink.h"
#include "IUnknown.h"

struct FSampleGrabberCallback : IMFSampleGrabberSinkCallback
{
	char __padding[0x10L];
	int& RefCountField() { return *GetNativePointerField<int*>(this, "FSampleGrabberCallback.RefCount"); }
	FThreadSafeCounter& VideoSampleReadyField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FSampleGrabberCallback.VideoSampleReady"); }
	TArray<unsigned char> * TextureDataField() { return GetNativePointerField<TArray<unsigned char> *>(this, "FSampleGrabberCallback.TextureData"); }

	// Functions

	HRESULT OnProcessSample(const _GUID * MajorMediaType, unsigned int SampleFlags, __int64 SampleTime, __int64 SampleDuration, const char * SampleBuffer, unsigned int SampleSize) { return NativeCall<HRESULT, const _GUID *, unsigned int, __int64, __int64, const char *, unsigned int>(this, "FSampleGrabberCallback.OnProcessSample", MajorMediaType, SampleFlags, SampleTime, SampleDuration, SampleBuffer, SampleSize); }
	HRESULT QueryInterface(const _GUID * RefID, void ** Object) { return NativeCall<HRESULT, const _GUID *, void **>(this, "FSampleGrabberCallback.QueryInterface", RefID, Object); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FSampleGrabberCallback.Release"); }
};

