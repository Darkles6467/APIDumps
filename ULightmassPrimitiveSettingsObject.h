#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULightmassPrimitiveSettingsObject : UObject
{
	char __padding[0x18L];
	FLightmassPrimitiveSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPrimitiveSettings*>(this, "ULightmassPrimitiveSettingsObject.LightmassSettings"); }

	// Functions

};

