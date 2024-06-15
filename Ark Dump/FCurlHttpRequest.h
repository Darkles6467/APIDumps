#pragma once

#include "BaseDeclarations.h"
#include "IHttpRequest.h"
#include "IHttpBase.h"
#include "FOpenGLBaseTextureCube.h"

struct FCurlHttpRequest : IHttpRequest
{
	char __padding[0xd8L];
	void * MultiHandleField() { return GetNativePointerField<void *>(this, "FCurlHttpRequest.MultiHandle"); }
	void * EasyHandleField() { return GetNativePointerField<void *>(this, "FCurlHttpRequest.EasyHandle"); }
	curl_slist * HeaderListField() { return GetNativePointerField<curl_slist *>(this, "FCurlHttpRequest.HeaderList"); }
	FString& URLField() { return *GetNativePointerField<FString*>(this, "FCurlHttpRequest.URL"); }
	FString& VerbField() { return *GetNativePointerField<FString*>(this, "FCurlHttpRequest.Verb"); }
	bool& bCanceledField() { return *GetNativePointerField<bool*>(this, "FCurlHttpRequest.bCanceled"); }
	bool& bCompletedField() { return *GetNativePointerField<bool*>(this, "FCurlHttpRequest.bCompleted"); }
	CURLcode& CurlCompletionResultField() { return *GetNativePointerField<CURLcode*>(this, "FCurlHttpRequest.CurlCompletionResult"); }
	bool& bEasyHandleAddedToMultiField() { return *GetNativePointerField<bool*>(this, "FCurlHttpRequest.bEasyHandleAddedToMulti"); }
	unsigned int& BytesSentField() { return *GetNativePointerField<unsigned int*>(this, "FCurlHttpRequest.BytesSent"); }
	TSharedPtr<FCurlHttpResponse,1>& ResponseField() { return *GetNativePointerField<TSharedPtr<FCurlHttpResponse,1>*>(this, "FCurlHttpRequest.Response"); }
	TArray<unsigned char>& RequestPayloadField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCurlHttpRequest.RequestPayload"); }
	EHttpRequestStatus::Type& CompletionStatusField() { return *GetNativePointerField<EHttpRequestStatus::Type*>(this, "FCurlHttpRequest.CompletionStatus"); }
	float& ElapsedTimeField() { return *GetNativePointerField<float*>(this, "FCurlHttpRequest.ElapsedTime"); }

	// Functions

	void * OnRequestProgress() { return NativeCall<void *>(this, "FCurlHttpRequest.OnRequestProgress"); }
	void CancelRequest() { NativeCall<void>(this, "FCurlHttpRequest.CancelRequest"); }
	void FinishedRequest() { NativeCall<void>(this, "FCurlHttpRequest.FinishedRequest"); }
	TArray<FString> * GetAllHeaders(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "FCurlHttpRequest.GetAllHeaders", result); }
	FString * GetContentType(FString * result) { return NativeCall<FString *, FString *>(this, "FCurlHttpRequest.GetContentType", result); }
	FString * GetHeader(FString * result, const FString * HeaderName) { return NativeCall<FString *, FString *, const FString *>(this, "FCurlHttpRequest.GetHeader", result, HeaderName); }
	EHttpRequestStatus::Type GetStatus() { return NativeCall<EHttpRequestStatus::Type>(this, "FCurlHttpRequest.GetStatus"); }
	FString * GetURLParameter(FString * result, const FString * ParameterName) { return NativeCall<FString *, FString *, const FString *>(this, "FCurlHttpRequest.GetURLParameter", result, ParameterName); }
	bool ProcessRequest() { return NativeCall<bool>(this, "FCurlHttpRequest.ProcessRequest"); }
	unsigned __int64 ReceiveResponseBodyCallback(void * Ptr, unsigned __int64 SizeInBlocks, unsigned __int64 BlockSizeInBytes) { return NativeCall<unsigned __int64, void *, unsigned __int64, unsigned __int64>(this, "FCurlHttpRequest.ReceiveResponseBodyCallback", Ptr, SizeInBlocks, BlockSizeInBytes); }
	unsigned __int64 ReceiveResponseHeaderCallback(void * Ptr, unsigned __int64 SizeInBlocks, unsigned __int64 BlockSizeInBytes) { return NativeCall<unsigned __int64, void *, unsigned __int64, unsigned __int64>(this, "FCurlHttpRequest.ReceiveResponseHeaderCallback", Ptr, SizeInBlocks, BlockSizeInBytes); }
	void SetContent(const TArray<unsigned char> * ContentPayload) { NativeCall<void, const TArray<unsigned char> *>(this, "FCurlHttpRequest.SetContent", ContentPayload); }
	void SetContentAsString(const FString * ContentString) { NativeCall<void, const FString *>(this, "FCurlHttpRequest.SetContentAsString", ContentString); }
	void SetHeader(const FString * HeaderName, const FString * HeaderValue) { NativeCall<void, const FString *, const FString *>(this, "FCurlHttpRequest.SetHeader", HeaderName, HeaderValue); }
	void SetURL(const FString * InURL) { NativeCall<void, const FString *>(this, "FCurlHttpRequest.SetURL", InURL); }
	void SetVerb(const FString * InVerb) { NativeCall<void, const FString *>(this, "FCurlHttpRequest.SetVerb", InVerb); }
	bool StartRequest() { return NativeCall<bool>(this, "FCurlHttpRequest.StartRequest"); }
	static unsigned __int64 StaticReceiveResponseBodyCallback(void * Ptr, unsigned __int64 SizeInBlocks, unsigned __int64 BlockSizeInBytes, void * UserData) { return NativeCall<unsigned __int64, void *, unsigned __int64, unsigned __int64, void *>(nullptr, "FCurlHttpRequest.StaticReceiveResponseBodyCallback", Ptr, SizeInBlocks, BlockSizeInBytes, UserData); }
	static unsigned __int64 StaticReceiveResponseHeaderCallback(void * Ptr, unsigned __int64 SizeInBlocks, unsigned __int64 BlockSizeInBytes, void * UserData) { return NativeCall<unsigned __int64, void *, unsigned __int64, unsigned __int64, void *>(nullptr, "FCurlHttpRequest.StaticReceiveResponseHeaderCallback", Ptr, SizeInBlocks, BlockSizeInBytes, UserData); }
	static unsigned __int64 StaticUploadCallback(void * Ptr, unsigned __int64 SizeInBlocks, unsigned __int64 BlockSizeInBytes, void * UserData) { return NativeCall<unsigned __int64, void *, unsigned __int64, unsigned __int64, void *>(nullptr, "FCurlHttpRequest.StaticUploadCallback", Ptr, SizeInBlocks, BlockSizeInBytes, UserData); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "FCurlHttpRequest.Tick", DeltaSeconds); }
	const FString * OnProcessRequestComplete() { return NativeCall<const FString *>(this, "FCurlHttpRequest.OnProcessRequestComplete"); }
};

