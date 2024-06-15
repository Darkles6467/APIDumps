#pragma once

#include "BaseDeclarations.h"
struct FMessageTypeMap
{
	char __padding[0x78L];
	FWindowsCriticalSection& SyncObjField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FMessageTypeMap.SyncObj"); }

	// Functions

	void Add(const FString * Name, UScriptStruct * Type) { NativeCall<void, const FString *, UScriptStruct *>(this, "FMessageTypeMap.Add", Name, Type); }
};

