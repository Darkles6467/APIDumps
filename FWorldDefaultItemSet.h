#pragma once

#include "BaseDeclarations.h"
struct FWorldDefaultItemSet
{
	char __padding[0x30L];
	FName& ItemSetNameField() { return *GetNativePointerField<FName*>(this, "FWorldDefaultItemSet.ItemSetName"); }
	TArray<FName>& MapNameField() { return *GetNativePointerField<TArray<FName>*>(this, "FWorldDefaultItemSet.MapName"); }
	bool& bFirstTimeEquipField() { return *GetNativePointerField<bool*>(this, "FWorldDefaultItemSet.bFirstTimeEquip"); }
	bool& bOnlyGiveItemSetOnceField() { return *GetNativePointerField<bool*>(this, "FWorldDefaultItemSet.bOnlyGiveItemSetOnce"); }
	bool& bEquipOnNewPawnField() { return *GetNativePointerField<bool*>(this, "FWorldDefaultItemSet.bEquipOnNewPawn"); }
	int& ForceEquipIfAppIDField() { return *GetNativePointerField<int*>(this, "FWorldDefaultItemSet.ForceEquipIfAppID"); }

	// Functions

	FWorldDefaultItemSet * operator=(const FWorldDefaultItemSet * __that) { return NativeCall<FWorldDefaultItemSet *, const FWorldDefaultItemSet *>(this, "FWorldDefaultItemSet.operator=", __that); }
};

