#pragma once

#include "BaseDeclarations.h"
#include "FReferenceCollector.h"

struct FReferenceFinder : FReferenceCollector
{
	char __padding[0x68L];
	bool& bRequireDirectOuterField() { return *GetNativePointerField<bool*>(this, "FReferenceFinder.bRequireDirectOuter"); }
	bool& bShouldIgnoreArchetypeField() { return *GetNativePointerField<bool*>(this, "FReferenceFinder.bShouldIgnoreArchetype"); }
	bool& bSerializeRecursivelyField() { return *GetNativePointerField<bool*>(this, "FReferenceFinder.bSerializeRecursively"); }
	bool& bShouldIgnoreTransientField() { return *GetNativePointerField<bool*>(this, "FReferenceFinder.bShouldIgnoreTransient"); }
	bool& bSerializeClassesField() { return *GetNativePointerField<bool*>(this, "FReferenceFinder.bSerializeClasses"); }
	bool& bFullSerializeField() { return *GetNativePointerField<bool*>(this, "FReferenceFinder.bFullSerialize"); }

	// Functions

	void FindReferences(UObject * Object) { NativeCall<void, UObject *>(this, "FReferenceFinder.FindReferences", Object); }
	void HandleObjectReference(UObject ** InObject, UObject * ReferencingObject, UObject * ReferencingProperty) { NativeCall<void, UObject **, UObject *, UObject *>(this, "FReferenceFinder.HandleObjectReference", InObject, ReferencingObject, ReferencingProperty); }
	bool IsIgnoringArchetypeRef() { return NativeCall<bool>(this, "FReferenceFinder.IsIgnoringArchetypeRef"); }
	bool IsIgnoringTransient() { return NativeCall<bool>(this, "FReferenceFinder.IsIgnoringTransient"); }
};

