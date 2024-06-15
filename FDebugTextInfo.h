#pragma once

#include "BaseDeclarations.h"
struct FDebugTextInfo
{
	char __padding[0x60L];
	FVector& SrcActorOffsetField() { return *GetNativePointerField<FVector*>(this, "FDebugTextInfo.SrcActorOffset"); }
	FVector& SrcActorDesiredOffsetField() { return *GetNativePointerField<FVector*>(this, "FDebugTextInfo.SrcActorDesiredOffset"); }
	FString& DebugTextField() { return *GetNativePointerField<FString*>(this, "FDebugTextInfo.DebugText"); }
	float& TimeRemainingField() { return *GetNativePointerField<float*>(this, "FDebugTextInfo.TimeRemaining"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FDebugTextInfo.Duration"); }
	FColor& TextColorField() { return *GetNativePointerField<FColor*>(this, "FDebugTextInfo.TextColor"); }
	FVector& OrigActorLocationField() { return *GetNativePointerField<FVector*>(this, "FDebugTextInfo.OrigActorLocation"); }
	UFont * FontField() { return GetNativePointerField<UFont *>(this, "FDebugTextInfo.Font"); }
	float& FontScaleField() { return *GetNativePointerField<float*>(this, "FDebugTextInfo.FontScale"); }

	// Functions

	FDebugTextInfo * operator=(const FDebugTextInfo * __that) { return NativeCall<FDebugTextInfo *, const FDebugTextInfo *>(this, "FDebugTextInfo.operator=", __that); }
};

