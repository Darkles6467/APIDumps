#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UProgressBar : UWidget
{
	char __padding[0x1d0L];
	FProgressBarStyle& WidgetStyleField() { return *GetNativePointerField<FProgressBarStyle*>(this, "UProgressBar.WidgetStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UProgressBar.Style_DEPRECATED"); }
	USlateBrushAsset * BackgroundImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UProgressBar.BackgroundImage_DEPRECATED"); }
	USlateBrushAsset * FillImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UProgressBar.FillImage_DEPRECATED"); }
	USlateBrushAsset * MarqueeImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UProgressBar.MarqueeImage_DEPRECATED"); }
	TEnumAsByte<enum EProgressBarFillType::Type>& BarFillTypeField() { return *GetNativePointerField<TEnumAsByte<enum EProgressBarFillType::Type>*>(this, "UProgressBar.BarFillType"); }
	bool& bIsMarqueeField() { return *GetNativePointerField<bool*>(this, "UProgressBar.bIsMarquee"); }
	bool& bInterpolatePercentField() { return *GetNativePointerField<bool*>(this, "UProgressBar.bInterpolatePercent"); }
	float& InterpolatePercentSpeedField() { return *GetNativePointerField<float*>(this, "UProgressBar.InterpolatePercentSpeed"); }
	float& PercentField() { return *GetNativePointerField<float*>(this, "UProgressBar.Percent"); }
	FLinearColor& FillColorAndOpacityField() { return *GetNativePointerField<FLinearColor*>(this, "UProgressBar.FillColorAndOpacity"); }
	int& CurrentInterpolationKeyField() { return *GetNativePointerField<int*>(this, "UProgressBar.CurrentInterpolationKey"); }
	TSharedPtr<SProgressBar,0>& MyProgressBarField() { return *GetNativePointerField<TSharedPtr<SProgressBar,0>*>(this, "UProgressBar.MyProgressBar"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "UProgressBar.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UProgressBar.ReleaseSlateResources", bReleaseChildren); }
	void SetFillColorAndOpacity(const FLinearColor * LinCol) { NativeCall<void, const FLinearColor *>(this, "UProgressBar.SetFillColorAndOpacity", LinCol); }
	void SetIsMarquee(bool InbIsMarquee) { NativeCall<void, bool>(this, "UProgressBar.SetIsMarquee", InbIsMarquee); }
	void SetPercent(float InPercent, int InterpKey) { NativeCall<void, float, int>(this, "UProgressBar.SetPercent", InPercent, InterpKey); }
	void SetPercentInterpolationKey(int InterpKey) { NativeCall<void, int>(this, "UProgressBar.SetPercentInterpolationKey", InterpKey); }
	void SynchronizeProperties() { NativeCall<void>(this, "UProgressBar.SynchronizeProperties"); }
};

