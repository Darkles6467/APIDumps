#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ALevelStreamingVolume : AVolume
{
	char __padding[0x18L];
	TArray<FName>& StreamingLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "ALevelStreamingVolume.StreamingLevelNames"); }
	TEnumAsByte<enum EStreamingVolumeUsage>& StreamingUsageField() { return *GetNativePointerField<TEnumAsByte<enum EStreamingVolumeUsage>*>(this, "ALevelStreamingVolume.StreamingUsage"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "ALevelStreamingVolume.PostLoad"); }
};

