#pragma once

#include "BaseDeclarations.h"
struct FShaderCompilingManager
{
	char __padding[0x158L];
	bool& bCompilingDuringGameField() { return *GetNativePointerField<bool*>(this, "FShaderCompilingManager.bCompilingDuringGame"); }
	int& NumOutstandingJobsField() { return *GetNativePointerField<int*>(this, "FShaderCompilingManager.NumOutstandingJobs"); }
	FWindowsCriticalSection& CompileQueueSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FShaderCompilingManager.CompileQueueSection"); }
	unsigned int& NumShaderCompilingThreadsField() { return *GetNativePointerField<unsigned int*>(this, "FShaderCompilingManager.NumShaderCompilingThreads"); }
	unsigned int& NumShaderCompilingThreadsDuringGameField() { return *GetNativePointerField<unsigned int*>(this, "FShaderCompilingManager.NumShaderCompilingThreadsDuringGame"); }
	int& MaxShaderJobBatchSizeField() { return *GetNativePointerField<int*>(this, "FShaderCompilingManager.MaxShaderJobBatchSize"); }
	unsigned int& ProcessIdField() { return *GetNativePointerField<unsigned int*>(this, "FShaderCompilingManager.ProcessId"); }
	bool& bAllowCompilingThroughWorkersField() { return *GetNativePointerField<bool*>(this, "FShaderCompilingManager.bAllowCompilingThroughWorkers"); }
	bool& bAllowAsynchronousShaderCompilingField() { return *GetNativePointerField<bool*>(this, "FShaderCompilingManager.bAllowAsynchronousShaderCompiling"); }
	bool& bPromptToRetryFailedShaderCompilesField() { return *GetNativePointerField<bool*>(this, "FShaderCompilingManager.bPromptToRetryFailedShaderCompiles"); }
	bool& bLogJobCompletionTimesField() { return *GetNativePointerField<bool*>(this, "FShaderCompilingManager.bLogJobCompletionTimes"); }
	float& ProcessGameThreadTargetTimeField() { return *GetNativePointerField<float*>(this, "FShaderCompilingManager.ProcessGameThreadTargetTime"); }
	FString& ShaderBaseWorkingDirectoryField() { return *GetNativePointerField<FString*>(this, "FShaderCompilingManager.ShaderBaseWorkingDirectory"); }
	FString& AbsoluteShaderBaseWorkingDirectoryField() { return *GetNativePointerField<FString*>(this, "FShaderCompilingManager.AbsoluteShaderBaseWorkingDirectory"); }
	FString& AbsoluteShaderDebugInfoDirectoryField() { return *GetNativePointerField<FString*>(this, "FShaderCompilingManager.AbsoluteShaderDebugInfoDirectory"); }
	FString& ShaderCompileWorkerNameField() { return *GetNativePointerField<FString*>(this, "FShaderCompilingManager.ShaderCompileWorkerName"); }
	bool& bFallBackToDirectCompilesField() { return *GetNativePointerField<bool*>(this, "FShaderCompilingManager.bFallBackToDirectCompiles"); }
	long double& WorkersBusyTimeField() { return *GetNativePointerField<long double*>(this, "FShaderCompilingManager.WorkersBusyTime"); }

	// Functions

	void BlockOnShaderMapCompletion(const TArray<int> * ShaderMapIdsToFinishCompiling, TMap<int,FShaderMapFinalizeResults,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FShaderMapFinalizeResults,0> > * CompiledShaderMaps) { NativeCall<void, const TArray<int> *, TMap<int,FShaderMapFinalizeResults,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FShaderMapFinalizeResults,0> > *>(this, "FShaderCompilingManager.BlockOnShaderMapCompletion", ShaderMapIdsToFinishCompiling, CompiledShaderMaps); }
	void FinishCompilation(const wchar_t * MaterialName, const TArray<int> * ShaderMapIdsToFinishCompiling) { NativeCall<void, const wchar_t *, const TArray<int> *>(this, "FShaderCompilingManager.FinishCompilation", MaterialName, ShaderMapIdsToFinishCompiling); }
	bool HandlePotentialRetryOnError(TMap<int,FShaderMapFinalizeResults,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FShaderMapFinalizeResults,0> > * CompletedShaderMaps) { return NativeCall<bool, TMap<int,FShaderMapFinalizeResults,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FShaderMapFinalizeResults,0> > *>(this, "FShaderCompilingManager.HandlePotentialRetryOnError", CompletedShaderMaps); }
	void ProcessAsyncResults(bool bLimitExecutionTime, bool bBlockOnGlobalShaderCompletion) { NativeCall<void, bool, bool>(this, "FShaderCompilingManager.ProcessAsyncResults", bLimitExecutionTime, bBlockOnGlobalShaderCompletion); }
	void ProcessCompiledShaderMaps(TMap<int,FShaderMapFinalizeResults,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FShaderMapFinalizeResults,0> > * CompiledShaderMaps, float TimeBudget) { NativeCall<void, TMap<int,FShaderMapFinalizeResults,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FShaderMapFinalizeResults,0> > *, float>(this, "FShaderCompilingManager.ProcessCompiledShaderMaps", CompiledShaderMaps, TimeBudget); }
	void Shutdown() { NativeCall<void>(this, "FShaderCompilingManager.Shutdown"); }
};

