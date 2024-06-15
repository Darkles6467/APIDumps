#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct USoundNode : UObject
{
	char __padding[0x10L];

	// Functions

	float MaxAudibleDistance(float InMaxExperiencePoints) { return NativeCall<float, float>(this, "USoundNode.MaxAudibleDistance", InMaxExperiencePoints); }
	void CreateStartingConnectors() { NativeCall<void>(this, "USoundNode.CreateStartingConnectors"); }
	void GetAllNodes(TArray<USoundNode *> * SoundNodes) { NativeCall<void, TArray<USoundNode *> *>(this, "USoundNode.GetAllNodes", SoundNodes); }
	float GetDuration() { return NativeCall<float>(this, "USoundNode.GetDuration"); }
	static unsigned __int64 GetNodeWaveInstanceHash(const unsigned __int64 ParentWaveInstanceHash, const USoundNode * ChildNode, const unsigned int ChildIndex) { return NativeCall<unsigned __int64, const unsigned __int64, const USoundNode *, const unsigned int>(nullptr, "USoundNode.GetNodeWaveInstanceHash", ParentWaveInstanceHash, ChildNode, ChildIndex); }
	void InsertChildNode(int Index) { NativeCall<void, int>(this, "USoundNode.InsertChildNode", Index); }
	void ParseNodes(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundNode.ParseNodes", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
	void RemoveChildNode(int Index) { NativeCall<void, int>(this, "USoundNode.RemoveChildNode", Index); }
};

