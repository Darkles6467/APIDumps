#pragma once

#include "BaseDeclarations.h"
#include "ULevelStreaming.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULevelStreamingBounds : ULevelStreaming
{

	// Functions

	bool ShouldBeLoaded(const FVector * ViewLocation) { return NativeCall<bool, const FVector *>(this, "ULevelStreamingBounds.ShouldBeLoaded", ViewLocation); }
	bool ShouldBeVisible(const FVector * ViewLocation) { return NativeCall<bool, const FVector *>(this, "ULevelStreamingBounds.ShouldBeVisible", ViewLocation); }
};

