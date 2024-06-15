#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventBPPostDrawSpawnMap_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "DayCycleManager_eventBPPostDrawSpawnMap_Parms.ForPC"); }
	UCanvas * ItemCanvasField() { return GetNativePointerField<UCanvas *>(this, "DayCycleManager_eventBPPostDrawSpawnMap_Parms.ItemCanvas"); }
	FVector2D& ItemCanvasSizeField() { return *GetNativePointerField<FVector2D*>(this, "DayCycleManager_eventBPPostDrawSpawnMap_Parms.ItemCanvasSize"); }
};

