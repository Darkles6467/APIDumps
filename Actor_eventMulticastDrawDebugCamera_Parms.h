#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugCamera_Parms
{
	char __padding[0x20L];
	const ACameraActor * CameraActorField() { return GetNativePointerField<const ACameraActor *>(this, "Actor_eventMulticastDrawDebugCamera_Parms.CameraActor"); }
	FLinearColor& CameraColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugCamera_Parms.CameraColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCamera_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugCamera_Parms.enableInShipping"); }
};

