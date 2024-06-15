#pragma once

#include "BaseDeclarations.h"
#include "UToolTipWidget.h"

struct UTooltipSmartLayoutWidget : UToolTipWidget
{

	// Functions

	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UTooltipSmartLayoutWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void RefreshSlotLayout() { NativeCall<void>(this, "UTooltipSmartLayoutWidget.RefreshSlotLayout"); }
};

