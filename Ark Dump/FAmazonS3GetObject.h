#pragma once

#include "BaseDeclarations.h"
#include "IAmazonS3Operation.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"

struct FAmazonS3GetObject : IAmazonS3Operation
{
	char __padding[0x60L];
	FAmazonS3GetObjectStatus& StatusField() { return *GetNativePointerField<FAmazonS3GetObjectStatus*>(this, "FAmazonS3GetObject.Status"); }
	FString& LocalFilePathField() { return *GetNativePointerField<FString*>(this, "FAmazonS3GetObject.LocalFilePath"); }
	FString& BucketNameField() { return *GetNativePointerField<FString*>(this, "FAmazonS3GetObject.BucketName"); }
	FString& BucketFilenameField() { return *GetNativePointerField<FString*>(this, "FAmazonS3GetObject.BucketFilename"); }
	TArray<unsigned char>& ReadBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FAmazonS3GetObject.ReadBuffer"); }
	int& ResponseCodeField() { return *GetNativePointerField<int*>(this, "FAmazonS3GetObject.ResponseCode"); }

	// Functions

	FString * GetAccessURL(FString * result) { return NativeCall<FString *, FString *>(this, "FAmazonS3GetObject.GetAccessURL", result); }
	void HttpGetObjectResponse(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FAmazonS3GetObject.HttpGetObjectResponse", HttpRequest, HttpResponse, bSucceeded); }
	bool StartDownload(const FString * InBucketName, const FString * InBucketFilename, const FString * InLocalFilePath) { return NativeCall<bool, const FString *, const FString *, const FString *>(this, "FAmazonS3GetObject.StartDownload", InBucketName, InBucketFilename, InLocalFilePath); }
	FString * GetBucketFilename(FString * result) { return NativeCall<FString *, FString *>(this, "FAmazonS3GetObject.GetBucketFilename", result); }
};

