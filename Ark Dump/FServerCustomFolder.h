#pragma once

#include "BaseDeclarations.h"
struct FServerCustomFolder
{
	char __padding[0x28L];
	int& InventoryCompTypeField() { return *GetNativePointerField<int*>(this, "FServerCustomFolder.InventoryCompType"); }
	FString& FolderNameField() { return *GetNativePointerField<FString*>(this, "FServerCustomFolder.FolderName"); }
	TArray<FItemNetID>& CustomFolderItemIdsField() { return *GetNativePointerField<TArray<FItemNetID>*>(this, "FServerCustomFolder.CustomFolderItemIds"); }

	// Functions

	FServerCustomFolder * operator=(const FServerCustomFolder * __that) { return NativeCall<FServerCustomFolder *, const FServerCustomFolder *>(this, "FServerCustomFolder.operator=", __that); }
};

