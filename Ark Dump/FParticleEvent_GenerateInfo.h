#pragma once

#include "BaseDeclarations.h"
struct FParticleEvent_GenerateInfo
{
	char __padding[0x28L];
	TEnumAsByte<enum EParticleEventType>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum EParticleEventType>*>(this, "FParticleEvent_GenerateInfo.Type"); }
	int& FrequencyField() { return *GetNativePointerField<int*>(this, "FParticleEvent_GenerateInfo.Frequency"); }
	int& ParticleFrequencyField() { return *GetNativePointerField<int*>(this, "FParticleEvent_GenerateInfo.ParticleFrequency"); }
	FName& CustomNameField() { return *GetNativePointerField<FName*>(this, "FParticleEvent_GenerateInfo.CustomName"); }

	// Functions

};

