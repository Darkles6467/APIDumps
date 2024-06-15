#pragma once

#include "BaseDeclarations.h"
struct FEmoteGroup
{
	char __padding[0x18L];
	FName& GroupNameField() { return *GetNativePointerField<FName*>(this, "FEmoteGroup.GroupName"); }
	FLinearColor& GroupColorField() { return *GetNativePointerField<FLinearColor*>(this, "FEmoteGroup.GroupColor"); }

	// Functions

};

