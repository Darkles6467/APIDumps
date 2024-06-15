#pragma once

#include "BaseDeclarations.h"
struct FFoliageReskinDefinition
{
	char __padding[0x30L];
	FString& ForFoliageField() { return *GetNativePointerField<FString*>(this, "FFoliageReskinDefinition.ForFoliage"); }

	// Functions

	FFoliageReskinDefinition * operator=(const FFoliageReskinDefinition * __that) { return NativeCall<FFoliageReskinDefinition *, const FFoliageReskinDefinition *>(this, "FFoliageReskinDefinition.operator=", __that); }
};

