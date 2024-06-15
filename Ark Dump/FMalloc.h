#pragma once

#include "BaseDeclarations.h"
#include "FExec.h"

struct FMalloc : FExec
{

	// Functions

	void FreeTrack(void * Original, bool * IsTracked) { NativeCall<void, void *, bool *>(this, "FMalloc.FreeTrack", Original, IsTracked); }
	void * MallocTrack(unsigned __int64 Count, bool * IsTracked, unsigned int Alignment) { return NativeCall<void *, unsigned __int64, bool *, unsigned int>(this, "FMalloc.MallocTrack", Count, IsTracked, Alignment); }
	void * ReallocTrack(void * Original, unsigned __int64 Count, char * IsTracked, unsigned int Alignment) { return NativeCall<void *, void *, unsigned __int64, char *, unsigned int>(this, "FMalloc.ReallocTrack", Original, Count, IsTracked, Alignment); }
};

