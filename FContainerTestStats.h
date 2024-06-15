#pragma once

#include "BaseDeclarations.h"
struct FContainerTestStats
{
	char __padding[0x110L];
	int& NextIdField() { return *GetNativePointerField<int*>(this, "FContainerTestStats.NextId"); }
	FieldArray<int, 65> ConstructedIDsField() { return {this, "FContainerTestStats.ConstructedIDs"}; }
	int * EndField() { return GetNativePointerField<int *>(this, "FContainerTestStats.End"); }
};

