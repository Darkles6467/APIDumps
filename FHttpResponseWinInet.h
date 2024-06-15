#pragma once

#include "BaseDeclarations.h"
#include "IHttpResponse.h"
#include "IHttpBase.h"

struct FHttpResponseWinInet : IHttpResponse
{
	char __padding[0x158L];
	FHttpRequestWinInet * RequestField() { return GetNativePointerField<FHttpRequestWinInet *>(this, "FHttpResponseWinInet.Request"); }
	FURLWinInet& RequestURLField() { return *GetNativePointerField<FURLWinInet*>(this, "FHttpResponseWinInet.RequestURL"); }
	int& AsyncBytesReadField() { return *GetNativePointerField<int*>(this, "FHttpResponseWinInet.AsyncBytesRead"); }
	int& TotalBytesReadField() { return *GetNativePointerField<int*>(this, "FHttpResponseWinInet.TotalBytesRead"); }
	int& ResponseCodeField() { return *GetNativePointerField<int*>(this, "FHttpResponseWinInet.ResponseCode"); }
	int& ContentLengthField() { return *GetNativePointerField<int*>(this, "FHttpResponseWinInet.ContentLength"); }
	TArray<unsigned char>& ResponsePayloadField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FHttpResponseWinInet.ResponsePayload"); }
	volatile int& bIsReadyField() { return *GetNativePointerField<volatile int*>(this, "FHttpResponseWinInet.bIsReady"); }
	volatile int& bResponseSucceededField() { return *GetNativePointerField<volatile int*>(this, "FHttpResponseWinInet.bResponseSucceeded"); }
	FThreadSafeCounter& ProgressBytesReadField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FHttpResponseWinInet.ProgressBytesRead"); }
	int& MaxReadBufferSizeField() { return *GetNativePointerField<int*>(this, "FHttpResponseWinInet.MaxReadBufferSize"); }

	// Functions

	const FString * GetURL(const FString * result) { return NativeCall<const FString *, const FString *>(this, "FHttpResponseWinInet.GetURL", result); }
	TArray<FString> * GetAllHeaders(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "FHttpResponseWinInet.GetAllHeaders", result); }
	const TArray<unsigned char> * GetContent() { return NativeCall<const TArray<unsigned char> *>(this, "FHttpResponseWinInet.GetContent"); }
	FString * GetContentAsString(FString * result) { return NativeCall<FString *, FString *>(this, "FHttpResponseWinInet.GetContentAsString", result); }
	int GetContentLength() { return NativeCall<int>(this, "FHttpResponseWinInet.GetContentLength"); }
	FString * GetContentType(FString * result) { return NativeCall<FString *, FString *>(this, "FHttpResponseWinInet.GetContentType", result); }
	FString * GetHeader(FString * result, const FString * HeaderName) { return NativeCall<FString *, FString *, const FString *>(this, "FHttpResponseWinInet.GetHeader", result, HeaderName); }
	int GetResponseCode() { return NativeCall<int>(this, "FHttpResponseWinInet.GetResponseCode"); }
	FString * GetURLParameter(FString * result, const FString * ParameterName) { return NativeCall<FString *, FString *, const FString *>(this, "FHttpResponseWinInet.GetURLParameter", result, ParameterName); }
	void ProcessResponse() { NativeCall<void>(this, "FHttpResponseWinInet.ProcessResponse"); }
	void ProcessResponseHeaders() { NativeCall<void>(this, "FHttpResponseWinInet.ProcessResponseHeaders"); }
	int QueryContentLength() { return NativeCall<int>(this, "FHttpResponseWinInet.QueryContentLength"); }
	FString * QueryHeaderString(FString * result, unsigned int HttpQueryInfoLevel, const FString * HeaderName) { return NativeCall<FString *, FString *, unsigned int, const FString *>(this, "FHttpResponseWinInet.QueryHeaderString", result, HttpQueryInfoLevel, HeaderName); }
};

