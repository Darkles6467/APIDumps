#pragma once

#include "BaseDeclarations.h"
struct Character_eventBPOverrideCharacterParticle_Parms
{
	char __padding[0x10L];
	UParticleSystem * ParticleInField() { return GetNativePointerField<UParticleSystem *>(this, "Character_eventBPOverrideCharacterParticle_Parms.ParticleIn"); }
	UParticleSystem * ReturnValueField() { return GetNativePointerField<UParticleSystem *>(this, "Character_eventBPOverrideCharacterParticle_Parms.ReturnValue"); }
};

