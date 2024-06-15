#pragma once

#include "BaseDeclarations.h"
struct FEngramEntryOverride
{
	char __padding[0x28L];
	FString& EngramClassNameField() { return *GetNativePointerField<FString*>(this, "FEngramEntryOverride.EngramClassName"); }
	int& EngramIndexField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramIndex"); }
	bool& EngramHiddenField() { return *GetNativePointerField<bool*>(this, "FEngramEntryOverride.EngramHidden"); }
	int& EngramPointsCostField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramPointsCost"); }
	int& EngramLevelRequirementField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramLevelRequirement"); }
	bool& RemoveEngramPreReqField() { return *GetNativePointerField<bool*>(this, "FEngramEntryOverride.RemoveEngramPreReq"); }

	// Functions

	FEngramEntryOverride * operator=(const FEngramEntryOverride * __that) { return NativeCall<FEngramEntryOverride *, const FEngramEntryOverride *>(this, "FEngramEntryOverride.operator=", __that); }
};

