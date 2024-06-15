#pragma once

#include "BaseDeclarations.h"
#include "FBaseTraceDatum.h"

struct FOverlapDatum : FBaseTraceDatum
{
	char __padding[0x48L];
	FVector& PosField() { return *GetNativePointerField<FVector*>(this, "FOverlapDatum.Pos"); }
	FQuat& RotField() { return *GetNativePointerField<FQuat*>(this, "FOverlapDatum.Rot"); }
	TArray<FOverlapResult>& OutOverlapsField() { return *GetNativePointerField<TArray<FOverlapResult>*>(this, "FOverlapDatum.OutOverlaps"); }
};

