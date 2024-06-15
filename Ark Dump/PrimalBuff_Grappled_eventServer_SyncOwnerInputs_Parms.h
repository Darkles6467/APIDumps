#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventServer_SyncOwnerInputs_Parms
{
	char __padding[0x8L];
	FVector2D& NewInputsField() { return *GetNativePointerField<FVector2D*>(this, "PrimalBuff_Grappled_eventServer_SyncOwnerInputs_Parms.NewInputs"); }
};

