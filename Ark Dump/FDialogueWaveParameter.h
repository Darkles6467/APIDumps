#pragma once

#include "BaseDeclarations.h"
struct FDialogueWaveParameter
{
	char __padding[0x20L];
	UDialogueWave * DialogueWaveField() { return GetNativePointerField<UDialogueWave *>(this, "FDialogueWaveParameter.DialogueWave"); }
	FDialogueContext& ContextField() { return *GetNativePointerField<FDialogueContext*>(this, "FDialogueWaveParameter.Context"); }

	// Functions

};

