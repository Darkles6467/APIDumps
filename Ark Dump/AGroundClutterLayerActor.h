#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AGroundClutterLayerActor : AActor
{
	char __padding[0x8L];
	TSubobjectPtr<UGroundClutterComponent>& ClutterComponentField() { return *GetNativePointerField<TSubobjectPtr<UGroundClutterComponent>*>(this, "AGroundClutterLayerActor.ClutterComponent"); }

	// Functions

};

