#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FMonitoredProcess : FRunnable
{
	char __padding[0x80L];
	bool& bDirectOuputField() { return *GetNativePointerField<bool*>(this, "FMonitoredProcess.bDirectOuput"); }
	bool& CancelingField() { return *GetNativePointerField<bool*>(this, "FMonitoredProcess.Canceling"); }
	FDateTime& EndTimeField() { return *GetNativePointerField<FDateTime*>(this, "FMonitoredProcess.EndTime"); }
	bool& HiddenField() { return *GetNativePointerField<bool*>(this, "FMonitoredProcess.Hidden"); }
	bool& KillTreeField() { return *GetNativePointerField<bool*>(this, "FMonitoredProcess.KillTree"); }
	FString& ParamsField() { return *GetNativePointerField<FString*>(this, "FMonitoredProcess.Params"); }
	void * ReadPipeField() { return GetNativePointerField<void *>(this, "FMonitoredProcess.ReadPipe"); }
	FDateTime& StartTimeField() { return *GetNativePointerField<FDateTime*>(this, "FMonitoredProcess.StartTime"); }
	FString& URLField() { return *GetNativePointerField<FString*>(this, "FMonitoredProcess.URL"); }
	void * WritePipeField() { return GetNativePointerField<void *>(this, "FMonitoredProcess.WritePipe"); }
	int& ReturnCodeField() { return *GetNativePointerField<int*>(this, "FMonitoredProcess.ReturnCode"); }
};

