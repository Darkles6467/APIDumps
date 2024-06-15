#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformNamedPipe
{
	char __padding[0x10L];
	FString * NamePtrField() { return GetNativePointerField<FString *>(this, "FGenericPlatformNamedPipe.NamePtr"); }
};

struct FWindowsPlatformNamedPipe : FGenericPlatformNamedPipe
{
	enum EState
	{
		State_Uninitialized = 0x0,
		State_Created = 0x1,
		State_Connecting = 0x2,
		State_ReadyForRW = 0x3,
		State_WaitingForRW = 0x4,
		State_ErrorPipeClosedUnexpectedly = 0x5,
	};

	char __padding[0x38L];
	void * PipeField() { return GetNativePointerField<void *>(this, "FWindowsPlatformNamedPipe.Pipe"); }
	_OVERLAPPED& OverlappedField() { return *GetNativePointerField<_OVERLAPPED*>(this, "FWindowsPlatformNamedPipe.Overlapped"); }
	long double& LastWaitingTimeField() { return *GetNativePointerField<long double*>(this, "FWindowsPlatformNamedPipe.LastWaitingTime"); }
	FWindowsPlatformNamedPipe::EState& StateField() { return *GetNativePointerField<FWindowsPlatformNamedPipe::EState*>(this, "FWindowsPlatformNamedPipe.State"); }
};

