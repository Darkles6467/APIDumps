#pragma once

#include "BaseDeclarations.h"
struct FMessageTracerMessageInfo
{
	char __padding[0x90L];
	TSharedPtr<FMessageTracerEndpointInfo,0>& SenderInfoField() { return *GetNativePointerField<TSharedPtr<FMessageTracerEndpointInfo,0>*>(this, "FMessageTracerMessageInfo.SenderInfo"); }
	long double& TimeRoutedField() { return *GetNativePointerField<long double*>(this, "FMessageTracerMessageInfo.TimeRouted"); }
	long double& TimeSentField() { return *GetNativePointerField<long double*>(this, "FMessageTracerMessageInfo.TimeSent"); }
	TSharedPtr<FMessageTracerTypeInfo,0>& TypeInfoField() { return *GetNativePointerField<TSharedPtr<FMessageTracerTypeInfo,0>*>(this, "FMessageTracerMessageInfo.TypeInfo"); }
};

