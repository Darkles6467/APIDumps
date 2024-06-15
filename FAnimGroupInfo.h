#pragma once

#include "BaseDeclarations.h"
struct FAnimGroupInfo
{
	char __padding[0x18L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FAnimGroupInfo.Name"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FAnimGroupInfo.Color"); }

	// Functions

};

