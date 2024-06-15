#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeDialoguePlayer : USoundNode
{
	char __padding[0x28L];
	FDialogueWaveParameter& DialogueWaveParameterField() { return *GetNativePointerField<FDialogueWaveParameter*>(this, "USoundNodeDialoguePlayer.DialogueWaveParameter"); }

	// Functions

	float GetDuration() { return NativeCall<float>(this, "USoundNodeDialoguePlayer.GetDuration"); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeDialoguePlayer.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

