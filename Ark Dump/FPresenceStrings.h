#pragma once

#include "BaseDeclarations.h"
struct FPresenceStrings
{
	char __padding[0x13fL];
	FieldArray<char, 64> KeyField() { return {this, "FPresenceStrings.Key"}; }
	FieldArray<char, 255> ValueField() { return {this, "FPresenceStrings.Value"}; }
};

