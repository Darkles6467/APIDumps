#pragma once

#include "BaseDeclarations.h"
struct HUD_eventAddDebugText_Parms
{
	char __padding[0x50L];
	FString& DebugTextField() { return *GetNativePointerField<FString*>(this, "HUD_eventAddDebugText_Parms.DebugText"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "HUD_eventAddDebugText_Parms.Duration"); }
	FVector& OffsetField() { return *GetNativePointerField<FVector*>(this, "HUD_eventAddDebugText_Parms.Offset"); }
	FVector& DesiredOffsetField() { return *GetNativePointerField<FVector*>(this, "HUD_eventAddDebugText_Parms.DesiredOffset"); }
	FColor& TextColorField() { return *GetNativePointerField<FColor*>(this, "HUD_eventAddDebugText_Parms.TextColor"); }
	bool& bSkipOverwriteCheckField() { return *GetNativePointerField<bool*>(this, "HUD_eventAddDebugText_Parms.bSkipOverwriteCheck"); }
	bool& bAbsoluteLocationField() { return *GetNativePointerField<bool*>(this, "HUD_eventAddDebugText_Parms.bAbsoluteLocation"); }
	bool& bKeepAttachedToActorField() { return *GetNativePointerField<bool*>(this, "HUD_eventAddDebugText_Parms.bKeepAttachedToActor"); }
	UFont * InFontField() { return GetNativePointerField<UFont *>(this, "HUD_eventAddDebugText_Parms.InFont"); }
	float& FontScaleField() { return *GetNativePointerField<float*>(this, "HUD_eventAddDebugText_Parms.FontScale"); }
};

