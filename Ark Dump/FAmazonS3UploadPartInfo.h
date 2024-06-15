#pragma once

#include "BaseDeclarations.h"
struct FAmazonS3UploadPartInfo
{
	char __padding[0x38L];
	FString& ETagField() { return *GetNativePointerField<FString*>(this, "FAmazonS3UploadPartInfo.ETag"); }
	EAmazonS3MultipartUploadStatus& StatusField() { return *GetNativePointerField<EAmazonS3MultipartUploadStatus*>(this, "FAmazonS3UploadPartInfo.Status"); }
	__int64& BufferStartIdxField() { return *GetNativePointerField<__int64*>(this, "FAmazonS3UploadPartInfo.BufferStartIdx"); }
	__int64& BufferSizeField() { return *GetNativePointerField<__int64*>(this, "FAmazonS3UploadPartInfo.BufferSize"); }

	// Functions

};

