#pragma once

#include "BaseDeclarations.h"
#include "UCustomCanvasWidget.h"
#include "UButton.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UProgressBarWidget : UCustomCanvasWidget
{
	char __padding[0xf8L];
	float& CurrentPercentField() { return *GetNativePointerField<float*>(this, "UProgressBarWidget.CurrentPercent"); }
	FLinearColor& BarForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UProgressBarWidget.BarForegroundColor"); }
	float& PercentInterpolationSpeedField() { return *GetNativePointerField<float*>(this, "UProgressBarWidget.PercentInterpolationSpeed"); }
	FLinearColor& BarFlashColorField() { return *GetNativePointerField<FLinearColor*>(this, "UProgressBarWidget.BarFlashColor"); }
	FLinearColor& BarFlashColorBackgroundField() { return *GetNativePointerField<FLinearColor*>(this, "UProgressBarWidget.BarFlashColorBackground"); }
	float& BarFlashSpeedField() { return *GetNativePointerField<float*>(this, "UProgressBarWidget.BarFlashSpeed"); }
	float& BarFlashThresholdField() { return *GetNativePointerField<float*>(this, "UProgressBarWidget.BarFlashThreshold"); }
	float& BarFlashDurationField() { return *GetNativePointerField<float*>(this, "UProgressBarWidget.BarFlashDuration"); }
	FString& DisplayStringField() { return *GetNativePointerField<FString*>(this, "UProgressBarWidget.DisplayString"); }
	FLinearColor& DisplayStringColorField() { return *GetNativePointerField<FLinearColor*>(this, "UProgressBarWidget.DisplayStringColor"); }
	UFont * DisplayStringFontField() { return GetNativePointerField<UFont *>(this, "UProgressBarWidget.DisplayStringFont"); }
	FVector2D& DisplayStringOffsetField() { return *GetNativePointerField<FVector2D*>(this, "UProgressBarWidget.DisplayStringOffset"); }
	FVector2D& DisplayStringScaleField() { return *GetNativePointerField<FVector2D*>(this, "UProgressBarWidget.DisplayStringScale"); }
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& LinkedCharacterStatusValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "UProgressBarWidget.LinkedCharacterStatusValueType"); }
	bool& bShowExtendedInfoField() { return *GetNativePointerField<bool*>(this, "UProgressBarWidget.bShowExtendedInfo"); }
	FLinearColor& BarBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UProgressBarWidget.BarBackgroundColor"); }
	__int64& InterpolationKeyField() { return *GetNativePointerField<__int64*>(this, "UProgressBarWidget.InterpolationKey"); }
	__int64& PercentInterpolationKeyCurrentField() { return *GetNativePointerField<__int64*>(this, "UProgressBarWidget.PercentInterpolationKeyCurrent"); }
	float& TargetPercentField() { return *GetNativePointerField<float*>(this, "UProgressBarWidget.TargetPercent"); }
	float& BarFlashTimerField() { return *GetNativePointerField<float*>(this, "UProgressBarWidget.BarFlashTimer"); }
	long double& BarFlashingEndTimeField() { return *GetNativePointerField<long double*>(this, "UProgressBarWidget.BarFlashingEndTime"); }
	bool& BarFlashingField() { return *GetNativePointerField<bool*>(this, "UProgressBarWidget.BarFlashing"); }
	FString& CachedDisplayStringField() { return *GetNativePointerField<FString*>(this, "UProgressBarWidget.CachedDisplayString"); }
	long double& LastSetInterpolationKeyTimeField() { return *GetNativePointerField<long double*>(this, "UProgressBarWidget.LastSetInterpolationKeyTime"); }
	float& TheCurValueField() { return *GetNativePointerField<float*>(this, "UProgressBarWidget.TheCurValue"); }

	// Functions

	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UProgressBarWidget.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
	void SetPercent(float newPercent, __int64 interpKey, float CurValue, float MaxValue) { NativeCall<void, float, __int64, float, float>(this, "UProgressBarWidget.SetPercent", newPercent, interpKey, CurValue, MaxValue); }
};

