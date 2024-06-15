#pragma once

#include "BaseDeclarations.h"
#include "FJsonValue.h"
#include "FJsonObject.h"

struct FJsonSerializer
{

	// Functions

	void FElement(const TSharedPtr<FJsonValue,0> * InValue) { NativeCall<void, const TSharedPtr<FJsonValue,0> *>(this, "FJsonSerializer.FElement", InValue); }
	void FElement(const TSharedRef<FJsonObject,0> * Object) { NativeCall<void, const TSharedRef<FJsonObject,0> *>(this, "FJsonSerializer.FElement", Object); }
	void FElement(const FString * InIdentifier, const TSharedPtr<FJsonValue,0> * InValue) { NativeCall<void, const FString *, const TSharedPtr<FJsonValue,0> *>(this, "FJsonSerializer.FElement", InIdentifier, InValue); }
	void StackState() { NativeCall<void>(this, "FJsonSerializer.StackState"); }
	void StackState() { NativeCall<void>(this, "FJsonSerializer.StackState"); }
	FJsonSerializer::StackState * StackState(const FJsonSerializer::StackState * __that) { return NativeCall<FJsonSerializer::StackState *, const FJsonSerializer::StackState *>(this, "FJsonSerializer.StackState", __that); }
	void FElement(const TArray<TSharedPtr<FJsonValue,0>> * Array) { NativeCall<void, const TArray<TSharedPtr<FJsonValue,0>> *>(this, "FJsonSerializer.FElement", Array); }
};

