#pragma once

#include "BaseDeclarations.h"
struct FInterpGroupActorInfo
{
	char __padding[0x20L];
	FName& GroupName_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FInterpGroupActorInfo.GroupName_DEPRECATED"); }
	FName& ObjectNameField() { return *GetNativePointerField<FName*>(this, "FInterpGroupActorInfo.ObjectName"); }

	// Functions

};

