#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULayer : UObject
{
	char __padding[0x20L];
	FName& LayerNameField() { return *GetNativePointerField<FName*>(this, "ULayer.LayerName"); }
	TArray<FLayerActorStats>& ActorStatsField() { return *GetNativePointerField<TArray<FLayerActorStats>*>(this, "ULayer.ActorStats"); }

	// Functions

};

