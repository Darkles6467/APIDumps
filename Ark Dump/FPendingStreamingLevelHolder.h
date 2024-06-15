#pragma once

#include "BaseDeclarations.h"
#include "FGCObject.h"

struct FPendingStreamingLevelHolder : FGCObject
{
	char __padding[0x10L];
	TArray<ULevel *>& LevelsField() { return *GetNativePointerField<TArray<ULevel *>*>(this, "FPendingStreamingLevelHolder.Levels"); }

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FPendingStreamingLevelHolder.AddReferencedObjects", Collector); }
};

