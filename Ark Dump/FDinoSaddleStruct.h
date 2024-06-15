#pragma once

#include "BaseDeclarations.h"
struct FDinoSaddleStruct
{
	char __padding[0x20L];
	FItemNetID& itemIdField() { return *GetNativePointerField<FItemNetID*>(this, "FDinoSaddleStruct.itemId"); }
	bool& bJustRemovedField() { return *GetNativePointerField<bool*>(this, "FDinoSaddleStruct.bJustRemoved"); }

	// Functions

};

