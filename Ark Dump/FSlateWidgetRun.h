#pragma once

#include "BaseDeclarations.h"
#include "ISlateRun.h"
#include "IRun.h"

struct FSlateWidgetRun : ISlateRun
{
	char __padding[0xd0L];
	TWeakPtr<FTextLayout,0>& TextLayoutField() { return *GetNativePointerField<TWeakPtr<FTextLayout,0>*>(this, "FSlateWidgetRun.TextLayout"); }
	FRunInfo& RunInfoField() { return *GetNativePointerField<FRunInfo*>(this, "FSlateWidgetRun.RunInfo"); }
	TSharedRef<FString const ,0>& TextField() { return *GetNativePointerField<TSharedRef<FString const ,0>*>(this, "FSlateWidgetRun.Text"); }
	FTextRange& RangeField() { return *GetNativePointerField<FTextRange*>(this, "FSlateWidgetRun.Range"); }
	FSlateWidgetRun::FWidgetRunInfo& InfoField() { return *GetNativePointerField<FSlateWidgetRun::FWidgetRunInfo*>(this, "FSlateWidgetRun.Info"); }
	FVector2D& WidgetSizeField() { return *GetNativePointerField<FVector2D*>(this, "FSlateWidgetRun.WidgetSize"); }
};

