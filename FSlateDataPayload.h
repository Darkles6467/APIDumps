#pragma once

#include "BaseDeclarations.h"
#include "ICustomSlateElement.h"

struct FSlateDataPayload
{
	char __padding[0xd0L];
	FLinearColor& TintField() { return *GetNativePointerField<FLinearColor*>(this, "FSlateDataPayload.Tint"); }
	FVector2D& StartPtField() { return *GetNativePointerField<FVector2D*>(this, "FSlateDataPayload.StartPt"); }
	FVector2D& StartDirField() { return *GetNativePointerField<FVector2D*>(this, "FSlateDataPayload.StartDir"); }
	FVector2D& EndPtField() { return *GetNativePointerField<FVector2D*>(this, "FSlateDataPayload.EndPt"); }
	FVector2D& EndDirField() { return *GetNativePointerField<FVector2D*>(this, "FSlateDataPayload.EndDir"); }
	FVector2D& RotationPointField() { return *GetNativePointerField<FVector2D*>(this, "FSlateDataPayload.RotationPoint"); }
	float& AngleField() { return *GetNativePointerField<float*>(this, "FSlateDataPayload.Angle"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "FSlateDataPayload.Thickness"); }
	FSlateFontInfo& FontInfoField() { return *GetNativePointerField<FSlateFontInfo*>(this, "FSlateDataPayload.FontInfo"); }
	FString& TextField() { return *GetNativePointerField<FString*>(this, "FSlateDataPayload.Text"); }
	TArray<FSlateGradientStop>& GradientStopsField() { return *GetNativePointerField<TArray<FSlateGradientStop>*>(this, "FSlateDataPayload.GradientStops"); }
	EOrientation& GradientTypeField() { return *GetNativePointerField<EOrientation*>(this, "FSlateDataPayload.GradientType"); }
	TArray<FVector2D>& PointsField() { return *GetNativePointerField<TArray<FVector2D>*>(this, "FSlateDataPayload.Points"); }
	bool& bGammaCorrectField() { return *GetNativePointerField<bool*>(this, "FSlateDataPayload.bGammaCorrect"); }
	bool& bAllowBlendingField() { return *GetNativePointerField<bool*>(this, "FSlateDataPayload.bAllowBlending"); }
	ESlateLineJoinType::Type& SegmentJoinTypeField() { return *GetNativePointerField<ESlateLineJoinType::Type*>(this, "FSlateDataPayload.SegmentJoinType"); }
	bool& bAntialiasField() { return *GetNativePointerField<bool*>(this, "FSlateDataPayload.bAntialias"); }

	// Functions

	void SetCustomDrawerPayloadProperties(const TSharedPtr<ICustomSlateElement,1> * InCustomDrawer) { NativeCall<void, const TSharedPtr<ICustomSlateElement,1> *>(this, "FSlateDataPayload.SetCustomDrawerPayloadProperties", InCustomDrawer); }
	void SetViewportPayloadProperties(const TSharedPtr<ISlateViewport const ,0> * InViewport, const FLinearColor * InTint, bool bInGammaCorrect, bool bInAllowBlending) { NativeCall<void, const TSharedPtr<ISlateViewport const ,0> *, const FLinearColor *, bool, bool>(this, "FSlateDataPayload.SetViewportPayloadProperties", InViewport, InTint, bInGammaCorrect, bInAllowBlending); }
};

