#pragma once

#include "BaseDeclarations.h"
struct FSlateSound
{
	char __padding[0x18L];
	FName& LegacyResourceName_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FSlateSound.LegacyResourceName_DEPRECATED"); }

	// Functions

	FSlateSound * operator=(const FSlateSound * __that) { return NativeCall<FSlateSound *, const FSlateSound *>(this, "FSlateSound.operator=", __that); }
	bool SerializeFromMismatchedTag(const FPropertyTag * Tag, FArchive * Ar) { return NativeCall<bool, const FPropertyTag *, FArchive *>(this, "FSlateSound.SerializeFromMismatchedTag", Tag, Ar); }
};

