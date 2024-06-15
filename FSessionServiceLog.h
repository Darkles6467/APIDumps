#pragma once

#include "BaseDeclarations.h"
struct FSessionServiceLog
{
	char __padding[0x38L];
	FName& CategoryField() { return *GetNativePointerField<FName*>(this, "FSessionServiceLog.Category"); }
	FString& DataField() { return *GetNativePointerField<FString*>(this, "FSessionServiceLog.Data"); }
	FGuid& InstanceIdField() { return *GetNativePointerField<FGuid*>(this, "FSessionServiceLog.InstanceId"); }
	long double& TimeSecondsField() { return *GetNativePointerField<long double*>(this, "FSessionServiceLog.TimeSeconds"); }
	char& VerbosityField() { return *GetNativePointerField<char*>(this, "FSessionServiceLog.Verbosity"); }

	// Functions

};

