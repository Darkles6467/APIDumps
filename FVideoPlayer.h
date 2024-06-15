#pragma once

#include "BaseDeclarations.h"
#include "IMFAsyncCallback.h"
#include "IUnknown.h"

struct FVideoPlayer : IMFAsyncCallback
{
	char __padding[0x20L];
	int& RefCountField() { return *GetNativePointerField<int*>(this, "FVideoPlayer.RefCount"); }
	IMFMediaSession * MediaSessionField() { return GetNativePointerField<IMFMediaSession *>(this, "FVideoPlayer.MediaSession"); }
	IMFMediaSource * MediaSourceField() { return GetNativePointerField<IMFMediaSource *>(this, "FVideoPlayer.MediaSource"); }
	FThreadSafeCounter& MovieIsFinishedField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FVideoPlayer.MovieIsFinished"); }
	FThreadSafeCounter& CloseIsPostedField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FVideoPlayer.CloseIsPosted"); }

	// Functions

	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FVideoPlayer.AddRef"); }
	FIntPoint * AddStreamToTopology(FIntPoint * result, IMFTopology * Topology, IMFPresentationDescriptor * PresentationDesc, IMFStreamDescriptor * StreamDesc, FSampleGrabberCallback * SampleGrabberCallback) { return NativeCall<FIntPoint *, FIntPoint *, IMFTopology *, IMFPresentationDescriptor *, IMFStreamDescriptor *, FSampleGrabberCallback *>(this, "FVideoPlayer.AddStreamToTopology", result, Topology, PresentationDesc, StreamDesc, SampleGrabberCallback); }
	HRESULT Invoke(IMFAsyncResult * AsyncResult) { return NativeCall<HRESULT, IMFAsyncResult *>(this, "FVideoPlayer.Invoke", AsyncResult); }
	FIntPoint * OpenFile(FIntPoint * result, const FString * FilePath, FSampleGrabberCallback * SampleGrabberCallback) { return NativeCall<FIntPoint *, FIntPoint *, const FString *, FSampleGrabberCallback *>(this, "FVideoPlayer.OpenFile", result, FilePath, SampleGrabberCallback); }
	HRESULT QueryInterface(const _GUID * RefID, void ** Object) { return NativeCall<HRESULT, const _GUID *, void **>(this, "FVideoPlayer.QueryInterface", RefID, Object); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FVideoPlayer.Release"); }
	FIntPoint * SetPlaybackTopology(FIntPoint * result, FSampleGrabberCallback * SampleGrabberCallback) { return NativeCall<FIntPoint *, FIntPoint *, FSampleGrabberCallback *>(this, "FVideoPlayer.SetPlaybackTopology", result, SampleGrabberCallback); }
	void Shutdown() { NativeCall<void>(this, "FVideoPlayer.Shutdown"); }
};

