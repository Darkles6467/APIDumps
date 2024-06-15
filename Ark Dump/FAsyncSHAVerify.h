#pragma once

#include "BaseDeclarations.h"
struct FAsyncSHAVerify
{
	char __padding[0x38L];
	void * BufferField() { return GetNativePointerField<void *>(this, "FAsyncSHAVerify.Buffer"); }
	int& BufferSizeField() { return *GetNativePointerField<int*>(this, "FAsyncSHAVerify.BufferSize"); }
	FieldArray<char, 20> HashField() { return {this, "FAsyncSHAVerify.Hash"}; }
	FString& PathnameField() { return *GetNativePointerField<FString*>(this, "FAsyncSHAVerify.Pathname"); }
	bool& bIsUnfoundHashAnErrorField() { return *GetNativePointerField<bool*>(this, "FAsyncSHAVerify.bIsUnfoundHashAnError"); }
	bool& bShouldDeleteBufferField() { return *GetNativePointerField<bool*>(this, "FAsyncSHAVerify.bShouldDeleteBuffer"); }

	// Functions

	void DoWork() { NativeCall<void>(this, "FAsyncSHAVerify.DoWork"); }
};

