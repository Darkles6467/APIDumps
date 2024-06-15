#pragma once

#include "BaseDeclarations.h"
struct FSerializationHistory
{
	char __padding[0x28L];
	TArray<unsigned int>& TokenBitsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FSerializationHistory.TokenBits"); }
	int& NumTokensField() { return *GetNativePointerField<int*>(this, "FSerializationHistory.NumTokens"); }
	TArray<unsigned int>& FullLengthsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FSerializationHistory.FullLengths"); }

	// Functions

	bool operator==(const FSerializationHistory * Other) { return NativeCall<bool, const FSerializationHistory *>(this, "FSerializationHistory.operator==", Other); }
	void AddValue(unsigned int InValue) { NativeCall<void, unsigned int>(this, "FSerializationHistory.AddValue", InValue); }
	void AppendKeyString(FString * KeyString) { NativeCall<void, FString *>(this, "FSerializationHistory.AppendKeyString", KeyString); }
};

