#pragma once

#include "BaseDeclarations.h"
#include "ALight.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASpotLight : ALight
{
	char __padding[0x8L];
	USpotLightComponent * SpotLightComponentField() { return GetNativePointerField<USpotLightComponent *>(this, "ASpotLight.SpotLightComponent"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "ASpotLight.PostLoad"); }
	void SetInnerConeAngle(float NewInnerConeAngle) { NativeCall<void, float>(this, "ASpotLight.SetInnerConeAngle", NewInnerConeAngle); }
	void SetOuterConeAngle(float NewOuterConeAngle) { NativeCall<void, float>(this, "ASpotLight.SetOuterConeAngle", NewOuterConeAngle); }
};

struct AGeneratedMeshAreaLight : ASpotLight
{

	// Functions

};

