#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SWindow.h"

struct SPopupLayer : SPanel
{
	char __padding[0x28L];
	TWeakPtr<SWindow,0>& OwnerWindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SPopupLayer.OwnerWindow"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SPopupLayer.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SPopupLayer.FArguments"); }
	void Construct(const SPopupLayer::FArguments * InArgs, const TSharedRef<SWindow,0> * InWindow) { NativeCall<void, const SPopupLayer::FArguments *, const TSharedRef<SWindow,0> *>(this, "SPopupLayer.Construct", InArgs, InWindow); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SPopupLayer.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
};

