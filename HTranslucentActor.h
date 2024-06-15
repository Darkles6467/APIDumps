#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HActor : HHitProxy
{
	char __padding[0x18L];
	int& MaterialIndexField() { return *GetNativePointerField<int*>(this, "HActor.MaterialIndex"); }

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "HActor.AddReferencedObjects", Collector); }
};

struct HTranslucentActor : HActor
{
};

