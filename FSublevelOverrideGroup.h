#pragma once

#include "BaseDeclarations.h"
struct FSublevelOverrideGroup
{
	char __padding[0x38L];
	FString& ForMapNameField() { return *GetNativePointerField<FString*>(this, "FSublevelOverrideGroup.ForMapName"); }
	bool& bUseSublevelOverridesField() { return *GetNativePointerField<bool*>(this, "FSublevelOverrideGroup.bUseSublevelOverrides"); }
	TArray<FSublevelOverrideDefinition>& SublevelOverridesField() { return *GetNativePointerField<TArray<FSublevelOverrideDefinition>*>(this, "FSublevelOverrideGroup.SublevelOverrides"); }
	TArray<FLevelStaticMeshReskinDefinition>& StaticMeshReskinsField() { return *GetNativePointerField<TArray<FLevelStaticMeshReskinDefinition>*>(this, "FSublevelOverrideGroup.StaticMeshReskins"); }

	// Functions

	FSublevelOverrideGroup * operator=(const FSublevelOverrideGroup * __that) { return NativeCall<FSublevelOverrideGroup *, const FSublevelOverrideGroup *>(this, "FSublevelOverrideGroup.operator=", __that); }
};

