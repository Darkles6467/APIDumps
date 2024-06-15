#pragma once

#include "BaseDeclarations.h"
struct FAnimationGroupReference
{
	char __padding[0xcL];
	FName& GroupNameField() { return *GetNativePointerField<FName*>(this, "FAnimationGroupReference.GroupName"); }
	TEnumAsByte<enum EAnimGroupRole::Type>& GroupRoleField() { return *GetNativePointerField<TEnumAsByte<enum EAnimGroupRole::Type>*>(this, "FAnimationGroupReference.GroupRole"); }

	// Functions

};

