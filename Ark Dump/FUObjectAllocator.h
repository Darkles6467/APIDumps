#pragma once

#include "BaseDeclarations.h"
struct FUObjectAllocator
{
	char __padding[0x20L];
	int& PermanentObjectPoolSizeField() { return *GetNativePointerField<int*>(this, "FUObjectAllocator.PermanentObjectPoolSize"); }
	char * PermanentObjectPoolField() { return GetNativePointerField<char *>(this, "FUObjectAllocator.PermanentObjectPool"); }
	char * PermanentObjectPoolTailField() { return GetNativePointerField<char *>(this, "FUObjectAllocator.PermanentObjectPoolTail"); }
	char * PermanentObjectPoolExceededTailField() { return GetNativePointerField<char *>(this, "FUObjectAllocator.PermanentObjectPoolExceededTail"); }

	// Functions

	void FreeUObject(UObjectBase * Object) { NativeCall<void, UObjectBase *>(this, "FUObjectAllocator.FreeUObject", Object); }
};

