#pragma once

#include "BaseDeclarations.h"
struct FRawAnimSequenceTrack
{
	char __padding[0x30L];
	TArray<FVector>& PosKeysField() { return *GetNativePointerField<TArray<FVector>*>(this, "FRawAnimSequenceTrack.PosKeys"); }
	TArray<FQuat>& RotKeysField() { return *GetNativePointerField<TArray<FQuat>*>(this, "FRawAnimSequenceTrack.RotKeys"); }
	TArray<FVector>& ScaleKeysField() { return *GetNativePointerField<TArray<FVector>*>(this, "FRawAnimSequenceTrack.ScaleKeys"); }

	// Functions

};

