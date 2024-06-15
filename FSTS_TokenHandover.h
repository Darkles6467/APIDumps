#pragma once

#include "BaseDeclarations.h"
struct FSTS_TokenHandover
{
	char __padding[0x48L];
	unsigned int& PerPacketTinyTokenField() { return *GetNativePointerField<unsigned int*>(this, "FSTS_TokenHandover.PerPacketTinyToken"); }
	FieldArray<char, 64> NewTokenField() { return {this, "FSTS_TokenHandover.NewToken"}; }
	int& MajorBuildIdField() { return *GetNativePointerField<int*>(this, "FSTS_TokenHandover.MajorBuildId"); }
};

