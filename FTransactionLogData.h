#pragma once

#include "BaseDeclarations.h"
struct FTransactionLogData
{
	char __padding[0x20L];
	EAntiDupeTransactionLog& TypeField() { return *GetNativePointerField<EAntiDupeTransactionLog*>(this, "FTransactionLogData.Type"); }
	unsigned __int64& ProfileIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FTransactionLogData.ProfileID"); }
	unsigned int& ID1Field() { return *GetNativePointerField<unsigned int*>(this, "FTransactionLogData.ID1"); }
	unsigned int& ID2Field() { return *GetNativePointerField<unsigned int*>(this, "FTransactionLogData.ID2"); }

	// Functions

	static bool FromString(const FString * InString, FTransactionLogData * OutData) { return NativeCall<bool, const FString *, FTransactionLogData *>(nullptr, "FTransactionLogData.FromString", InString, OutData); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FTransactionLogData.ToString", result); }
};

