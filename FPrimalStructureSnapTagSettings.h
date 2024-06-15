#pragma once

#include "BaseDeclarations.h"
struct FPrimalStructureSnapTagSettings
{
	char __padding[0x40L];
	TArray<FName>& SnapToStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName>*>(this, "FPrimalStructureSnapTagSettings.SnapToStructureTagsToExclude"); }
	TArray<FName>& SnapFromStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName>*>(this, "FPrimalStructureSnapTagSettings.SnapFromStructureTagsToExclude"); }
	TArray<FName>& SnapToStructureTagsToIncludeField() { return *GetNativePointerField<TArray<FName>*>(this, "FPrimalStructureSnapTagSettings.SnapToStructureTagsToInclude"); }
	TArray<FName>& SnapFromStructureTagsToIncludeField() { return *GetNativePointerField<TArray<FName>*>(this, "FPrimalStructureSnapTagSettings.SnapFromStructureTagsToInclude"); }

	// Functions

	FPrimalStructureSnapTagSettings * operator=(const FPrimalStructureSnapTagSettings * __that) { return NativeCall<FPrimalStructureSnapTagSettings *, const FPrimalStructureSnapTagSettings *>(this, "FPrimalStructureSnapTagSettings.operator=", __that); }
};

