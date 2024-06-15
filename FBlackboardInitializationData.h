#pragma once

#include "BaseDeclarations.h"
struct FBlackboardInitializationData
{
	char __padding[0x4L];
	char& KeyIDField() { return *GetNativePointerField<char*>(this, "FBlackboardInitializationData.KeyID"); }
	unsigned __int16& DataSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FBlackboardInitializationData.DataSize"); }
};

