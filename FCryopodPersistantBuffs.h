#pragma once

#include "BaseDeclarations.h"
struct FCryopodPersistantBuffs
{
	char __padding[0x18L];
	FString& BuffClassStringField() { return *GetNativePointerField<FString*>(this, "FCryopodPersistantBuffs.BuffClassString"); }
	int& IDBitMaskField() { return *GetNativePointerField<int*>(this, "FCryopodPersistantBuffs.IDBitMask"); }

	// Functions

};

