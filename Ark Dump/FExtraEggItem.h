#pragma once

#include "BaseDeclarations.h"
struct FExtraEggItem
{
	char __padding[0x28L];
	FString& DropItemField() { return *GetNativePointerField<FString*>(this, "FExtraEggItem.DropItem"); }
	FName& ActiveEventFilterField() { return *GetNativePointerField<FName*>(this, "FExtraEggItem.ActiveEventFilter"); }
	TSubclassOf<APrimalDinoCharacter>& ForDinoCharacterField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FExtraEggItem.ForDinoCharacter"); }
	float& DropChanceField() { return *GetNativePointerField<float*>(this, "FExtraEggItem.DropChance"); }

	// Functions

	FExtraEggItem * operator=(const FExtraEggItem * __that) { return NativeCall<FExtraEggItem *, const FExtraEggItem *>(this, "FExtraEggItem.operator=", __that); }
};

