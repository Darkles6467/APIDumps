#pragma once

#include "BaseDeclarations.h"
struct FNavigationDirtyElement
{
	char __padding[0x38L];
	FWeakObjectPtr& OwnerField() { return *GetNativePointerField<FWeakObjectPtr*>(this, "FNavigationDirtyElement.Owner"); }
	INavRelevantInterface * NavInterfaceField() { return GetNativePointerField<INavRelevantInterface *>(this, "FNavigationDirtyElement.NavInterface"); }
	int& FlagsOverrideField() { return *GetNativePointerField<int*>(this, "FNavigationDirtyElement.FlagsOverride"); }
	int& PrevFlagsField() { return *GetNativePointerField<int*>(this, "FNavigationDirtyElement.PrevFlags"); }
	FBox& PrevBoundsField() { return *GetNativePointerField<FBox*>(this, "FNavigationDirtyElement.PrevBounds"); }
};

