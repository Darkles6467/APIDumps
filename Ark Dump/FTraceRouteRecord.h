#pragma once

#include "BaseDeclarations.h"
struct FTraceRouteRecord
{
	char __padding[0x18L];
	FObjectGraphNode * GraphNodeField() { return GetNativePointerField<FObjectGraphNode *>(this, "FTraceRouteRecord.GraphNode"); }

	// Functions

	void Add(UProperty * InReferencerProperty) { NativeCall<void, UProperty *>(this, "FTraceRouteRecord.Add", InReferencerProperty); }
};

