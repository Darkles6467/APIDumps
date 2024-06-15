#pragma once

#include "BaseDeclarations.h"
struct FArkInventoryData
{
	char __padding[0x30L];
	TArray<FArkTributeInventoryItem>& ArkItemsField() { return *GetNativePointerField<TArray<FArkTributeInventoryItem>*>(this, "FArkInventoryData.ArkItems"); }
	TArray<FARKTributeDino>& ArkTamedDinosDataField() { return *GetNativePointerField<TArray<FARKTributeDino>*>(this, "FArkInventoryData.ArkTamedDinosData"); }
	TArray<FArkTributePlayerData>& ArkPlayerDataField() { return *GetNativePointerField<TArray<FArkTributePlayerData>*>(this, "FArkInventoryData.ArkPlayerData"); }

	// Functions

	FArkInventoryData * operator=(const FArkInventoryData * __that) { return NativeCall<FArkInventoryData *, const FArkInventoryData *>(this, "FArkInventoryData.operator=", __that); }
};

