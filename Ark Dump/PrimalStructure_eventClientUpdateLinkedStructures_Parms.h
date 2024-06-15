#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventClientUpdateLinkedStructures_Parms
{
	char __padding[0x10L];
	TArray<unsigned int>& NewLinkedStructuresField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "PrimalStructure_eventClientUpdateLinkedStructures_Parms.NewLinkedStructures"); }
};

