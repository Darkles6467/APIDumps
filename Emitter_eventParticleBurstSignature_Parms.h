#pragma once

#include "BaseDeclarations.h"
struct Emitter_eventParticleBurstSignature_Parms
{
	char __padding[0x10L];
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "Emitter_eventParticleBurstSignature_Parms.EventName"); }
	float& EmitterTimeField() { return *GetNativePointerField<float*>(this, "Emitter_eventParticleBurstSignature_Parms.EmitterTime"); }
	int& ParticleCountField() { return *GetNativePointerField<int*>(this, "Emitter_eventParticleBurstSignature_Parms.ParticleCount"); }
};

