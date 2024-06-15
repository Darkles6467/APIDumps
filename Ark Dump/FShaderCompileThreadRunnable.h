#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FShaderCompileThreadRunnable : FRunnable
{
	char __padding[0x48L];
	FString& ErrorMessageField() { return *GetNativePointerField<FString*>(this, "FShaderCompileThreadRunnable.ErrorMessage"); }
	bool& bTerminatedByErrorField() { return *GetNativePointerField<bool*>(this, "FShaderCompileThreadRunnable.bTerminatedByError"); }
	long double& LastCheckForWorkersTimeField() { return *GetNativePointerField<long double*>(this, "FShaderCompileThreadRunnable.LastCheckForWorkersTime"); }
	volatile bool& bForceFinishField() { return *GetNativePointerField<volatile bool*>(this, "FShaderCompileThreadRunnable.bForceFinish"); }
	volatile bool& bIsRunningField() { return *GetNativePointerField<volatile bool*>(this, "FShaderCompileThreadRunnable.bIsRunning"); }

	// Functions

	void CompileDirectlyThroughDll() { NativeCall<void>(this, "FShaderCompileThreadRunnable.CompileDirectlyThroughDll"); }
	int CompilingLoop() { return NativeCall<int>(this, "FShaderCompileThreadRunnable.CompilingLoop"); }
	void LaunchWorkerIfNeeded(FShaderCompileWorkerInfo * CurrentWorkerInfo, unsigned int WorkerIndex) { NativeCall<void, FShaderCompileWorkerInfo *, unsigned int>(this, "FShaderCompileThreadRunnable.LaunchWorkerIfNeeded", CurrentWorkerInfo, WorkerIndex); }
	bool LaunchWorkersIfNeeded() { return NativeCall<bool>(this, "FShaderCompileThreadRunnable.LaunchWorkersIfNeeded"); }
	int PullTasksFromQueue() { return NativeCall<int>(this, "FShaderCompileThreadRunnable.PullTasksFromQueue"); }
	void ReadAvailableResults() { NativeCall<void>(this, "FShaderCompileThreadRunnable.ReadAvailableResults"); }
	void WriteNewTasks() { NativeCall<void>(this, "FShaderCompileThreadRunnable.WriteNewTasks"); }
};

