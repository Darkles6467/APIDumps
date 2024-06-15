#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundAttenuation : UObject
{
	char __padding[0x38L];
	FAttenuationSettings& AttenuationField() { return *GetNativePointerField<FAttenuationSettings*>(this, "USoundAttenuation.Attenuation"); }

	// Functions

};

