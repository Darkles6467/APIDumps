#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FBufferedOutputDevice : FOutputDevice
{
	char __padding[0x10L];
	TArray<FBufferedLine>& BufferedLinesField() { return *GetNativePointerField<TArray<FBufferedLine>*>(this, "FBufferedOutputDevice.BufferedLines"); }

	// Functions

	void Serialize(const wchar_t * InData, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FBufferedOutputDevice.Serialize", InData, Verbosity, Category); }
};

