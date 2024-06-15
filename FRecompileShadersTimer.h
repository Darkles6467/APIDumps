#pragma once

#include "BaseDeclarations.h"
struct FRecompileShadersTimer
{
	char __padding[0x30L];
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "FRecompileShadersTimer.StartTime"); }
	long double& EndTimeField() { return *GetNativePointerField<long double*>(this, "FRecompileShadersTimer.EndTime"); }
	long double& TimeElapsedField() { return *GetNativePointerField<long double*>(this, "FRecompileShadersTimer.TimeElapsed"); }
	FString& InfoStrField() { return *GetNativePointerField<FString*>(this, "FRecompileShadersTimer.InfoStr"); }
	bool& bAlreadyStoppedField() { return *GetNativePointerField<bool*>(this, "FRecompileShadersTimer.bAlreadyStopped"); }
};

