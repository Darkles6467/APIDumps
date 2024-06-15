#pragma once

#include "BaseDeclarations.h"
struct FNode
{
	char __padding[0x60L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FNode.Name"); }
	FName& ParentNameField() { return *GetNativePointerField<FName*>(this, "FNode.ParentName"); }
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "FNode.Transform"); }
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "FNode.DisplayName"); }
	bool& bAdvancedField() { return *GetNativePointerField<bool*>(this, "FNode.bAdvanced"); }

	// Functions

};

