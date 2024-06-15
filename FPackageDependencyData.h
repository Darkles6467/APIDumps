#pragma once

#include "BaseDeclarations.h"
struct FLinkerTables
{
	char __padding[0x40L];
	TArray<FObjectImport>& ImportMapField() { return *GetNativePointerField<TArray<FObjectImport>*>(this, "FLinkerTables.ImportMap"); }
	TArray<FObjectExport>& ExportMapField() { return *GetNativePointerField<TArray<FObjectExport>*>(this, "FLinkerTables.ExportMap"); }
	TArray<TArray<FPackageIndex>>& DependsMapField() { return *GetNativePointerField<TArray<TArray<FPackageIndex>>*>(this, "FLinkerTables.DependsMap"); }
	TArray<FString>& StringAssetReferencesMapField() { return *GetNativePointerField<TArray<FString>*>(this, "FLinkerTables.StringAssetReferencesMap"); }

	// Functions

};

struct FPackageDependencyData : FLinkerTables
{
	char __padding[0x8L];
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FPackageDependencyData.PackageName"); }
};

