#pragma once

#include "BaseDeclarations.h"
#include "FBaseTraceDatum.h"

struct FTraceDatum : FBaseTraceDatum
{
	char __padding[0x38L];
	FVector& StartField() { return *GetNativePointerField<FVector*>(this, "FTraceDatum.Start"); }
	FVector& EndField() { return *GetNativePointerField<FVector*>(this, "FTraceDatum.End"); }
	TArray<FHitResult>& OutHitsField() { return *GetNativePointerField<TArray<FHitResult>*>(this, "FTraceDatum.OutHits"); }
	unsigned int& IDField() { return *GetNativePointerField<unsigned int*>(this, "FTraceDatum.ID"); }

	// Functions

	FTraceDatum * operator=(const FTraceDatum * __that) { return NativeCall<FTraceDatum *, const FTraceDatum *>(this, "FTraceDatum.operator=", __that); }
};

