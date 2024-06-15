#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SNotificationItem : SCompoundWidget
{
	enum ECompletionState
	{
		CS_None = 0x0,
		CS_Pending = 0x1,
		CS_Success = 0x2,
		CS_Fail = 0x3,
	};

};

struct SNotificationExtendable : SNotificationItem
{
	char __padding[0x150L];
	TWeakPtr<SNotificationList,0>& MyListField() { return *GetNativePointerField<TWeakPtr<SNotificationList,0>*>(this, "SNotificationExtendable.MyList"); }
	TAttribute<FText>& TextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SNotificationExtendable.Text"); }
	TAttribute<float>& FadeInDurationField() { return *GetNativePointerField<TAttribute<float>*>(this, "SNotificationExtendable.FadeInDuration"); }
	TAttribute<float>& FadeOutDurationField() { return *GetNativePointerField<TAttribute<float>*>(this, "SNotificationExtendable.FadeOutDuration"); }
	TAttribute<float>& ExpireDurationField() { return *GetNativePointerField<TAttribute<float>*>(this, "SNotificationExtendable.ExpireDuration"); }
	TSharedPtr<STextBlock,0>& MyTextBlockField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "SNotificationExtendable.MyTextBlock"); }
	FCurveSequence& FadeAnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "SNotificationExtendable.FadeAnimation"); }
	FCurveHandle& FadeCurveField() { return *GetNativePointerField<FCurveHandle*>(this, "SNotificationExtendable.FadeCurve"); }
	FCurveSequence& IntroAnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "SNotificationExtendable.IntroAnimation"); }
	FCurveHandle& ScaleCurveXField() { return *GetNativePointerField<FCurveHandle*>(this, "SNotificationExtendable.ScaleCurveX"); }
	FCurveHandle& ScaleCurveYField() { return *GetNativePointerField<FCurveHandle*>(this, "SNotificationExtendable.ScaleCurveY"); }
	FCurveHandle& GlowCurveField() { return *GetNativePointerField<FCurveHandle*>(this, "SNotificationExtendable.GlowCurve"); }
	FCurveSequence& CompletionStateAnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "SNotificationExtendable.CompletionStateAnimation"); }
	FThrottleRequest& ThrottleHandleField() { return *GetNativePointerField<FThrottleRequest*>(this, "SNotificationExtendable.ThrottleHandle"); }
};

struct SNotificationItemImpl : SNotificationExtendable
{
	char __padding[0x48L];
	TAttribute<FText>& HyperlinkTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SNotificationItemImpl.HyperlinkText"); }
};

