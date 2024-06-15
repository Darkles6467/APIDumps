#pragma once

#include "BaseDeclarations.h"
struct FOldGuidPair
{
	char __padding[0x14L];
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "FOldGuidPair.Guid"); }
	unsigned int& RefIdField() { return *GetNativePointerField<unsigned int*>(this, "FOldGuidPair.RefId"); }
};

