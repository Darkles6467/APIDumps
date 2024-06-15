#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientReceiveDinoAncestors_Parms
{
	char __padding[0x30L];
	APrimalDinoCharacter * ForDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterPlayerController_eventClientReceiveDinoAncestors_Parms.ForDino"); }
	TArray<FDinoAncestorsEntry>& DinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "ShooterPlayerController_eventClientReceiveDinoAncestors_Parms.DinoAncestors"); }
	TArray<FDinoAncestorsEntry>& DinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntry>*>(this, "ShooterPlayerController_eventClientReceiveDinoAncestors_Parms.DinoAncestorsMale"); }
	int& RandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientReceiveDinoAncestors_Parms.RandomMutationsFemale"); }
	int& RandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientReceiveDinoAncestors_Parms.RandomMutationsMale"); }

	// Functions

};

