#pragma once

#include "BaseDeclarations.h"
struct FSignature
{
	char __padding[0x280L];
	FieldArray<TBigInt<256>[20], 25620> DataField() { return {this, "FSignature.Data"}; }
};

