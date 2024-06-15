#pragma once

#include "BaseDeclarations.h"
struct FEngramCustomFolder
{
	char __padding[0x20L];
	FString& FolderNameField() { return *GetNativePointerField<FString*>(this, "FEngramCustomFolder.FolderName"); }

	// Functions

	FEngramCustomFolder * operator=(const FEngramCustomFolder * __that) { return NativeCall<FEngramCustomFolder *, const FEngramCustomFolder *>(this, "FEngramCustomFolder.operator=", __that); }
};

