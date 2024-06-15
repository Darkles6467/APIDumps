#pragma once

#include "BaseDeclarations.h"
struct FTimerData
{
	char __padding[0x58L];
	bool& bLoopField() { return *GetNativePointerField<bool*>(this, "FTimerData.bLoop"); }
	unsigned int& LinkIDField() { return *GetNativePointerField<unsigned int*>(this, "FTimerData.LinkID"); }
	ETimerStatus::Type& StatusField() { return *GetNativePointerField<ETimerStatus::Type*>(this, "FTimerData.Status"); }
	float& RateField() { return *GetNativePointerField<float*>(this, "FTimerData.Rate"); }
	long double& ExpireTimeField() { return *GetNativePointerField<long double*>(this, "FTimerData.ExpireTime"); }
	FTimerHandle& TimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "FTimerData.TimerHandle"); }
	FTimerData * NextTimerField() { return GetNativePointerField<FTimerData *>(this, "FTimerData.NextTimer"); }
	FTimerData * PrevTimerField() { return GetNativePointerField<FTimerData *>(this, "FTimerData.PrevTimer"); }
	int& IndexInStorageField() { return *GetNativePointerField<int*>(this, "FTimerData.IndexInStorage"); }

	// Functions

	FTimerData * operator=(const FTimerData * InTimerData) { return NativeCall<FTimerData *, const FTimerData *>(this, "FTimerData.operator=", InTimerData); }
	void Clear() { NativeCall<void>(this, "FTimerData.Clear"); }
};

