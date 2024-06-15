#pragma once

#include "BaseDeclarations.h"
struct FMessageTracerDispatchState
{
	char __padding[0x30L];
	long double& DispatchLatencyField() { return *GetNativePointerField<long double*>(this, "FMessageTracerDispatchState.DispatchLatency"); }
	EMessageTracerDispatchTypes::Type& DispatchTypeField() { return *GetNativePointerField<EMessageTracerDispatchTypes::Type*>(this, "FMessageTracerDispatchState.DispatchType"); }
	TSharedPtr<FMessageTracerEndpointInfo,0>& EndpointInfoField() { return *GetNativePointerField<TSharedPtr<FMessageTracerEndpointInfo,0>*>(this, "FMessageTracerDispatchState.EndpointInfo"); }
	long double& TimeDispatchedField() { return *GetNativePointerField<long double*>(this, "FMessageTracerDispatchState.TimeDispatched"); }
	long double& TimeHandledField() { return *GetNativePointerField<long double*>(this, "FMessageTracerDispatchState.TimeHandled"); }
};

