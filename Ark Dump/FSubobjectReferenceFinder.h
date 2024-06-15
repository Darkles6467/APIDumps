#pragma once

#include "BaseDeclarations.h"
#include "FReferenceCollector.h"

struct FSubobjectReferenceFinder : FReferenceCollector
{
	char __padding[0x10L];

	// Functions

	void FindSubobjectReferences() { NativeCall<void>(this, "FSubobjectReferenceFinder.FindSubobjectReferences"); }
	void HandleObjectReference(UObject ** InObject, UObject * InReferencingObject, UObject * InReferencingProperty) { NativeCall<void, UObject **, UObject *, UObject *>(this, "FSubobjectReferenceFinder.HandleObjectReference", InObject, InReferencingObject, InReferencingProperty); }
};

