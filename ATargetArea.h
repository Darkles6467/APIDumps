#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ATargetArea : AActor
{
	char __padding[0x10L];
	float& RadiusField() { return *GetNativePointerField<float*>(this, "ATargetArea.Radius"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ATargetArea.BeginPlay"); }
};

