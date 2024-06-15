#pragma once

#include "BaseDeclarations.h"
struct FActionKeyDetails
{
	char __padding[0x30L];
	TArray<FInputActionKeyMapping>& ActionsField() { return *GetNativePointerField<TArray<FInputActionKeyMapping>*>(this, "FActionKeyDetails.Actions"); }
	FInputChord& CapturingChordField() { return *GetNativePointerField<FInputChord*>(this, "FActionKeyDetails.CapturingChord"); }
};

