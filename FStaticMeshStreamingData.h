#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshStreamingData
{
	char __padding[0x30L];
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FStaticMeshStreamingData.Filename"); }
	__int64& OffsetInFileField() { return *GetNativePointerField<__int64*>(this, "FStaticMeshStreamingData.OffsetInFile"); }
	__int64& SizeField() { return *GetNativePointerField<__int64*>(this, "FStaticMeshStreamingData.Size"); }
	TArray<unsigned char>& LoadedLODDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FStaticMeshStreamingData.LoadedLODData"); }
};

