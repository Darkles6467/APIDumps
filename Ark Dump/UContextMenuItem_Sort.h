#pragma once

#include "BaseDeclarations.h"
#include "UContextMenuItem.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UContextMenuItem_Sort : UContextMenuItem
{
	char __padding[0x18L];
	FName& SorDirSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UContextMenuItem_Sort.SorDirSwitcherName"); }
	bool& bIsSortDirSwitcherVisibleField() { return *GetNativePointerField<bool*>(this, "UContextMenuItem_Sort.bIsSortDirSwitcherVisible"); }
	bool& bSortDirSwitcherDirField() { return *GetNativePointerField<bool*>(this, "UContextMenuItem_Sort.bSortDirSwitcherDir"); }

	// Functions

	void SetSortDirSwitcherDirection(bool asc) { NativeCall<void, bool>(this, "UContextMenuItem_Sort.SetSortDirSwitcherDirection", asc); }
	void SetSortDirSwitcherVisible(bool visible) { NativeCall<void, bool>(this, "UContextMenuItem_Sort.SetSortDirSwitcherVisible", visible); }
};

