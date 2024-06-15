#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDynamicCaptureData : UObject
{
	char __padding[0x20L];
	TArray<UReflectionCaptureData *>& ReflectionCapturesDataField() { return *GetNativePointerField<TArray<UReflectionCaptureData *>*>(this, "UDynamicCaptureData.ReflectionCapturesData"); }
	TArray<USkyLightData *>& SkyLightsDataField() { return *GetNativePointerField<TArray<USkyLightData *>*>(this, "UDynamicCaptureData.SkyLightsData"); }

	// Functions

};

