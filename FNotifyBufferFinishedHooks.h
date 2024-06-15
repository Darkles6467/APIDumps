#pragma once

#include "BaseDeclarations.h"
struct FNotifyBufferFinishedHooks
{
	char __padding[0x10L];
	TArray<FNotifyBufferFinishedHooks::FNotifyBufferDetails>& NotifiesField() { return *GetNativePointerField<TArray<FNotifyBufferFinishedHooks::FNotifyBufferDetails>*>(this, "FNotifyBufferFinishedHooks.Notifies"); }

	// Functions

	void AddNotify(USoundNode * NotifyNode, unsigned __int64 WaveInstanceHash) { NativeCall<void, USoundNode *, unsigned __int64>(this, "FNotifyBufferFinishedHooks.AddNotify", NotifyNode, WaveInstanceHash); }
	void DispatchNotifies(FWaveInstance * WaveInstance, const bool bStopped) { NativeCall<void, FWaveInstance *, const bool>(this, "FNotifyBufferFinishedHooks.DispatchNotifies", WaveInstance, bStopped); }
	unsigned __int64 GetHashForNode(USoundNode * NotifyNode) { return NativeCall<unsigned __int64, USoundNode *>(this, "FNotifyBufferFinishedHooks.GetHashForNode", NotifyNode); }
};

