#pragma once

#include "BaseDeclarations.h"
struct FRigidBodyIndexPair
{
	char __padding[0x8L];
	FieldArray<int, 2> IndicesField() { return {this, "FRigidBodyIndexPair.Indices"}; }
};

