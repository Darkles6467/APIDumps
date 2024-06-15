#pragma once

#include "BaseDeclarations.h"
#include "FGCObject.h"

struct FScriptObjectReferencer : FGCObject
{
	char __padding[0x10L];

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FScriptObjectReferencer.AddReferencedObjects", Collector); }
};

