#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FFeedbackContext : FOutputDevice
{
	char __padding[0x28L];
	TArray<FString>& WarningsField() { return *GetNativePointerField<TArray<FString>*>(this, "FFeedbackContext.Warnings"); }
	TArray<FString>& ErrorsField() { return *GetNativePointerField<TArray<FString>*>(this, "FFeedbackContext.Errors"); }
	bool& TreatWarningsAsErrorsField() { return *GetNativePointerField<bool*>(this, "FFeedbackContext.TreatWarningsAsErrors"); }
};

