#pragma once

#include "BaseDeclarations.h"
#include "UAnimCompress.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimCompress_RemoveEverySecondKey : UAnimCompress
{
	char __padding[0x8L];
	int& MinKeysField() { return *GetNativePointerField<int*>(this, "UAnimCompress_RemoveEverySecondKey.MinKeys"); }

	// Functions

};

