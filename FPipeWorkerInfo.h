#pragma once

#include "BaseDeclarations.h"
struct FPipeWorkerInfo
{
	enum EState
	{
		State_Idle = 0x0,
		State_Connecting = 0x1,
		State_SendingJobData = 0x2,
		State_ReceivingResultSize = 0x3,
		State_ReceivingResults = 0x4,
	};

	char __padding[0x80L];
	FString& PipeNameField() { return *GetNativePointerField<FString*>(this, "FPipeWorkerInfo.PipeName"); }
	FWindowsPlatformNamedPipe& NamedPipeField() { return *GetNativePointerField<FWindowsPlatformNamedPipe*>(this, "FPipeWorkerInfo.NamedPipe"); }
	TArray<unsigned char>& WorkJobBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FPipeWorkerInfo.WorkJobBuffer"); }
	FPipeWorkerInfo::EState& StateField() { return *GetNativePointerField<FPipeWorkerInfo::EState*>(this, "FPipeWorkerInfo.State"); }
	int& ResultsTransferSizeField() { return *GetNativePointerField<int*>(this, "FPipeWorkerInfo.ResultsTransferSize"); }
	TArray<unsigned char>& ResultsBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FPipeWorkerInfo.ResultsBuffer"); }

	// Functions

	void CreatePipe(unsigned int WorkerIndex, unsigned int ProcessId, bool bAllocPipeName) { NativeCall<void, unsigned int, unsigned int, bool>(this, "FPipeWorkerInfo.CreatePipe", WorkerIndex, ProcessId, bAllocPipeName); }
	bool UpdateResultsState() { return NativeCall<bool>(this, "FPipeWorkerInfo.UpdateResultsState"); }
	void WriteTasksForPipe(TArray<FShaderCompileJob *> * QueuedJobs) { NativeCall<void, TArray<FShaderCompileJob *> *>(this, "FPipeWorkerInfo.WriteTasksForPipe", QueuedJobs); }
};

