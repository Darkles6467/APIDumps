#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AAtmosphericFog : AInfo
{
	char __padding[0x8L];
	TSubobjectPtr<UAtmosphericFogComponent>& AtmosphericFogComponentField() { return *GetNativePointerField<TSubobjectPtr<UAtmosphericFogComponent>*>(this, "AAtmosphericFog.AtmosphericFogComponent"); }

	// Functions

};

