#pragma once

#include "BaseDeclarations.h"
struct FSkeletalMeshStreamingData
{
	char __padding[0x30L];
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FSkeletalMeshStreamingData.Filename"); }
	__int64& OffsetInFileField() { return *GetNativePointerField<__int64*>(this, "FSkeletalMeshStreamingData.OffsetInFile"); }
	__int64& SizeField() { return *GetNativePointerField<__int64*>(this, "FSkeletalMeshStreamingData.Size"); }
	TArray<unsigned char>& LoadedLODDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FSkeletalMeshStreamingData.LoadedLODData"); }
};

