#pragma once

#include "BaseDeclarations.h"
#include "SButton.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SEyeDropperButton : SButton
{
	char __padding[0x38L];
	TAttribute<float>& DisplayGammaField() { return *GetNativePointerField<TAttribute<float>*>(this, "SEyeDropperButton.DisplayGamma"); }
	bool& bWasClickedField() { return *GetNativePointerField<bool*>(this, "SEyeDropperButton.bWasClicked"); }
	bool& bWasClickActivatedField() { return *GetNativePointerField<bool*>(this, "SEyeDropperButton.bWasClickActivated"); }
	bool& bWasLeftField() { return *GetNativePointerField<bool*>(this, "SEyeDropperButton.bWasLeft"); }
	bool& bWasReEnteredField() { return *GetNativePointerField<bool*>(this, "SEyeDropperButton.bWasReEntered"); }
};

