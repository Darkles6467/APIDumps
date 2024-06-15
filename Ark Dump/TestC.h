#pragma once

#include "BaseDeclarations.h"
struct TestA
{
	char __padding[0x48L];
	FieldArray<char, 64> SpaceField() { return {this, "TestA.Space"}; }
};

struct TestC : TestA
{
	char __padding[0x70L];
	int& iField() { return *GetNativePointerField<int*>(this, "TestC.i"); }
};

