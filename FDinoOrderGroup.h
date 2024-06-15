#pragma once

#include "BaseDeclarations.h"
struct FDinoOrderGroup
{
	char __padding[0x30L];
	FString& DinoOrderGroupNameField() { return *GetNativePointerField<FString*>(this, "FDinoOrderGroup.DinoOrderGroupName"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& DinoOrderClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "FDinoOrderGroup.DinoOrderClasses"); }
	TArray<FDinoOrderID>& DinoOrderIDsField() { return *GetNativePointerField<TArray<FDinoOrderID>*>(this, "FDinoOrderGroup.DinoOrderIDs"); }

	// Functions

	FDinoOrderGroup * operator=(const FDinoOrderGroup * __that) { return NativeCall<FDinoOrderGroup *, const FDinoOrderGroup *>(this, "FDinoOrderGroup.operator=", __that); }
};

