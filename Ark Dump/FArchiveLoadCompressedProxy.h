#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FArchiveLoadCompressedProxy : FArchive
{
	char __padding[0x40L];
	const TArray<unsigned char> * CompressedDataField() { return GetNativePointerField<const TArray<unsigned char> *>(this, "FArchiveLoadCompressedProxy.CompressedData"); }
	int& CurrentIndexField() { return *GetNativePointerField<int*>(this, "FArchiveLoadCompressedProxy.CurrentIndex"); }
	char * TmpDataStartField() { return GetNativePointerField<char *>(this, "FArchiveLoadCompressedProxy.TmpDataStart"); }
	char * TmpDataEndField() { return GetNativePointerField<char *>(this, "FArchiveLoadCompressedProxy.TmpDataEnd"); }
	char * TmpDataField() { return GetNativePointerField<char *>(this, "FArchiveLoadCompressedProxy.TmpData"); }
	bool& bShouldSerializeFromArrayField() { return *GetNativePointerField<bool*>(this, "FArchiveLoadCompressedProxy.bShouldSerializeFromArray"); }
	__int64& RawBytesSerializedField() { return *GetNativePointerField<__int64*>(this, "FArchiveLoadCompressedProxy.RawBytesSerialized"); }
	ECompressionFlags& CompressionFlagsField() { return *GetNativePointerField<ECompressionFlags*>(this, "FArchiveLoadCompressedProxy.CompressionFlags"); }
};

