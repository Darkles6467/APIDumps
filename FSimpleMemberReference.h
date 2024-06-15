#pragma once

#include "BaseDeclarations.h"
struct FSimpleMemberReference
{
	char __padding[0x20L];
	FName& MemberNameField() { return *GetNativePointerField<FName*>(this, "FSimpleMemberReference.MemberName"); }
	FGuid& MemberGuidField() { return *GetNativePointerField<FGuid*>(this, "FSimpleMemberReference.MemberGuid"); }

	// Functions

};

