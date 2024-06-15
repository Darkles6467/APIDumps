#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AHexagonVFXActor : AActor
{

	// Functions

	void BeginMovingDirectlyToActor() { NativeCall<void>(this, "AHexagonVFXActor.BeginMovingDirectlyToActor"); }
	void HoverThenAttract() { NativeCall<void>(this, "AHexagonVFXActor.HoverThenAttract"); }
	void SetVolume(float NewVolume) { NativeCall<void, float>(this, "AHexagonVFXActor.SetVolume", NewVolume); }
};

