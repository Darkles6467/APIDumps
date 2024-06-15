#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeSwitch : USoundNode
{
	char __padding[0x8L];
	FName& IntParameterNameField() { return *GetNativePointerField<FName*>(this, "USoundNodeSwitch.IntParameterName"); }

	// Functions

	void CreateStartingConnectors() { NativeCall<void>(this, "USoundNodeSwitch.CreateStartingConnectors"); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeSwitch.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

