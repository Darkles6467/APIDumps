#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugLineTraceHitResult_Parms
{
	char __padding[0xe8L];
	FHitResult& HitField() { return *GetNativePointerField<FHitResult*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.Hit"); }
	FVector& TraceStartField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.TraceStart"); }
	FVector& TraceEndField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.TraceEnd"); }
	FLinearColor& StartColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.StartColor"); }
	FLinearColor& HitColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.HitColor"); }
	float& LineThicknessField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.LineThickness"); }
	float& HitSizeField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.HitSize"); }
	bool& bDrawHitNormalField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.bDrawHitNormal"); }
	FLinearColor& HitNormalColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.HitNormalColor"); }
	float& HitNormalLengthField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.HitNormalLength"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugLineTraceHitResult_Parms.enableInShipping"); }
};

