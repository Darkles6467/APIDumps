#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HModel : HHitProxy
{
	char __padding[0x10L];
	UModelComponent * ComponentField() { return GetNativePointerField<UModelComponent *>(this, "HModel.Component"); }
	UModel * ModelField() { return GetNativePointerField<UModel *>(this, "HModel.Model"); }

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "HModel.AddReferencedObjects", Collector); }
};

