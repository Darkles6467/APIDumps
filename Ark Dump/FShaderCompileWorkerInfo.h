#pragma once

#include "BaseDeclarations.h"
struct FShaderCompileWorkerInfo
{
	char __padding[0xb0L];
	bool& bIssuedTasksToWorkerField() { return *GetNativePointerField<bool*>(this, "FShaderCompileWorkerInfo.bIssuedTasksToWorker"); }
	bool& bLaunchedWorkerField() { return *GetNativePointerField<bool*>(this, "FShaderCompileWorkerInfo.bLaunchedWorker"); }
	bool& bCompleteField() { return *GetNativePointerField<bool*>(this, "FShaderCompileWorkerInfo.bComplete"); }
	FPipeWorkerInfo& PipeWorkerField() { return *GetNativePointerField<FPipeWorkerInfo*>(this, "FShaderCompileWorkerInfo.PipeWorker"); }
	bool& bWorkerForPipeWasLaunchedField() { return *GetNativePointerField<bool*>(this, "FShaderCompileWorkerInfo.bWorkerForPipeWasLaunched"); }
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "FShaderCompileWorkerInfo.StartTime"); }

	// Functions

	void CreatePipeAndNewTask(unsigned int WorkerIndex, unsigned int ProcessId) { NativeCall<void, unsigned int, unsigned int>(this, "FShaderCompileWorkerInfo.CreatePipeAndNewTask", WorkerIndex, ProcessId); }
	void ReadAndWaitResultsFromPipe() { NativeCall<void>(this, "FShaderCompileWorkerInfo.ReadAndWaitResultsFromPipe"); }
};

