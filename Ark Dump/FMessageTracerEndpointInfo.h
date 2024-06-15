#pragma once

#include "BaseDeclarations.h"
struct FMessageTracerEndpointInfo
{
	char __padding[0x80L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FMessageTracerEndpointInfo.Name"); }
	TArray<TSharedPtr<FMessageTracerMessageInfo,0>>& ReceivedMessagesField() { return *GetNativePointerField<TArray<TSharedPtr<FMessageTracerMessageInfo,0>>*>(this, "FMessageTracerEndpointInfo.ReceivedMessages"); }
	bool& RemoteField() { return *GetNativePointerField<bool*>(this, "FMessageTracerEndpointInfo.Remote"); }
	TArray<TSharedPtr<FMessageTracerMessageInfo,0>>& SentMessagesField() { return *GetNativePointerField<TArray<TSharedPtr<FMessageTracerMessageInfo,0>>*>(this, "FMessageTracerEndpointInfo.SentMessages"); }
};

