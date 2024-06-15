#pragma once

#include "BaseDeclarations.h"
#include "IMFSampleGrabberSinkCallback.h"
#include "IMFClockStateSink.h"
#include "IUnknown.h"
#include "IMediaSink.h"

struct FWmfMediaSampler : IMFSampleGrabberSinkCallback
{
	char __padding[0x38L];
	int& RefCountField() { return *GetNativePointerField<int*>(this, "FWmfMediaSampler.RefCount"); }

	// Functions

	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FWmfMediaSampler.AddRef"); }
	void HandleRegisterSink(TWeakPtr<IMediaSink,1> Sink) { NativeCall<void, TWeakPtr<IMediaSink,1>>(this, "FWmfMediaSampler.HandleRegisterSink", Sink); }
	void HandleUnregisterSink(TWeakPtr<IMediaSink,1> Sink) { NativeCall<void, TWeakPtr<IMediaSink,1>>(this, "FWmfMediaSampler.HandleUnregisterSink", Sink); }
	HRESULT OnProcessSample(const _GUID * MajorMediaType, unsigned int SampleFlags, __int64 SampleTime, __int64 SampleDuration, const char * SampleBuffer, unsigned int SampleSize) { return NativeCall<HRESULT, const _GUID *, unsigned int, __int64, __int64, const char *, unsigned int>(this, "FWmfMediaSampler.OnProcessSample", MajorMediaType, SampleFlags, SampleTime, SampleDuration, SampleBuffer, SampleSize); }
	HRESULT QueryInterface(const _GUID * RefID, void ** Object) { return NativeCall<HRESULT, const _GUID *, void **>(this, "FWmfMediaSampler.QueryInterface", RefID, Object); }
	bool RegisterSink(const TSharedRef<IMediaSink,1> * Sink) { return NativeCall<bool, const TSharedRef<IMediaSink,1> *>(this, "FWmfMediaSampler.RegisterSink", Sink); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FWmfMediaSampler.Release"); }
	bool UnregisterSink(const TSharedRef<IMediaSink,1> * Sink) { return NativeCall<bool, const TSharedRef<IMediaSink,1> *>(this, "FWmfMediaSampler.UnregisterSink", Sink); }
};

