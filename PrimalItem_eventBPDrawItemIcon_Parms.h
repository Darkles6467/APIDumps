#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPDrawItemIcon_Parms
{
	char __padding[0x30L];
	UCanvas * ItemCanvasField() { return GetNativePointerField<UCanvas *>(this, "PrimalItem_eventBPDrawItemIcon_Parms.ItemCanvas"); }
	FVector2D& ItemCanvasSizeField() { return *GetNativePointerField<FVector2D*>(this, "PrimalItem_eventBPDrawItemIcon_Parms.ItemCanvasSize"); }
	FVector2D& ItemCanvasScaleField() { return *GetNativePointerField<FVector2D*>(this, "PrimalItem_eventBPDrawItemIcon_Parms.ItemCanvasScale"); }
	bool& bItemEnabledField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPDrawItemIcon_Parms.bItemEnabled"); }
	FLinearColor& TheTintColorField() { return *GetNativePointerField<FLinearColor*>(this, "PrimalItem_eventBPDrawItemIcon_Parms.TheTintColor"); }
};

