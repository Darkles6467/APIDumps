#pragma once

#include "BaseDeclarations.h"
struct FBoneModifierNamed
{
	char __padding[0x28L];
	FName& TheBoneNameField() { return *GetNativePointerField<FName*>(this, "FBoneModifierNamed.TheBoneName"); }
	FBoneModifier& TheBoneModifierField() { return *GetNativePointerField<FBoneModifier*>(this, "FBoneModifierNamed.TheBoneModifier"); }

	// Functions

};

