#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalBotRidingComponent : UActorComponent
{
	char __padding[0x10L];
	TWeakObjectPtr<APrimalBotCharacter>& RiderField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter>*>(this, "UPrimalBotRidingComponent.Rider"); }
	TWeakObjectPtr<APrimalBotCharacter>& ClaimerField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter>*>(this, "UPrimalBotRidingComponent.Claimer"); }

	// Functions

};

