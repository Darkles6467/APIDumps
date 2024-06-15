#pragma once

#include "BaseDeclarations.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"

struct FHttpTest
{
	char __padding[0x38L];
	FString& VerbField() { return *GetNativePointerField<FString*>(this, "FHttpTest.Verb"); }
	FString& PayloadField() { return *GetNativePointerField<FString*>(this, "FHttpTest.Payload"); }
	FString& UrlField() { return *GetNativePointerField<FString*>(this, "FHttpTest.Url"); }
	int& TestsToRunField() { return *GetNativePointerField<int*>(this, "FHttpTest.TestsToRun"); }

	// Functions

	void RequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FHttpTest.RequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void Run() { NativeCall<void>(this, "FHttpTest.Run"); }
};

