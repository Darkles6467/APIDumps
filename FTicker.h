#pragma once

#include "BaseDeclarations.h"
struct FTicker
{
	char __padding[0x18L];
	long double& CurrentTimeField() { return *GetNativePointerField<long double*>(this, "FTicker.CurrentTime"); }
	TArray<FTicker::FElement>& PriorityQueueField() { return *GetNativePointerField<TArray<FTicker::FElement>*>(this, "FTicker.PriorityQueue"); }

	// Functions

	void FElement() { NativeCall<void>(this, "FTicker.FElement"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FTicker.Tick", DeltaTime); }
	static FTicker * GetCoreTicker() { return NativeCall<FTicker *>(nullptr, "FTicker.GetCoreTicker"); }
};

