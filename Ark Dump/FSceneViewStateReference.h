#pragma once

#include "BaseDeclarations.h"
struct FSceneViewStateReference
{
	char __padding[0x28L];

	// Functions

	void Allocate() { NativeCall<void>(this, "FSceneViewStateReference.Allocate"); }
	void Destroy() { NativeCall<void>(this, "FSceneViewStateReference.Destroy"); }
};

