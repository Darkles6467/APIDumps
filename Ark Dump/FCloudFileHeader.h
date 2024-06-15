#pragma once

#include "BaseDeclarations.h"
struct FCloudFileHeader
{
	char __padding[0x38L];
	FString& HashField() { return *GetNativePointerField<FString*>(this, "FCloudFileHeader.Hash"); }
	FString& DLNameField() { return *GetNativePointerField<FString*>(this, "FCloudFileHeader.DLName"); }
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FCloudFileHeader.FileName"); }
	int& FileSizeField() { return *GetNativePointerField<int*>(this, "FCloudFileHeader.FileSize"); }
};

