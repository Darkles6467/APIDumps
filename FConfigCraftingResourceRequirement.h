#pragma once

#include "BaseDeclarations.h"
struct FConfigCraftingResourceRequirement
{
	char __padding[0x20L];
	float& BaseResourceRequirementField() { return *GetNativePointerField<float*>(this, "FConfigCraftingResourceRequirement.BaseResourceRequirement"); }
	FString& ResourceItemTypeStringField() { return *GetNativePointerField<FString*>(this, "FConfigCraftingResourceRequirement.ResourceItemTypeString"); }
	bool& bCraftingRequireExactResourceTypeField() { return *GetNativePointerField<bool*>(this, "FConfigCraftingResourceRequirement.bCraftingRequireExactResourceType"); }

	// Functions

	FConfigCraftingResourceRequirement * operator=(const FConfigCraftingResourceRequirement * __that) { return NativeCall<FConfigCraftingResourceRequirement *, const FConfigCraftingResourceRequirement *>(this, "FConfigCraftingResourceRequirement.operator=", __that); }
};

