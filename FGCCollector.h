#pragma once

#include "BaseDeclarations.h"
#include "FReferenceCollector.h"

struct FGCCollector : FReferenceCollector
{
	char __padding[0x10L];
	bool& bAllowEliminatingReferencesField() { return *GetNativePointerField<bool*>(this, "FGCCollector.bAllowEliminatingReferences"); }

	// Functions

	void AllowEliminatingReferences(bool bAllow) { NativeCall<void, bool>(this, "FGCCollector.AllowEliminatingReferences", bAllow); }
	void HandleObjectReference(UObject ** Object, UObject * ReferencingObject, UObject * ReferencingProperty) { NativeCall<void, UObject **, UObject *, UObject *>(this, "FGCCollector.HandleObjectReference", Object, ReferencingObject, ReferencingProperty); }
};

