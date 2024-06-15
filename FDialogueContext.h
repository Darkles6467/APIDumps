#pragma once

#include "BaseDeclarations.h"
struct FDialogueContext
{
	char __padding[0x18L];
	UDialogueVoice * SpeakerField() { return GetNativePointerField<UDialogueVoice *>(this, "FDialogueContext.Speaker"); }
	TArray<UDialogueVoice *>& TargetsField() { return *GetNativePointerField<TArray<UDialogueVoice *>*>(this, "FDialogueContext.Targets"); }

	// Functions

	FString * GetLocalizationKey(FString * result) { return NativeCall<FString *, FString *>(this, "FDialogueContext.GetLocalizationKey", result); }
};

