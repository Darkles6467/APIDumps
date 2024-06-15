#pragma once

#include "BaseDeclarations.h"
struct FBlueprintSupport
{

	// Functions

	static void DuplicateAllFields(UStruct * StructToDuplicate, FDuplicateDataWriter * Writer) { NativeCall<void, UStruct *, FDuplicateDataWriter *>(nullptr, "FBlueprintSupport.DuplicateAllFields", StructToDuplicate, Writer); }
};

