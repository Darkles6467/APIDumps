#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UWorldModifiersContainer : UObject
{
	char __padding[0x10L];
	TArray<FPrimalWorldModifierList>& WorldModifiersField() { return *GetNativePointerField<TArray<FPrimalWorldModifierList>*>(this, "UWorldModifiersContainer.WorldModifiers"); }

	// Functions

};

