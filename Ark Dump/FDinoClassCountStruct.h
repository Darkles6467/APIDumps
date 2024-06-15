#pragma once

#include "BaseDeclarations.h"
struct FDinoClassCountStruct
{
	char __padding[0x10L];
	int& NumberofTamedClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofTamedClass"); }
	int& NumberofWildClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofWildClass"); }

	// Functions

};

