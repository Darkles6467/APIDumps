#pragma once

#include "BaseDeclarations.h"
struct FBatchTracingHelper
{
	char __padding[0x88L];
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FBatchTracingHelper.World"); }
	ECollisionChannel& ChannelField() { return *GetNativePointerField<ECollisionChannel*>(this, "FBatchTracingHelper.Channel"); }
	const FVector& ExtentField() { return *GetNativePointerField<const FVector*>(this, "FBatchTracingHelper.Extent"); }
};

