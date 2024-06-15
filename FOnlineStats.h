#pragma once

#include "BaseDeclarations.h"
struct FOnlineStats
{
	char __padding[0x18L];
	FOnlineKeyValuePairs<FName,FVariantData>& PropertiesField() { return *GetNativePointerField<FOnlineKeyValuePairs<FName,FVariantData>*>(this, "FOnlineStats.Properties"); }

	// Functions

	void DecrementFloatStat(const FName * StatName, float DecBy) { NativeCall<void, const FName *, float>(this, "FOnlineStats.DecrementFloatStat", StatName, DecBy); }
	void DecrementIntStat(const FName * StatName, int DecBy) { NativeCall<void, const FName *, int>(this, "FOnlineStats.DecrementIntStat", StatName, DecBy); }
	void IncrementFloatStat(const FName * StatName, float IncBy) { NativeCall<void, const FName *, float>(this, "FOnlineStats.IncrementFloatStat", StatName, IncBy); }
	void IncrementIntStat(const FName * StatName, int IncBy) { NativeCall<void, const FName *, int>(this, "FOnlineStats.IncrementIntStat", StatName, IncBy); }
	void SetFloatStat(const FName * StatName, float Value) { NativeCall<void, const FName *, float>(this, "FOnlineStats.SetFloatStat", StatName, Value); }
	void SetIntStat(const FName * StatName, int Value) { NativeCall<void, const FName *, int>(this, "FOnlineStats.SetIntStat", StatName, Value); }
};

