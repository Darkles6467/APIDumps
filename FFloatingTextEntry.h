#pragma once

#include "BaseDeclarations.h"
struct FFloatingTextEntry
{
	char __padding[0x50L];
	FVector& AtLocationField() { return *GetNativePointerField<FVector*>(this, "FFloatingTextEntry.AtLocation"); }
	FString& FloatingTextStringField() { return *GetNativePointerField<FString*>(this, "FFloatingTextEntry.FloatingTextString"); }
	FColor& FloatingTextColorField() { return *GetNativePointerField<FColor*>(this, "FFloatingTextEntry.FloatingTextColor"); }
	float& ScaleXField() { return *GetNativePointerField<float*>(this, "FFloatingTextEntry.ScaleX"); }
	float& ScaleYField() { return *GetNativePointerField<float*>(this, "FFloatingTextEntry.ScaleY"); }
	float& LifeSpanField() { return *GetNativePointerField<float*>(this, "FFloatingTextEntry.LifeSpan"); }
	FVector& TextVelocityField() { return *GetNativePointerField<FVector*>(this, "FFloatingTextEntry.TextVelocity"); }
	float& TextMinScaleField() { return *GetNativePointerField<float*>(this, "FFloatingTextEntry.TextMinScale"); }
	float& FadeOutTimeField() { return *GetNativePointerField<float*>(this, "FFloatingTextEntry.FadeOutTime"); }
	float& FadeInTimeField() { return *GetNativePointerField<float*>(this, "FFloatingTextEntry.FadeInTime"); }
	float& OriginalLifeSpanField() { return *GetNativePointerField<float*>(this, "FFloatingTextEntry.OriginalLifeSpan"); }
	int& FromTeamIDField() { return *GetNativePointerField<int*>(this, "FFloatingTextEntry.FromTeamID"); }

	// Functions

};

