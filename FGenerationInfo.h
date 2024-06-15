#pragma once

#include "BaseDeclarations.h"
struct FGenerationInfo
{
	char __padding[0x8L];
	int& ExportCountField() { return *GetNativePointerField<int*>(this, "FGenerationInfo.ExportCount"); }
	int& NameCountField() { return *GetNativePointerField<int*>(this, "FGenerationInfo.NameCount"); }

	// Functions

	void Serialize(FArchive * Ar, const FPackageFileSummary * Summary) { NativeCall<void, FArchive *, const FPackageFileSummary *>(this, "FGenerationInfo.Serialize", Ar, Summary); }
};

