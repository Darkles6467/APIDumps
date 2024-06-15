#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalColorSet : UObject
{
	char __padding[0x240L];
	FieldArray<FColorSetDefinition, 6> ColorSetDefinitionsField() { return {this, "UPrimalColorSet.ColorSetDefinitions"}; }

	// Functions

	int GetRandomColorDefinitionIndex(int SetNum, int Level) { return NativeCall<int, int, int>(this, "UPrimalColorSet.GetRandomColorDefinitionIndex", SetNum, Level); }
};

