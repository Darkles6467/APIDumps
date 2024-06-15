#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientInsertActorItem_Parms
{
	char __padding[0x1c0L];
	FItemNetInfo& itemInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "ShooterPlayerController_eventClientInsertActorItem_Parms.itemInfo"); }
	FItemNetID& InsertAfterItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientInsertActorItem_Parms.InsertAfterItemID"); }
};

