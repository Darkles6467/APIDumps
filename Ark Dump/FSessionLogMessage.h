#pragma once

#include "BaseDeclarations.h"
struct FSessionLogMessage
{
	char __padding[0x50L];
	FName& CategoryField() { return *GetNativePointerField<FName*>(this, "FSessionLogMessage.Category"); }
	FGuid& InstanceIdField() { return *GetNativePointerField<FGuid*>(this, "FSessionLogMessage.InstanceId"); }
	FString& InstanceNameField() { return *GetNativePointerField<FString*>(this, "FSessionLogMessage.InstanceName"); }
	FString& TextField() { return *GetNativePointerField<FString*>(this, "FSessionLogMessage.Text"); }
	FDateTime& TimeField() { return *GetNativePointerField<FDateTime*>(this, "FSessionLogMessage.Time"); }
	long double& TimeSecondsField() { return *GetNativePointerField<long double*>(this, "FSessionLogMessage.TimeSeconds"); }
	ELogVerbosity::Type& VerbosityField() { return *GetNativePointerField<ELogVerbosity::Type*>(this, "FSessionLogMessage.Verbosity"); }

	// Functions

};

