#pragma once

#include "BaseDeclarations.h"
struct FDVRStreamingStatus
{
	char __padding[0x38L];
	bool& bIsStreamingField() { return *GetNativePointerField<bool*>(this, "FDVRStreamingStatus.bIsStreaming"); }
	bool& bIsStreamingEnabledField() { return *GetNativePointerField<bool*>(this, "FDVRStreamingStatus.bIsStreamingEnabled"); }
	int& ViewerCountField() { return *GetNativePointerField<int*>(this, "FDVRStreamingStatus.ViewerCount"); }
	FString& ProgramNameField() { return *GetNativePointerField<FString*>(this, "FDVRStreamingStatus.ProgramName"); }
	FString& HLSUrlField() { return *GetNativePointerField<FString*>(this, "FDVRStreamingStatus.HLSUrl"); }
	FString& ProviderUrlField() { return *GetNativePointerField<FString*>(this, "FDVRStreamingStatus.ProviderUrl"); }
};

