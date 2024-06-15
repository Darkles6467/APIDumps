#pragma once

#include "BaseDeclarations.h"
struct FPlayerReservation
{
	char __padding[0x28L];
	FString& ValidationStrField() { return *GetNativePointerField<FString*>(this, "FPlayerReservation.ValidationStr"); }
	float& ElapsedTimeField() { return *GetNativePointerField<float*>(this, "FPlayerReservation.ElapsedTime"); }

	// Functions

};

