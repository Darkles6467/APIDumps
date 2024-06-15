#pragma once

#include "BaseDeclarations.h"
struct FARFilter
{
	char __padding[0xe8L];
	TArray<FName>& PackageNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FARFilter.PackageNames"); }
	TArray<FName>& PackagePathsField() { return *GetNativePointerField<TArray<FName>*>(this, "FARFilter.PackagePaths"); }
	TArray<FName>& ObjectPathsField() { return *GetNativePointerField<TArray<FName>*>(this, "FARFilter.ObjectPaths"); }
	TArray<FName>& ClassNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FARFilter.ClassNames"); }
	bool& bRecursivePathsField() { return *GetNativePointerField<bool*>(this, "FARFilter.bRecursivePaths"); }
	bool& bRecursiveClassesField() { return *GetNativePointerField<bool*>(this, "FARFilter.bRecursiveClasses"); }
	bool& bIncludeOnlyOnDiskAssetsField() { return *GetNativePointerField<bool*>(this, "FARFilter.bIncludeOnlyOnDiskAssets"); }

	// Functions

};

