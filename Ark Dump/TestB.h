#pragma once

#include "BaseDeclarations.h"
struct TestB
{
	char __padding[0x68L];
	FieldArray<char, 96> SpaceField() { return {this, "TestB.Space"}; }
};

