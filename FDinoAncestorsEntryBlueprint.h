#pragma once

#include "BaseDeclarations.h"
struct FDinoAncestorsEntryBlueprint
{
	char __padding[0x30L];
	FString& MaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntryBlueprint.MaleName"); }
	int& MaleDinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.MaleDinoID1"); }
	int& MaleDinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.MaleDinoID2"); }
	FString& FemaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntryBlueprint.FemaleName"); }
	int& FemaleDinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.FemaleDinoID1"); }
	int& FemaleDinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.FemaleDinoID2"); }

	// Functions

	FDinoAncestorsEntryBlueprint * operator=(const FDinoAncestorsEntryBlueprint * __that) { return NativeCall<FDinoAncestorsEntryBlueprint *, const FDinoAncestorsEntryBlueprint *>(this, "FDinoAncestorsEntryBlueprint.operator=", __that); }
};

