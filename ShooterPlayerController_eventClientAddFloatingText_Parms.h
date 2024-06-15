#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientAddFloatingText_Parms
{
	char __padding[0x48L];
	FVector_NetQuantize& AtLocationField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.AtLocation"); }
	FString& FloatingTextStringField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.FloatingTextString"); }
	FColor& FloatingTextColorField() { return *GetNativePointerField<FColor*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.FloatingTextColor"); }
	float& ScaleXField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.ScaleX"); }
	float& ScaleYField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.ScaleY"); }
	float& TextLifeSpanField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.TextLifeSpan"); }
	FVector& TextVelocityField() { return *GetNativePointerField<FVector*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.TextVelocity"); }
	float& MinScaleField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.MinScale"); }
	float& FadeInTimeField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.FadeInTime"); }
	float& FadeOutTimeField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientAddFloatingText_Parms.FadeOutTime"); }
};

