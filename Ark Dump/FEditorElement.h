#pragma once

#include "BaseDeclarations.h"
struct FEditorElement
{
	char __padding[0x18L];
	FieldArray<int, 3> IndicesField() { return {this, "FEditorElement.Indices"}; }
	FieldArray<float, 3> WeightsField() { return {this, "FEditorElement.Weights"}; }

	// Functions

};

