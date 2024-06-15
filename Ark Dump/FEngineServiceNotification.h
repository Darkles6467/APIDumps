#pragma once

#include "BaseDeclarations.h"
struct FEngineServiceNotification
{
	char __padding[0x18L];
	FString& TextField() { return *GetNativePointerField<FString*>(this, "FEngineServiceNotification.Text"); }
	long double& TimeSecondsField() { return *GetNativePointerField<long double*>(this, "FEngineServiceNotification.TimeSeconds"); }

	// Functions

};

