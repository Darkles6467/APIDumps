#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FArchiveSaveCompressedProxy : FArchive
{
	char __padding[0x40L];
	TArray<unsigned char> * CompressedDataField() { return GetNativePointerField<TArray<unsigned char> *>(this, "FArchiveSaveCompressedProxy.CompressedData"); }
	int& CurrentIndexField() { return *GetNativePointerField<int*>(this, "FArchiveSaveCompressedProxy.CurrentIndex"); }
	char * TmpDataStartField() { return GetNativePointerField<char *>(this, "FArchiveSaveCompressedProxy.TmpDataStart"); }
	char * TmpDataEndField() { return GetNativePointerField<char *>(this, "FArchiveSaveCompressedProxy.TmpDataEnd"); }
	char * TmpDataField() { return GetNativePointerField<char *>(this, "FArchiveSaveCompressedProxy.TmpData"); }
	bool& bShouldSerializeToArrayField() { return *GetNativePointerField<bool*>(this, "FArchiveSaveCompressedProxy.bShouldSerializeToArray"); }
	__int64& RawBytesSerializedField() { return *GetNativePointerField<__int64*>(this, "FArchiveSaveCompressedProxy.RawBytesSerialized"); }
	ECompressionFlags& CompressionFlagsField() { return *GetNativePointerField<ECompressionFlags*>(this, "FArchiveSaveCompressedProxy.CompressionFlags"); }
};

