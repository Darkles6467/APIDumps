#pragma once

#include "BaseDeclarations.h"
struct FObjectDuplicationParameters
{
	char __padding[0x88L];
	FName& DestNameField() { return *GetNativePointerField<FName*>(this, "FObjectDuplicationParameters.DestName"); }
	EObjectFlags& FlagMaskField() { return *GetNativePointerField<EObjectFlags*>(this, "FObjectDuplicationParameters.FlagMask"); }
	EObjectFlags& ApplyFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "FObjectDuplicationParameters.ApplyFlags"); }
	unsigned int& PortFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FObjectDuplicationParameters.PortFlags"); }
};

