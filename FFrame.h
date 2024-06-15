#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FFrame : FOutputDevice
{
	char __padding[0x80L];
	UFunction * NodeField() { return GetNativePointerField<UFunction *>(this, "FFrame.Node"); }
	char * CodeField() { return GetNativePointerField<char *>(this, "FFrame.Code"); }
	char * LocalsField() { return GetNativePointerField<char *>(this, "FFrame.Locals"); }
	char * MostRecentPropertyAddressField() { return GetNativePointerField<char *>(this, "FFrame.MostRecentPropertyAddress"); }
	TArray<unsigned int,TInlineAllocator<8> >& FlowStackField() { return *GetNativePointerField<TArray<unsigned int,TInlineAllocator<8> >*>(this, "FFrame.FlowStack"); }
	FFrame * PreviousFrameField() { return GetNativePointerField<FFrame *>(this, "FFrame.PreviousFrame"); }
	FOutParmRec * OutParmsField() { return GetNativePointerField<FOutParmRec *>(this, "FFrame.OutParms"); }
	UFunction * CurrentNativeFunctionField() { return GetNativePointerField<UFunction *>(this, "FFrame.CurrentNativeFunction"); }

	// Functions

	FString * GetStackTrace(FString * result) { return NativeCall<FString *, FString *>(this, "FFrame.GetStackTrace", result); }
	static void KismetExecutionMessage(const wchar_t * Message, ELogVerbosity::Type Verbosity) { NativeCall<void, const wchar_t *, ELogVerbosity::Type>(nullptr, "FFrame.KismetExecutionMessage", Message, Verbosity); }
	unsigned __int16 ReadVariableSize(UField ** ExpressionField) { return NativeCall<unsigned __int16, UField **>(this, "FFrame.ReadVariableSize", ExpressionField); }
	void Serialize(const wchar_t * V, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FFrame.Serialize", V, Verbosity, Category); }
	void Step(UObject * Context, void *const Result) { NativeCall<void, UObject *, void *const>(this, "FFrame.Step", Context, Result); }
	void StepExplicitProperty(void *const Result, UProperty * Property) { NativeCall<void, void *const, UProperty *>(this, "FFrame.StepExplicitProperty", Result, Property); }
};

