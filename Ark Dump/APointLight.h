#pragma once

#include "BaseDeclarations.h"
#include "ALight.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APointLight : ALight
{
	char __padding[0x8L];

	// Functions

	void SetLightFalloffExponent(float NewLightFalloffExponent) { NativeCall<void, float>(this, "APointLight.SetLightFalloffExponent", NewLightFalloffExponent); }
	void SetRadius(float NewRadius) { NativeCall<void, float>(this, "APointLight.SetRadius", NewRadius); }
};

