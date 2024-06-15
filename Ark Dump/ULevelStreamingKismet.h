#pragma once

#include "BaseDeclarations.h"
#include "ULevelStreaming.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULevelStreamingKismet : ULevelStreaming
{
	char __padding[0x10L];

	// Functions

	void PostLoad() { NativeCall<void>(this, "ULevelStreamingKismet.PostLoad"); }
	void SetLevelVisibility(bool bVisible, bool bIsLowMemory) { NativeCall<void, bool, bool>(this, "ULevelStreamingKismet.SetLevelVisibility", bVisible, bIsLowMemory); }
	bool ShouldBeLoaded(const FVector * ViewLocation) { return NativeCall<bool, const FVector *>(this, "ULevelStreamingKismet.ShouldBeLoaded", ViewLocation); }
	bool ShouldBeVisible(const FVector * ViewLocation) { return NativeCall<bool, const FVector *>(this, "ULevelStreamingKismet.ShouldBeVisible", ViewLocation); }
};

