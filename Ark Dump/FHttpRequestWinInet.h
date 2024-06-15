#pragma once

#include "BaseDeclarations.h"
#include "IHttpRequest.h"
#include "IHttpBase.h"

struct FHttpRequestWinInet : IHttpRequest
{
	char __padding[0x190L];
	FURLWinInet& RequestURLField() { return *GetNativePointerField<FURLWinInet*>(this, "FHttpRequestWinInet.RequestURL"); }
	FString& RequestVerbField() { return *GetNativePointerField<FString*>(this, "FHttpRequestWinInet.RequestVerb"); }
	TArray<unsigned char>& RequestPayloadField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FHttpRequestWinInet.RequestPayload"); }
	TSharedPtr<FHttpResponseWinInet,1>& ResponseField() { return *GetNativePointerField<TSharedPtr<FHttpResponseWinInet,1>*>(this, "FHttpRequestWinInet.Response"); }
	EHttpRequestStatus::Type& CompletionStatusField() { return *GetNativePointerField<EHttpRequestStatus::Type*>(this, "FHttpRequestWinInet.CompletionStatus"); }
	void * ConnectionHandleField() { return GetNativePointerField<void *>(this, "FHttpRequestWinInet.ConnectionHandle"); }
	void * RequestHandleField() { return GetNativePointerField<void *>(this, "FHttpRequestWinInet.RequestHandle"); }
	volatile int& ElapsedTimeSinceLastServerResponseField() { return *GetNativePointerField<volatile int*>(this, "FHttpRequestWinInet.ElapsedTimeSinceLastServerResponse"); }
	int& ProgressBytesSentField() { return *GetNativePointerField<int*>(this, "FHttpRequestWinInet.ProgressBytesSent"); }
	long double& StartRequestTimeField() { return *GetNativePointerField<long double*>(this, "FHttpRequestWinInet.StartRequestTime"); }
	bool& bDebugVerboseField() { return *GetNativePointerField<bool*>(this, "FHttpRequestWinInet.bDebugVerbose"); }

	// Functions

	void CancelRequest() { NativeCall<void>(this, "FHttpRequestWinInet.CancelRequest"); }
	void FinishedRequest() { NativeCall<void>(this, "FHttpRequestWinInet.FinishedRequest"); }
	FString * GenerateHeaderBuffer(FString * result, unsigned int ContentLength) { return NativeCall<FString *, FString *, unsigned int>(this, "FHttpRequestWinInet.GenerateHeaderBuffer", result, ContentLength); }
	TArray<FString> * GetAllHeaders(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "FHttpRequestWinInet.GetAllHeaders", result); }
	const TArray<unsigned char> * GetContent() { return NativeCall<const TArray<unsigned char> *>(this, "FHttpRequestWinInet.GetContent"); }
	FString * GetContentType(FString * result) { return NativeCall<FString *, FString *>(this, "FHttpRequestWinInet.GetContentType", result); }
	FString * GetHeader(FString * result, const FString * HeaderName) { return NativeCall<FString *, FString *, const FString *>(this, "FHttpRequestWinInet.GetHeader", result, HeaderName); }
	EHttpRequestStatus::Type GetStatus() { return NativeCall<EHttpRequestStatus::Type>(this, "FHttpRequestWinInet.GetStatus"); }
	FString * GetURLParameter(FString * result, const FString * ParameterName) { return NativeCall<FString *, FString *, const FString *>(this, "FHttpRequestWinInet.GetURLParameter", result, ParameterName); }
	FString * GetVerb(FString * result) { return NativeCall<FString *, FString *>(this, "FHttpRequestWinInet.GetVerb", result); }
	bool ProcessRequest() { return NativeCall<bool>(this, "FHttpRequestWinInet.ProcessRequest"); }
	void SetContent(const TArray<unsigned char> * ContentPayload) { NativeCall<void, const TArray<unsigned char> *>(this, "FHttpRequestWinInet.SetContent", ContentPayload); }
	void SetContentAsString(const FString * ContentString) { NativeCall<void, const FString *>(this, "FHttpRequestWinInet.SetContentAsString", ContentString); }
	void SetHeader(const FString * HeaderName, const FString * HeaderValue) { NativeCall<void, const FString *, const FString *>(this, "FHttpRequestWinInet.SetHeader", HeaderName, HeaderValue); }
	void SetURL(const FString * URL) { NativeCall<void, const FString *>(this, "FHttpRequestWinInet.SetURL", URL); }
	void SetVerb(const FString * Verb) { NativeCall<void, const FString *>(this, "FHttpRequestWinInet.SetVerb", Verb); }
	bool StartRequest() { return NativeCall<bool>(this, "FHttpRequestWinInet.StartRequest"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "FHttpRequestWinInet.Tick", DeltaSeconds); }
	FString * GetURL(FString * result) { return NativeCall<FString *, FString *>(this, "FHttpRequestWinInet.GetURL", result); }
};

