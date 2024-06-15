#pragma once

#include "BaseDeclarations.h"
#include "FResolveInfo.h"

struct FResolveInfoAsync : FResolveInfo
{
	char __padding[0x140L];
	FieldArray<char, 256> HostNameField() { return {this, "FResolveInfoAsync.HostName"}; }
	int& ErrorCodeField() { return *GetNativePointerField<int*>(this, "FResolveInfoAsync.ErrorCode"); }
	volatile int& bShouldAbandonField() { return *GetNativePointerField<volatile int*>(this, "FResolveInfoAsync.bShouldAbandon"); }

	// Functions

	void DoWork() { NativeCall<void>(this, "FResolveInfoAsync.DoWork"); }
	int GetErrorCode() { return NativeCall<int>(this, "FResolveInfoAsync.GetErrorCode"); }
	bool IsComplete() { return NativeCall<bool>(this, "FResolveInfoAsync.IsComplete"); }
};

