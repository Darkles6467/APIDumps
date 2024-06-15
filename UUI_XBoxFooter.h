#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_XBoxFooter : UPrimalUI
{
	char __padding[0x48L];
	UTextBlock * SwitchPanelsBoxTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_XBoxFooter.SwitchPanelsBoxText"); }
	UTextBlock * ScrollBoxTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_XBoxFooter.ScrollBoxText"); }
	UTextBlock * CommitBoxTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_XBoxFooter.CommitBoxText"); }
	UTextBlock * CancelBoxTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_XBoxFooter.CancelBoxText"); }
	UTextBlock * FaceBtnTopTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_XBoxFooter.FaceBtnTopText"); }
	UTextBlock * LTBtnTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_XBoxFooter.LTBtnText"); }
	UTextBlock * RTBtnTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_XBoxFooter.RTBtnText"); }
	UTextBlock * FaceBtnLeftTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_XBoxFooter.FaceBtnLeftText"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_XBoxFooter.AddToViewport"); }
	void UpdateFooter() { NativeCall<void>(this, "UUI_XBoxFooter.UpdateFooter"); }
};

