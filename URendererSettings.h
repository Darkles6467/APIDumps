#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct URendererSettings : UObject
{
	char __padding[0x120L];
	float& MinScreenRadiusForLightsField() { return *GetNativePointerField<float*>(this, "URendererSettings.MinScreenRadiusForLights"); }
	float& MinScreenRadiusForEarlyZPassField() { return *GetNativePointerField<float*>(this, "URendererSettings.MinScreenRadiusForEarlyZPass"); }
	float& MinScreenRadiusForCSMdepthField() { return *GetNativePointerField<float*>(this, "URendererSettings.MinScreenRadiusForCSMdepth"); }
	float& DistanceFieldPenumbraSizeField() { return *GetNativePointerField<float*>(this, "URendererSettings.DistanceFieldPenumbraSize"); }
	float& TessellationAdaptivePixelsPerTriangleField() { return *GetNativePointerField<float*>(this, "URendererSettings.TessellationAdaptivePixelsPerTriangle"); }
	TEnumAsByte<enum ECustomDepth::Type>& CustomDepthField() { return *GetNativePointerField<TEnumAsByte<enum ECustomDepth::Type>*>(this, "URendererSettings.CustomDepth"); }
	TEnumAsByte<enum EAntiAliasingMethodUI::Type>& DefaultFeatureAntiAliasingField() { return *GetNativePointerField<TEnumAsByte<enum EAntiAliasingMethodUI::Type>*>(this, "URendererSettings.DefaultFeatureAntiAliasing"); }
	TEnumAsByte<enum EDefaultBackBufferPixelFormat::Type>& DefaultBackBufferPixelFormatField() { return *GetNativePointerField<TEnumAsByte<enum EDefaultBackBufferPixelFormat::Type>*>(this, "URendererSettings.DefaultBackBufferPixelFormat"); }
	TEnumAsByte<enum EClearSceneOptions::Type>& ClearSceneMethodField() { return *GetNativePointerField<TEnumAsByte<enum EClearSceneOptions::Type>*>(this, "URendererSettings.ClearSceneMethod"); }
	TEnumAsByte<enum ECompositingSampleCount::Type>& EditorPrimitiveMSAAField() { return *GetNativePointerField<TEnumAsByte<enum ECompositingSampleCount::Type>*>(this, "URendererSettings.EditorPrimitiveMSAA"); }
	float& WireframeCullThresholdField() { return *GetNativePointerField<float*>(this, "URendererSettings.WireframeCullThreshold"); }
	TEnumAsByte<enum EUIScalingRule::Type>& UIScaleRuleField() { return *GetNativePointerField<TEnumAsByte<enum EUIScalingRule::Type>*>(this, "URendererSettings.UIScaleRule"); }
	FRuntimeFloatCurve& UIScaleCurveField() { return *GetNativePointerField<FRuntimeFloatCurve*>(this, "URendererSettings.UIScaleCurve"); }
	FRuntimeFloatCurve& UIScaleCurveXField() { return *GetNativePointerField<FRuntimeFloatCurve*>(this, "URendererSettings.UIScaleCurveX"); }

	// Functions

	float GetDPIScaleBasedOnSize(FIntPoint Size) { return NativeCall<float, FIntPoint>(this, "URendererSettings.GetDPIScaleBasedOnSize", Size); }
};

