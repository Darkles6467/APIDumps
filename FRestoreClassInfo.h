#pragma once

#include "BaseDeclarations.h"
struct FRestoreForUObjectOverwrite
{
	char __padding[0x8L];
};

struct FRestoreClassInfo : FRestoreForUObjectOverwrite
{
	char __padding[0x50L];
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "FRestoreClassInfo.Flags"); }
	unsigned __int64& CastFlagsField() { return *GetNativePointerField<unsigned __int64*>(this, "FRestoreClassInfo.CastFlags"); }
	TArray<FNativeFunctionLookup>& NativeFunctionLookupTableField() { return *GetNativePointerField<TArray<FNativeFunctionLookup>*>(this, "FRestoreClassInfo.NativeFunctionLookupTable"); }

	// Functions

	void Restore() { NativeCall<void>(this, "FRestoreClassInfo.Restore"); }
};

