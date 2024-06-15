#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventTraceForCompanionBlockersFromPlayer_Parms
{
	char __padding[0x30L];
	FVector& AdjustedLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Companion_eventTraceForCompanionBlockersFromPlayer_Parms.AdjustedLocation"); }
	FVector& TraceStartField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Companion_eventTraceForCompanionBlockersFromPlayer_Parms.TraceStart"); }
	FVector& TraceEndField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Companion_eventTraceForCompanionBlockersFromPlayer_Parms.TraceEnd"); }
	bool& bDebugField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventTraceForCompanionBlockersFromPlayer_Parms.bDebug"); }
	float& TraceRadiusField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Companion_eventTraceForCompanionBlockersFromPlayer_Parms.TraceRadius"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventTraceForCompanionBlockersFromPlayer_Parms.ReturnValue"); }
};

