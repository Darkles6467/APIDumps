#pragma once

#include "BaseDeclarations.h"
#include "FEdGraphSchemaAction.h"

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction
{
	char __padding[0x8L];

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FEdGraphSchemaAction_NewNode.AddReferencedObjects", Collector); }
	FName * GetTypeId(FName * result) { return NativeCall<FName *, FName *>(this, "FEdGraphSchemaAction_NewNode.GetTypeId", result); }
	static FName * StaticGetTypeId(FName * result) { return NativeCall<FName *, FName *>(nullptr, "FEdGraphSchemaAction_NewNode.StaticGetTypeId", result); }
};

