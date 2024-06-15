#pragma once

#include "BaseDeclarations.h"
#include "ISlateRun.h"
#include "IRun.h"

struct FSlateHyperlinkRun : ISlateRun
{
	char __padding[0x438L];
	FRunInfo& RunInfoField() { return *GetNativePointerField<FRunInfo*>(this, "FSlateHyperlinkRun.RunInfo"); }
	TSharedRef<FString const ,0>& TextField() { return *GetNativePointerField<TSharedRef<FString const ,0>*>(this, "FSlateHyperlinkRun.Text"); }
	FTextRange& RangeField() { return *GetNativePointerField<FTextRange*>(this, "FSlateHyperlinkRun.Range"); }
	FHyperlinkStyle& StyleField() { return *GetNativePointerField<FHyperlinkStyle*>(this, "FSlateHyperlinkRun.Style"); }
	TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,0>& ViewModelField() { return *GetNativePointerField<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,0>*>(this, "FSlateHyperlinkRun.ViewModel"); }
};

