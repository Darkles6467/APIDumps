#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalCableActor : AActor
{
	char __padding[0x8L];
	TSubobjectPtr<UPrimalCableComponent>& CableComponentField() { return *GetNativePointerField<TSubobjectPtr<UPrimalCableComponent>*>(this, "APrimalCableActor.CableComponent"); }

	// Functions

};

