#pragma once

#include "BaseDeclarations.h"
#include "UNavRelevantComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNavModifierComponent : UNavRelevantComponent
{
	char __padding[0x18L];
	FVector& ObstacleExtentField() { return *GetNativePointerField<FVector*>(this, "UNavModifierComponent.ObstacleExtent"); }

	// Functions

	void CalcBounds() { NativeCall<void>(this, "UNavModifierComponent.CalcBounds"); }
	void GetNavigationData(FNavigationRelevantData * Data) { NativeCall<void, FNavigationRelevantData *>(this, "UNavModifierComponent.GetNavigationData", Data); }
};

