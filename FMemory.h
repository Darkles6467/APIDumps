#pragma once

#include "BaseDeclarations.h"
struct FMemory
{

	// Functions

	static void Free(void * Original) { NativeCall<void, void *>(nullptr, "FMemory.Free", Original); }
	static void * Malloc(unsigned __int64 Count, unsigned int Alignment) { return NativeCall<void *, unsigned __int64, unsigned int>(nullptr, "FMemory.Malloc", Count, Alignment); }
	static void * Realloc(void * Original, unsigned __int64 Count, unsigned int Alignment) { return NativeCall<void *, void *, unsigned __int64, unsigned int>(nullptr, "FMemory.Realloc", Original, Count, Alignment); }
};

