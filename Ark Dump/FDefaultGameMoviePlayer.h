#pragma once

#include "BaseDeclarations.h"
struct FTickableObjectRenderThread
{
	char __padding[0x10L];
	bool& bRegisteredField() { return *GetNativePointerField<bool*>(this, "FTickableObjectRenderThread.bRegistered"); }

	// Functions

	void Unregister() { NativeCall<void>(this, "FTickableObjectRenderThread.Unregister"); }
	void Register(bool bIsRenderingThreadObject) { NativeCall<void, bool>(this, "FTickableObjectRenderThread.Register", bIsRenderingThreadObject); }
};

struct FDefaultGameMoviePlayer : FTickableObjectRenderThread
{
	char __padding[0xb0L];
	TWeakPtr<SWindow,0>& LoadingScreenWindowPtrField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "FDefaultGameMoviePlayer.LoadingScreenWindowPtr"); }
	TWeakPtr<FSlateRenderer,0>& RendererPtrField() { return *GetNativePointerField<TWeakPtr<FSlateRenderer,0>*>(this, "FDefaultGameMoviePlayer.RendererPtr"); }
	FSlateLoadingSynchronizationMechanism * SyncMechanismField() { return GetNativePointerField<FSlateLoadingSynchronizationMechanism *>(this, "FDefaultGameMoviePlayer.SyncMechanism"); }
	FThreadSafeCounter& MovieStreamingIsDoneField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FDefaultGameMoviePlayer.MovieStreamingIsDone"); }
	FThreadSafeCounter& LoadingIsDoneField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FDefaultGameMoviePlayer.LoadingIsDone"); }
	bool& bUserCalledFinishField() { return *GetNativePointerField<bool*>(this, "FDefaultGameMoviePlayer.bUserCalledFinish"); }
	FLoadingScreenAttributes& LoadingScreenAttributesField() { return *GetNativePointerField<FLoadingScreenAttributes*>(this, "FDefaultGameMoviePlayer.LoadingScreenAttributes"); }
	long double& LastPlayTimeField() { return *GetNativePointerField<long double*>(this, "FDefaultGameMoviePlayer.LastPlayTime"); }
};

