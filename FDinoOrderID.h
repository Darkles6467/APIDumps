#pragma once

#include "BaseDeclarations.h"
struct FDinoOrderID
{
	char __padding[0x18L];
	int& DinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoOrderID.DinoID1"); }
	int& DinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoOrderID.DinoID2"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FDinoOrderID.DinoName"); }

	// Functions

	FDinoOrderID * operator=(const FDinoOrderID * __that) { return NativeCall<FDinoOrderID *, const FDinoOrderID *>(this, "FDinoOrderID.operator=", __that); }
};

