#pragma once

#include "BaseDeclarations.h"
#include "FParallelForData.h"

struct FParallelForData
{
	char __padding[0x38L];
	int& NumField() { return *GetNativePointerField<int*>(this, "FParallelForData.Num"); }
	int& BlockSizeField() { return *GetNativePointerField<int*>(this, "FParallelForData.BlockSize"); }
	int& LastBlockExtraNumField() { return *GetNativePointerField<int*>(this, "FParallelForData.LastBlockExtraNum"); }
	TFunctionRef<void __cdecl(int)>& BodyField() { return *GetNativePointerField<TFunctionRef<void __cdecl(int)>*>(this, "FParallelForData.Body"); }
	FThreadSafeCounter& IndexToDoField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FParallelForData.IndexToDo"); }
	FThreadSafeCounter& NumCompletedField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FParallelForData.NumCompleted"); }
	bool& bExitedField() { return *GetNativePointerField<bool*>(this, "FParallelForData.bExited"); }
	bool& bTriggeredField() { return *GetNativePointerField<bool*>(this, "FParallelForData.bTriggered"); }
	bool& bSaveLastBlockForMasterField() { return *GetNativePointerField<bool*>(this, "FParallelForData.bSaveLastBlockForMaster"); }

	// Functions

	bool Process(int TasksToSpawn, TSharedRef<FParallelForData,1> * Data, bool bMaster) { return NativeCall<bool, int, TSharedRef<FParallelForData,1> *, bool>(this, "FParallelForData.Process", TasksToSpawn, Data, bMaster); }
};

