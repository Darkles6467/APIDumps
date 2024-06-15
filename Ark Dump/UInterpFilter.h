#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UInterpFilter : UObject
{
	char __padding[0x10L];
	FString& CaptionField() { return *GetNativePointerField<FString*>(this, "UInterpFilter.Caption"); }

	// Functions

	void FilterData(AMatineeActor * InMatineeActor) { NativeCall<void, AMatineeActor *>(this, "UInterpFilter.FilterData", InMatineeActor); }
};

