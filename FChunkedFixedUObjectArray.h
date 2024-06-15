#pragma once

#include "BaseDeclarations.h"
struct FChunkedFixedUObjectArray
{
	char __padding[0x20L];
	int& MaxElementsField() { return *GetNativePointerField<int*>(this, "FChunkedFixedUObjectArray.MaxElements"); }
	int& NumElementsField() { return *GetNativePointerField<int*>(this, "FChunkedFixedUObjectArray.NumElements"); }
	int& MaxChunksField() { return *GetNativePointerField<int*>(this, "FChunkedFixedUObjectArray.MaxChunks"); }
	int& NumChunksField() { return *GetNativePointerField<int*>(this, "FChunkedFixedUObjectArray.NumChunks"); }

	// Functions

	void ExpandChunksToIndex(int Index) { NativeCall<void, int>(this, "FChunkedFixedUObjectArray.ExpandChunksToIndex", Index); }
	void PreAllocate(int InMaxElements, bool bPreAllocateChunks) { NativeCall<void, int, bool>(this, "FChunkedFixedUObjectArray.PreAllocate", InMaxElements, bPreAllocateChunks); }
};

