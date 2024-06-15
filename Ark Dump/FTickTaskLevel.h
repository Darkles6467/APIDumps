#pragma once

#include "BaseDeclarations.h"
struct FTickTaskLevel
{
	char __padding[0x200L];
	FTickTaskSequencer * TickTaskSequencerField() { return GetNativePointerField<FTickTaskSequencer *>(this, "FTickTaskLevel.TickTaskSequencer"); }
	FTickContext& ContextField() { return *GetNativePointerField<FTickContext*>(this, "FTickTaskLevel.Context"); }
	bool& bTickNewlySpawnedField() { return *GetNativePointerField<bool*>(this, "FTickTaskLevel.bTickNewlySpawned"); }

	// Functions

	void QueueAllTicks() { NativeCall<void>(this, "FTickTaskLevel.QueueAllTicks"); }
	int QueueNewlySpawned(ETickingGroup CurrentTickGroup) { return NativeCall<int, ETickingGroup>(this, "FTickTaskLevel.QueueNewlySpawned", CurrentTickGroup); }
	void RunPauseFrame(const FTickContext * InContext) { NativeCall<void, const FTickContext *>(this, "FTickTaskLevel.RunPauseFrame", InContext); }
};

