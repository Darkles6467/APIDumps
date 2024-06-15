#pragma once

#include "BaseDeclarations.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundNodeBranch : USoundNode
{
	enum BranchPurpose
	{
		ParameterTrue = 0x0,
		ParameterFalse = 0x1,
		ParameterUnset = 0x2,
		MAX = 0x3,
	};

	char __padding[0x8L];
	FName& BoolParameterNameField() { return *GetNativePointerField<FName*>(this, "USoundNodeBranch.BoolParameterName"); }

	// Functions

	void CreateStartingConnectors() { NativeCall<void>(this, "USoundNodeBranch.CreateStartingConnectors"); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNodeBranch.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

