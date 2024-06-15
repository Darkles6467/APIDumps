#pragma once

#include "BaseDeclarations.h"
struct FNotificationButtonInfo
{
	char __padding[0x68L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "FNotificationButtonInfo.Text"); }
	FText& ToolTipField() { return *GetNativePointerField<FText*>(this, "FNotificationButtonInfo.ToolTip"); }
	EVisibility& VisibilityOnNoneField() { return *GetNativePointerField<EVisibility*>(this, "FNotificationButtonInfo.VisibilityOnNone"); }
	EVisibility& VisibilityOnPendingField() { return *GetNativePointerField<EVisibility*>(this, "FNotificationButtonInfo.VisibilityOnPending"); }
	EVisibility& VisibilityOnSuccessField() { return *GetNativePointerField<EVisibility*>(this, "FNotificationButtonInfo.VisibilityOnSuccess"); }
	EVisibility& VisibilityOnFailField() { return *GetNativePointerField<EVisibility*>(this, "FNotificationButtonInfo.VisibilityOnFail"); }
};

