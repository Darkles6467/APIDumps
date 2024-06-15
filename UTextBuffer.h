#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTextBuffer : UObject
{
	char __padding[0x28L];
	int& PosField() { return *GetNativePointerField<int*>(this, "UTextBuffer.Pos"); }
	int& TopField() { return *GetNativePointerField<int*>(this, "UTextBuffer.Top"); }
	FString& TextField() { return *GetNativePointerField<FString*>(this, "UTextBuffer.Text"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UTextBuffer.Serialize", Ar); }
	void Serialize(const wchar_t * Data, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "UTextBuffer.Serialize", Data, Verbosity, Category); }
};

