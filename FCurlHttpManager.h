#pragma once

#include "BaseDeclarations.h"
#include "FTickerObjectBase.h"
#include "IHttpRequest.h"

struct FHttpManager : FTickerObjectBase
{
	char __padding[0x28L];
	float& DeferredDestroyDelayField() { return *GetNativePointerField<float*>(this, "FHttpManager.DeferredDestroyDelay"); }

	// Functions

	void AddRequest(TSharedRef<IHttpRequest,0> Request) { NativeCall<void, TSharedRef<IHttpRequest,0>>(this, "FHttpManager.AddRequest", Request); }
	void DumpRequests(FOutputDevice * Ar) { NativeCall<void, FOutputDevice *>(this, "FHttpManager.DumpRequests", Ar); }
	bool IsValidRequest(IHttpRequest * RequestPtr) { return NativeCall<bool, IHttpRequest *>(this, "FHttpManager.IsValidRequest", RequestPtr); }
	void RemoveRequest(TSharedRef<IHttpRequest,0> Request) { NativeCall<void, TSharedRef<IHttpRequest,0>>(this, "FHttpManager.RemoveRequest", Request); }
	bool Tick(float DeltaSeconds) { return NativeCall<bool, float>(this, "FHttpManager.Tick", DeltaSeconds); }
};

struct FCurlHttpManager : FHttpManager
{
	char __padding[0x60L];
	void * MultiHandleField() { return GetNativePointerField<void *>(this, "FCurlHttpManager.MultiHandle"); }
	int& LastRunningRequestsField() { return *GetNativePointerField<int*>(this, "FCurlHttpManager.LastRunningRequests"); }

	// Functions

	void AddRequest(TSharedRef<IHttpRequest,0> Request) { NativeCall<void, TSharedRef<IHttpRequest,0>>(this, "FCurlHttpManager.AddRequest", Request); }
	void RemoveRequest(TSharedRef<IHttpRequest,0> Request) { NativeCall<void, TSharedRef<IHttpRequest,0>>(this, "FCurlHttpManager.RemoveRequest", Request); }
	bool Tick(float DeltaSeconds) { return NativeCall<bool, float>(this, "FCurlHttpManager.Tick", DeltaSeconds); }
};

