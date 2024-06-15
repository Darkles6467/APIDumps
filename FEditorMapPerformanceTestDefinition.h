#pragma once

#include "BaseDeclarations.h"
struct FEditorMapPerformanceTestDefinition
{
	char __padding[0x18L];
	FFilePath& PerformanceTestmapField() { return *GetNativePointerField<FFilePath*>(this, "FEditorMapPerformanceTestDefinition.PerformanceTestmap"); }
	int& TestTimerField() { return *GetNativePointerField<int*>(this, "FEditorMapPerformanceTestDefinition.TestTimer"); }

	// Functions

};

