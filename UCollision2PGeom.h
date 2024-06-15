#pragma once

#include "BaseDeclarations.h"
struct UCollision2PGeom
{
	char __padding[0x10L];
	FieldArray<char, 16> StorageField() { return {this, "UCollision2PGeom.Storage"}; }

	// Functions

};

