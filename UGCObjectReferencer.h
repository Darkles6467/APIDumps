#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGCObjectReferencer : UObject
{
	char __padding[0x10L];

	// Functions

	void AddObject(FGCObject * Object) { NativeCall<void, FGCObject *>(this, "UGCObjectReferencer.AddObject", Object); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UGCObjectReferencer.AddReferencedObjects", InThis, Collector); }
	void FinishDestroy() { NativeCall<void>(this, "UGCObjectReferencer.FinishDestroy"); }
	void RemoveObject(FGCObject * Object) { NativeCall<void, FGCObject *>(this, "UGCObjectReferencer.RemoveObject", Object); }
};

