#pragma once

#include "BaseDeclarations.h"
#include "IHttpResponse.h"
#include "IHttpBase.h"

struct FCurlHttpResponse : IHttpResponse
{
	char __padding[0x80L];
	FCurlHttpRequest * RequestField() { return GetNativePointerField<FCurlHttpRequest *>(this, "FCurlHttpResponse.Request"); }
	TArray<unsigned char>& PayloadField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCurlHttpResponse.Payload"); }
	int& TotalBytesReadField() { return *GetNativePointerField<int*>(this, "FCurlHttpResponse.TotalBytesRead"); }
	int& HttpCodeField() { return *GetNativePointerField<int*>(this, "FCurlHttpResponse.HttpCode"); }
	int& ContentLengthField() { return *GetNativePointerField<int*>(this, "FCurlHttpResponse.ContentLength"); }
	volatile int& bIsReadyField() { return *GetNativePointerField<volatile int*>(this, "FCurlHttpResponse.bIsReady"); }
	volatile int& bSucceededField() { return *GetNativePointerField<volatile int*>(this, "FCurlHttpResponse.bSucceeded"); }

	// Functions

	TArray<FString> * GetAllHeaders(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "FCurlHttpResponse.GetAllHeaders", result); }
	const TArray<unsigned char> * GetContent() { return NativeCall<const TArray<unsigned char> *>(this, "FCurlHttpResponse.GetContent"); }
	FString * GetContentAsString(FString * result) { return NativeCall<FString *, FString *>(this, "FCurlHttpResponse.GetContentAsString", result); }
	int GetResponseCode() { return NativeCall<int>(this, "FCurlHttpResponse.GetResponseCode"); }
	int GetContentLength() { return NativeCall<int>(this, "FCurlHttpResponse.GetContentLength"); }
	FString * GetContentType(FString * result) { return NativeCall<FString *, FString *>(this, "FCurlHttpResponse.GetContentType", result); }
	FString * GetHeader(FString * result, const FString * HeaderName) { return NativeCall<FString *, FString *, const FString *>(this, "FCurlHttpResponse.GetHeader", result, HeaderName); }
	FString * GetURL(FString * result) { return NativeCall<FString *, FString *>(this, "FCurlHttpResponse.GetURL", result); }
	FString * GetURLParameter(FString * result, const FString * ParameterName) { return NativeCall<FString *, FString *, const FString *>(this, "FCurlHttpResponse.GetURLParameter", result, ParameterName); }
};

