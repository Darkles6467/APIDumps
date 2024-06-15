#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleEventBase.h"

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase
{
	char __padding[0x10L];
	TEnumAsByte<enum EParticleEventType>& EventGeneratorTypeField() { return *GetNativePointerField<TEnumAsByte<enum EParticleEventType>*>(this, "UParticleModuleEventReceiverBase.EventGeneratorType"); }
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleEventReceiverBase.EventName"); }

	// Functions

	bool WillProcessParticleEvent(EParticleEventType InEventType) { return NativeCall<bool, EParticleEventType>(this, "UParticleModuleEventReceiverBase.WillProcessParticleEvent", InEventType); }
};

