#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPolys : UObject
{
	char __padding[0x18L];
	TTransArray<FPoly>& ElementField() { return *GetNativePointerField<TTransArray<FPoly>*>(this, "UPolys.Element"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UPolys.AddReferencedObjects", InThis, Collector); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "UPolys.Modify", bAlwaysMarkDirty); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPolys.Serialize", Ar); }
};

