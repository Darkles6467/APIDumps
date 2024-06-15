#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UNavArea.h"

struct UNavArea : UObject
{
	char __padding[0x18L];
	float& DefaultCostField() { return *GetNativePointerField<float*>(this, "UNavArea.DefaultCost"); }
	float& FixedAreaEnteringCostField() { return *GetNativePointerField<float*>(this, "UNavArea.FixedAreaEnteringCost"); }
	FColor& DrawColorField() { return *GetNativePointerField<FColor*>(this, "UNavArea.DrawColor"); }
	unsigned __int16& AreaFlagsField() { return *GetNativePointerField<unsigned __int16*>(this, "UNavArea.AreaFlags"); }

	// Functions

	void CopyFrom(TSubclassOf<UNavArea> AreaClass) { NativeCall<void, TSubclassOf<UNavArea>>(this, "UNavArea.CopyFrom", AreaClass); }
	void FinishDestroy() { NativeCall<void>(this, "UNavArea.FinishDestroy"); }
	void PostInitProperties() { NativeCall<void>(this, "UNavArea.PostInitProperties"); }
};

