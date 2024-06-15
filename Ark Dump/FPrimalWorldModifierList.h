#pragma once

#include "BaseDeclarations.h"
struct FPrimalWorldModifierList
{
	char __padding[0x40L];
	bool& bUseActiveEventField() { return *GetNativePointerField<bool*>(this, "FPrimalWorldModifierList.bUseActiveEvent"); }
	TArray<FName>& ActiveEventNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FPrimalWorldModifierList.ActiveEventNames"); }
	bool& bUseINIStringOptionValueField() { return *GetNativePointerField<bool*>(this, "FPrimalWorldModifierList.bUseINIStringOptionValue"); }
	TArray<FString>& INIStringOptionValuesField() { return *GetNativePointerField<TArray<FString>*>(this, "FPrimalWorldModifierList.INIStringOptionValues"); }
	bool& bHasOverridePriorityField() { return *GetNativePointerField<bool*>(this, "FPrimalWorldModifierList.bHasOverridePriority"); }
	TSubclassOf<APrimalWorldModifier>& WorldModifierClassField() { return *GetNativePointerField<TSubclassOf<APrimalWorldModifier>*>(this, "FPrimalWorldModifierList.WorldModifierClass"); }

	// Functions

	FPrimalWorldModifierList * operator=(const FPrimalWorldModifierList * __that) { return NativeCall<FPrimalWorldModifierList *, const FPrimalWorldModifierList *>(this, "FPrimalWorldModifierList.operator=", __that); }
};

