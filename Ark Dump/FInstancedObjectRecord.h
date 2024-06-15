#pragma once

#include "BaseDeclarations.h"
struct FInstancedObjectRecord
{
	char __padding[0x18L];
	TArray<unsigned char>& SavedPropertiesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FInstancedObjectRecord.SavedProperties"); }
};

