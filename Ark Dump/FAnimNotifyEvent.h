#pragma once

#include "BaseDeclarations.h"
struct FAnimNotifyEvent
{
	char __padding[0x30L];
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "FAnimNotifyEvent.DisplayTime"); }
	float& TriggerTimeOffsetField() { return *GetNativePointerField<float*>(this, "FAnimNotifyEvent.TriggerTimeOffset"); }
	float& EndTriggerTimeOffsetField() { return *GetNativePointerField<float*>(this, "FAnimNotifyEvent.EndTriggerTimeOffset"); }
	float& TriggerWeightThresholdField() { return *GetNativePointerField<float*>(this, "FAnimNotifyEvent.TriggerWeightThreshold"); }
	FName& NotifyNameField() { return *GetNativePointerField<FName*>(this, "FAnimNotifyEvent.NotifyName"); }
	bool& bIgnoreOnDediServerField() { return *GetNativePointerField<bool*>(this, "FAnimNotifyEvent.bIgnoreOnDediServer"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FAnimNotifyEvent.Duration"); }

	// Functions

};

