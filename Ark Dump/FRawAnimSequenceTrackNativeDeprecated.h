#pragma once

#include "BaseDeclarations.h"
struct FRawAnimSequenceTrackNativeDeprecated
{
	char __padding[0x20L];
	TArray<FVector>& PosKeysField() { return *GetNativePointerField<TArray<FVector>*>(this, "FRawAnimSequenceTrackNativeDeprecated.PosKeys"); }
	TArray<FQuat>& RotKeysField() { return *GetNativePointerField<TArray<FQuat>*>(this, "FRawAnimSequenceTrackNativeDeprecated.RotKeys"); }
};

