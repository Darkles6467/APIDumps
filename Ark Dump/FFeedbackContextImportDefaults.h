#pragma once

#include "BaseDeclarations.h"
#include "FFeedbackContext.h"
#include "FOutputDevice.h"

struct FFeedbackContextImportDefaults : FFeedbackContext
{
	char __padding[0x8L];
	FContextSupplier * ContextField() { return GetNativePointerField<FContextSupplier *>(this, "FFeedbackContextImportDefaults.Context"); }

	// Functions

	void Serialize(const wchar_t * V, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FFeedbackContextImportDefaults.Serialize", V, Verbosity, Category); }
};

