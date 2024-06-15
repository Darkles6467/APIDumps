#pragma once

#include "BaseDeclarations.h"
struct FPakEntry
{
	char __padding[0x48L];
	__int64& OffsetField() { return *GetNativePointerField<__int64*>(this, "FPakEntry.Offset"); }
	__int64& SizeField() { return *GetNativePointerField<__int64*>(this, "FPakEntry.Size"); }
	__int64& UncompressedSizeField() { return *GetNativePointerField<__int64*>(this, "FPakEntry.UncompressedSize"); }
	int& CompressionMethodField() { return *GetNativePointerField<int*>(this, "FPakEntry.CompressionMethod"); }
	FieldArray<char, 20> HashField() { return {this, "FPakEntry.Hash"}; }
	TArray<FPakCompressedBlock>& CompressionBlocksField() { return *GetNativePointerField<TArray<FPakCompressedBlock>*>(this, "FPakEntry.CompressionBlocks"); }
	unsigned int& CompressionBlockSizeField() { return *GetNativePointerField<unsigned int*>(this, "FPakEntry.CompressionBlockSize"); }
	char& bEncryptedField() { return *GetNativePointerField<char*>(this, "FPakEntry.bEncrypted"); }
	bool& VerifiedField() { return *GetNativePointerField<bool*>(this, "FPakEntry.Verified"); }

	// Functions

	void Serialize(FArchive * Ar, int Version) { NativeCall<void, FArchive *, int>(this, "FPakEntry.Serialize", Ar, Version); }
};

