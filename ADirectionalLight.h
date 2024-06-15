#pragma once

#include "BaseDeclarations.h"
#include "ALight.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADirectionalLight : ALight
{
	char __padding[0x8L];
	bool& bAddedToArrayField() { return *GetNativePointerField<bool*>(this, "ADirectionalLight.bAddedToArray"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ADirectionalLight.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "ADirectionalLight.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ADirectionalLight.EndPlay", EndPlayReason); }
};

