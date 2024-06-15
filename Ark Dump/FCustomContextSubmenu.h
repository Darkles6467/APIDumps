#pragma once

#include "BaseDeclarations.h"
struct FCustomContextSubmenu
{
	char __padding[0x18L];
	FName& SubmenuNameField() { return *GetNativePointerField<FName*>(this, "FCustomContextSubmenu.SubmenuName"); }
	TArray<FName>& SubmenuOptionsField() { return *GetNativePointerField<TArray<FName>*>(this, "FCustomContextSubmenu.SubmenuOptions"); }

	// Functions

};

