#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"

struct ATriggerBase : AActor
{
	char __padding[0x10L];
	TSubobjectPtr<UBillboardComponent>& SpriteComponentField() { return *GetNativePointerField<TSubobjectPtr<UBillboardComponent>*>(this, "ATriggerBase.SpriteComponent"); }

	// Functions

};

