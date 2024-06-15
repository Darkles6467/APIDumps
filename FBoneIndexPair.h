#pragma once

#include "BaseDeclarations.h"
struct FBoneIndexPair
{
	char __padding[0x8L];
	FieldArray<int, 2> BoneIdxField() { return {this, "FBoneIndexPair.BoneIdx"}; }
};

