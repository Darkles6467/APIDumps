#pragma once

#include "BaseDeclarations.h"
struct FCustomContextMenuData
{
	char __padding[0x20L];
	FName& ContextItemNameField() { return *GetNativePointerField<FName*>(this, "FCustomContextMenuData.ContextItemName"); }
	FString& DisplayStringField() { return *GetNativePointerField<FString*>(this, "FCustomContextMenuData.DisplayString"); }
	FName& OptionalKeybindNameField() { return *GetNativePointerField<FName*>(this, "FCustomContextMenuData.OptionalKeybindName"); }

	// Functions

	FCustomContextMenuData * operator=(const FCustomContextMenuData * __that) { return NativeCall<FCustomContextMenuData *, const FCustomContextMenuData *>(this, "FCustomContextMenuData.operator=", __that); }
};

