#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTickingHelperComponent : UActorComponent
{
	char __padding[0x40L];
	FTimeRange& ThrottledTickTimeRangeField() { return *GetNativePointerField<FTimeRange*>(this, "UTickingHelperComponent.ThrottledTickTimeRange"); }
	TEnumAsByte<enum ETickingGroup>& InitWithTickGroupField() { return *GetNativePointerField<TEnumAsByte<enum ETickingGroup>*>(this, "UTickingHelperComponent.InitWithTickGroup"); }
	bool& bUsePerFrameTickEventsField() { return *GetNativePointerField<bool*>(this, "UTickingHelperComponent.bUsePerFrameTickEvents"); }
	bool& bUseThrottledTickEventsField() { return *GetNativePointerField<bool*>(this, "UTickingHelperComponent.bUseThrottledTickEvents"); }
	float& CurrentThrottledTickIntervalField() { return *GetNativePointerField<float*>(this, "UTickingHelperComponent.CurrentThrottledTickInterval"); }
	long double& LastThrottledTickTimeField() { return *GetNativePointerField<long double*>(this, "UTickingHelperComponent.LastThrottledTickTime"); }

	// Functions

	void InitializeComponent() { NativeCall<void>(this, "UTickingHelperComponent.InitializeComponent"); }
	void SetComponentTickGroup(ETickingGroup NewTickGroup) { NativeCall<void, ETickingGroup>(this, "UTickingHelperComponent.SetComponentTickGroup", NewTickGroup); }
	void OnThrottledTick(float DeltaTime) { NativeCall<void, float>(this, "UTickingHelperComponent.OnThrottledTick", DeltaTime); }
};

