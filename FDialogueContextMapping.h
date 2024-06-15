#pragma once

#include "BaseDeclarations.h"
struct FDialogueContextMapping
{
	char __padding[0x28L];
	FDialogueContext& ContextField() { return *GetNativePointerField<FDialogueContext*>(this, "FDialogueContextMapping.Context"); }
	UDialogueSoundWaveProxy * ProxyField() { return GetNativePointerField<UDialogueSoundWaveProxy *>(this, "FDialogueContextMapping.Proxy"); }

	// Functions

};

