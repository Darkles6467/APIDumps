#pragma once

#include "BaseDeclarations.h"
struct FUniqueObjectGuid
{
	char __padding[0x10L];
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "FUniqueObjectGuid.Guid"); }

	// Functions

	FUniqueObjectGuid * FixupForPIE(FUniqueObjectGuid * result) { return NativeCall<FUniqueObjectGuid *, FUniqueObjectGuid *>(this, "FUniqueObjectGuid.FixupForPIE", result); }
	static FUniqueObjectGuid * GetOrCreateIDForObject(FUniqueObjectGuid * result, UObject * Object) { return NativeCall<FUniqueObjectGuid *, FUniqueObjectGuid *, UObject *>(nullptr, "FUniqueObjectGuid.GetOrCreateIDForObject", result, Object); }
};

