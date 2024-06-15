#pragma once

#include "BaseDeclarations.h"
#include "FMultiBoxBuilder.h"

struct FToolBarBuilder : FMultiBoxBuilder
{
	char __padding[0x18L];
	FName& CurrentSectionExtensionHookField() { return *GetNativePointerField<FName*>(this, "FToolBarBuilder.CurrentSectionExtensionHook"); }
	TOptional<EVisibility>& LabelVisibilityField() { return *GetNativePointerField<TOptional<EVisibility>*>(this, "FToolBarBuilder.LabelVisibility"); }
	bool& bSectionNeedsToBeAppliedField() { return *GetNativePointerField<bool*>(this, "FToolBarBuilder.bSectionNeedsToBeApplied"); }
	bool& bIsFocusableField() { return *GetNativePointerField<bool*>(this, "FToolBarBuilder.bIsFocusable"); }
	bool& bForceSmallIconsField() { return *GetNativePointerField<bool*>(this, "FToolBarBuilder.bForceSmallIcons"); }
};

