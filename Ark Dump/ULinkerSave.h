#pragma once

#include "BaseDeclarations.h"
#include "ULinker.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULinkerSave : ULinker
{
	char __padding[0x128L];

	// Functions

	__int64 Tell() { return NativeCall<__int64>(this, "ULinkerSave.Tell"); }
	void BeginDestroy() { NativeCall<void>(this, "ULinkerSave.BeginDestroy"); }
	int MapName(const FName * Name) { return NativeCall<int, const FName *>(this, "ULinkerSave.MapName", Name); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "ULinkerSave.Seek", InPos); }
	void Serialize(void * V, __int64 Length) { NativeCall<void, void *, __int64>(this, "ULinkerSave.Serialize", V, Length); }
};

