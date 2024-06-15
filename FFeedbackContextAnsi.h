#pragma once

#include "BaseDeclarations.h"
#include "FFeedbackContext.h"
#include "FOutputDevice.h"

struct FFeedbackContextAnsi : FFeedbackContext
{
	char __padding[0x18L];
	int& SlowTaskCountField() { return *GetNativePointerField<int*>(this, "FFeedbackContextAnsi.SlowTaskCount"); }
	FContextSupplier * ContextField() { return GetNativePointerField<FContextSupplier *>(this, "FFeedbackContextAnsi.Context"); }

	// Functions

	void BeginSlowTask(const FText * Task, bool ShowProgressDialog, bool bShowCancelButton) { NativeCall<void, const FText *, bool, bool>(this, "FFeedbackContextAnsi.BeginSlowTask", Task, ShowProgressDialog, bShowCancelButton); }
	void EndSlowTask() { NativeCall<void>(this, "FFeedbackContextAnsi.EndSlowTask"); }
	void Serialize(const wchar_t * V, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FFeedbackContextAnsi.Serialize", V, Verbosity, Category); }
	void SetContext(FContextSupplier * InSupplier) { NativeCall<void, FContextSupplier *>(this, "FFeedbackContextAnsi.SetContext", InSupplier); }
	bool YesNof(const FText * Question) { return NativeCall<bool, const FText *>(this, "FFeedbackContextAnsi.YesNof", Question); }
};

