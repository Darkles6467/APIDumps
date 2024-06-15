#pragma once

#include "BaseDeclarations.h"
struct FTickTaskManagerInterface
{
	char __padding[0x8L];

	// Functions

};

struct FTickTaskManager : FTickTaskManagerInterface
{
	char __padding[0x98L];
	FTickTaskSequencer * TickTaskSequencerField() { return GetNativePointerField<FTickTaskSequencer *>(this, "FTickTaskManager.TickTaskSequencer"); }
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FTickTaskManager.World"); }
	TArray<FTickTaskLevel *>& LevelListField() { return *GetNativePointerField<TArray<FTickTaskLevel *>*>(this, "FTickTaskManager.LevelList"); }
	TArray<ULevel *>& LevelListObjectsField() { return *GetNativePointerField<TArray<ULevel *>*>(this, "FTickTaskManager.LevelListObjects"); }
	FTickContext& ContextField() { return *GetNativePointerField<FTickContext*>(this, "FTickTaskManager.Context"); }
	bool& bTickNewlySpawnedField() { return *GetNativePointerField<bool*>(this, "FTickTaskManager.bTickNewlySpawned"); }
	TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> >& QueueTickTasksField() { return *GetNativePointerField<TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> >*>(this, "FTickTaskManager.QueueTickTasks"); }
	TArray<FTickGroupCompletionItem>& AllCompletionEventsField() { return *GetNativePointerField<TArray<FTickGroupCompletionItem>*>(this, "FTickTaskManager.AllCompletionEvents"); }

	// Functions

	FTickTaskLevel * AllocateTickTaskLevel() { return NativeCall<FTickTaskLevel *>(this, "FTickTaskManager.AllocateTickTaskLevel"); }
	void EndFrame() { NativeCall<void>(this, "FTickTaskManager.EndFrame"); }
	void FillLevelList() { NativeCall<void>(this, "FTickTaskManager.FillLevelList"); }
	void FreeTickTaskLevel(FTickTaskLevel * TickTaskLevel) { NativeCall<void, FTickTaskLevel *>(this, "FTickTaskManager.FreeTickTaskLevel", TickTaskLevel); }
	void RunPauseFrame(UWorld * InWorld, float InDeltaSeconds, ELevelTick InTickType) { NativeCall<void, UWorld *, float, ELevelTick>(this, "FTickTaskManager.RunPauseFrame", InWorld, InDeltaSeconds, InTickType); }
	void RunTickGroup(ETickingGroup Group, bool bBlockTillComplete) { NativeCall<void, ETickingGroup, bool>(this, "FTickTaskManager.RunTickGroup", Group, bBlockTillComplete); }
	void StartFrame(UWorld * InWorld, float InDeltaSeconds, ELevelTick InTickType) { NativeCall<void, UWorld *, float, ELevelTick>(this, "FTickTaskManager.StartFrame", InWorld, InDeltaSeconds, InTickType); }
};

