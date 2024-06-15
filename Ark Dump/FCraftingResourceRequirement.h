#pragma once

#include "BaseDeclarations.h"
struct FCraftingResourceRequirement
{
	char __padding[0x18L];
	float& BaseResourceRequirementField() { return *GetNativePointerField<float*>(this, "FCraftingResourceRequirement.BaseResourceRequirement"); }
	bool& bCraftingRequireExactResourceTypeField() { return *GetNativePointerField<bool*>(this, "FCraftingResourceRequirement.bCraftingRequireExactResourceType"); }

	// Functions

	bool NetSerialize(FArchive * Ar, UPackageMap * Map, bool * bOutSuccess) { return NativeCall<bool, FArchive *, UPackageMap *, bool *>(this, "FCraftingResourceRequirement.NetSerialize", Ar, Map, bOutSuccess); }
};

