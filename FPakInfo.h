#pragma once

#include "BaseDeclarations.h"
struct FPakInfo
{
	char __padding[0x30L];
	unsigned int& MagicField() { return *GetNativePointerField<unsigned int*>(this, "FPakInfo.Magic"); }
	int& VersionField() { return *GetNativePointerField<int*>(this, "FPakInfo.Version"); }
	__int64& IndexOffsetField() { return *GetNativePointerField<__int64*>(this, "FPakInfo.IndexOffset"); }
	__int64& IndexSizeField() { return *GetNativePointerField<__int64*>(this, "FPakInfo.IndexSize"); }
	FieldArray<char, 20> IndexHashField() { return {this, "FPakInfo.IndexHash"}; }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FPakInfo.Serialize", Ar); }
};

