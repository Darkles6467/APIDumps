#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FLifetimeProperty.h"

struct ALight : AActor
{
	char __padding[0x10L];

	// Functions

	void Destroyed() { NativeCall<void>(this, "ALight.Destroyed"); }
	float GetBrightness() { return NativeCall<float>(this, "ALight.GetBrightness"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ALight.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FLinearColor * GetLightColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "ALight.GetLightColor", result); }
	bool IsEnabled() { return NativeCall<bool>(this, "ALight.IsEnabled"); }
	void SetAffectTranslucentLighting(bool bNewValue) { NativeCall<void, bool>(this, "ALight.SetAffectTranslucentLighting", bNewValue); }
	void SetBrightness(float NewBrightness) { NativeCall<void, float>(this, "ALight.SetBrightness", NewBrightness); }
	void SetCastShadows(bool bNewValue) { NativeCall<void, bool>(this, "ALight.SetCastShadows", bNewValue); }
	void SetEnabled(bool bSetEnabled) { NativeCall<void, bool>(this, "ALight.SetEnabled", bSetEnabled); }
	void SetLightColor(FLinearColor NewLightColor) { NativeCall<void, FLinearColor>(this, "ALight.SetLightColor", NewLightColor); }
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) { NativeCall<void, float>(this, "ALight.SetLightFunctionFadeDistance", NewLightFunctionFadeDistance); }
	void SetLightFunctionMaterial(UMaterialInterface * NewLightFunctionMaterial) { NativeCall<void, UMaterialInterface *>(this, "ALight.SetLightFunctionMaterial", NewLightFunctionMaterial); }
	void SetLightFunctionScale(FVector NewLightFunctionScale) { NativeCall<void, FVector>(this, "ALight.SetLightFunctionScale", NewLightFunctionScale); }
	void ToggleEnabled() { NativeCall<void>(this, "ALight.ToggleEnabled"); }
};

