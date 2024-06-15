#pragma once

#include "BaseDeclarations.h"
struct ToolTipWidget_eventBPInitToolTip_Parms
{
	char __padding[0x20L];
	AShooterPlayerController * HUDOwnerField() { return GetNativePointerField<AShooterPlayerController *>(this, "ToolTipWidget_eventBPInitToolTip_Parms.HUDOwner"); }
	FString& ToolTipStringField() { return *GetNativePointerField<FString*>(this, "ToolTipWidget_eventBPInitToolTip_Parms.ToolTipString"); }
};

