#pragma once

#include "BaseDeclarations.h"
struct FICUDataCallbacks
{

	// Functions

	static void CloseDataFile(const void * context, void *const fileContext, void *const contents) { NativeCall<void, const void *, void *const, void *const>(nullptr, "FICUDataCallbacks.CloseDataFile", context, fileContext, contents); }
	static char OpenDataFile(const void * context, void ** fileContext, void ** contents, const char * path) { return NativeCall<char, const void *, void **, void **, const char *>(nullptr, "FICUDataCallbacks.OpenDataFile", context, fileContext, contents, path); }
};

