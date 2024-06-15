#pragma once

#include "BaseDeclarations.h"
struct FRemoteConfigAsyncIOInfo
{
	char __padding[0x830L];
	FString& BufferField() { return *GetNativePointerField<FString*>(this, "FRemoteConfigAsyncIOInfo.Buffer"); }
	FDateTime& TimeStampField() { return *GetNativePointerField<FDateTime*>(this, "FRemoteConfigAsyncIOInfo.TimeStamp"); }
	long double& StartReadTimeField() { return *GetNativePointerField<long double*>(this, "FRemoteConfigAsyncIOInfo.StartReadTime"); }
	long double& StartWriteTimeField() { return *GetNativePointerField<long double*>(this, "FRemoteConfigAsyncIOInfo.StartWriteTime"); }
	bool& bReadIOFailedField() { return *GetNativePointerField<bool*>(this, "FRemoteConfigAsyncIOInfo.bReadIOFailed"); }
	bool& bWasProcessedField() { return *GetNativePointerField<bool*>(this, "FRemoteConfigAsyncIOInfo.bWasProcessed"); }
	FieldArray<wchar_t, 1024> DefaultIniFileField() { return {this, "FRemoteConfigAsyncIOInfo.DefaultIniFile"}; }

	// Functions

	FRemoteConfigAsyncIOInfo * operator=(const FRemoteConfigAsyncIOInfo * Other) { return NativeCall<FRemoteConfigAsyncIOInfo *, const FRemoteConfigAsyncIOInfo *>(this, "FRemoteConfigAsyncIOInfo.operator=", Other); }
};

