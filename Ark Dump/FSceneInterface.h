#pragma once

#include "BaseDeclarations.h"
struct FSceneInterface
{
	char __padding[0x8L];

	// Functions

	ERHIFeatureLevel::Type GetFeatureLevel() { return NativeCall<ERHIFeatureLevel::Type>(this, "FSceneInterface.GetFeatureLevel"); }
};

