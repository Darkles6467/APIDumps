#pragma once

#include "BaseDeclarations.h"
#include "IAmazonS3Operation.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"

struct FAmazonS3MultipartUpload : IAmazonS3Operation
{
	char __padding[0xb8L];
	int& NumConcurrentUploadsField() { return *GetNativePointerField<int*>(this, "FAmazonS3MultipartUpload.NumConcurrentUploads"); }
	FString& FriendlyUploadNameField() { return *GetNativePointerField<FString*>(this, "FAmazonS3MultipartUpload.FriendlyUploadName"); }
	bool& Cached_bAllowForcedItemDownloadField() { return *GetNativePointerField<bool*>(this, "FAmazonS3MultipartUpload.Cached_bAllowForcedItemDownload"); }
	EAmazonS3MultipartUploadStatus& StatusField() { return *GetNativePointerField<EAmazonS3MultipartUploadStatus*>(this, "FAmazonS3MultipartUpload.Status"); }
	FString& LocalFilePathField() { return *GetNativePointerField<FString*>(this, "FAmazonS3MultipartUpload.LocalFilePath"); }
	FString& BucketNameField() { return *GetNativePointerField<FString*>(this, "FAmazonS3MultipartUpload.BucketName"); }
	FString& BucketFilenameField() { return *GetNativePointerField<FString*>(this, "FAmazonS3MultipartUpload.BucketFilename"); }
	TArray<unsigned char>& BufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FAmazonS3MultipartUpload.Buffer"); }
	FString& MimeTypeField() { return *GetNativePointerField<FString*>(this, "FAmazonS3MultipartUpload.MimeType"); }
	FString& UploadIdField() { return *GetNativePointerField<FString*>(this, "FAmazonS3MultipartUpload.UploadId"); }
	TArray<FAmazonS3UploadPartInfo>& UploadPartsField() { return *GetNativePointerField<TArray<FAmazonS3UploadPartInfo>*>(this, "FAmazonS3MultipartUpload.UploadParts"); }

	// Functions

	void CancelUpload() { NativeCall<void>(this, "FAmazonS3MultipartUpload.CancelUpload"); }
	bool DeleteFile(const FString * InBucketName, const FString * InFilename) { return NativeCall<bool, const FString *, const FString *>(this, "FAmazonS3MultipartUpload.DeleteFile", InBucketName, InFilename); }
	void FinishMultiPartUpload() { NativeCall<void>(this, "FAmazonS3MultipartUpload.FinishMultiPartUpload"); }
	FString * GetAccessURL(FString * result) { return NativeCall<FString *, FString *>(this, "FAmazonS3MultipartUpload.GetAccessURL", result); }
	void HttpCompleteMultipartResponse(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FAmazonS3MultipartUpload.HttpCompleteMultipartResponse", HttpRequest, HttpResponse, bSucceeded); }
	void HttpDeleteResponse(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FAmazonS3MultipartUpload.HttpDeleteResponse", HttpRequest, HttpResponse, bSucceeded); }
	void HttpInitiateMultipartResponse(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FAmazonS3MultipartUpload.HttpInitiateMultipartResponse", HttpRequest, HttpResponse, bSucceeded); }
	void HttpUploadPartResponse(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FAmazonS3MultipartUpload.HttpUploadPartResponse", HttpRequest, HttpResponse, bSucceeded); }
	void ProcessNextEvent() { NativeCall<void>(this, "FAmazonS3MultipartUpload.ProcessNextEvent"); }
	bool StartUpload(const FString * InBucketName, const FString * InBucketFilename, const FString * InLocalFilePath) { return NativeCall<bool, const FString *, const FString *, const FString *>(this, "FAmazonS3MultipartUpload.StartUpload", InBucketName, InBucketFilename, InLocalFilePath); }
	bool StartUpload(const FString * InBucketName, const FString * InFilename, const TArray<unsigned char> * InBuffer) { return NativeCall<bool, const FString *, const FString *, const TArray<unsigned char> *>(this, "FAmazonS3MultipartUpload.StartUpload", InBucketName, InFilename, InBuffer); }
	bool StartUpload(bool ShouldDelete) { return NativeCall<bool, bool>(this, "FAmazonS3MultipartUpload.StartUpload", ShouldDelete); }
};

