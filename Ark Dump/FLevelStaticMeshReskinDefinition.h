#pragma once

#include "BaseDeclarations.h"
struct FLevelStaticMeshReskinDefinition
{
	char __padding[0x18L];
	FString& MaterialNameToReplaceField() { return *GetNativePointerField<FString*>(this, "FLevelStaticMeshReskinDefinition.MaterialNameToReplace"); }

	// Functions

	FLevelStaticMeshReskinDefinition * operator=(const FLevelStaticMeshReskinDefinition * __that) { return NativeCall<FLevelStaticMeshReskinDefinition *, const FLevelStaticMeshReskinDefinition *>(this, "FLevelStaticMeshReskinDefinition.operator=", __that); }
};

