#pragma once

#include "BaseDeclarations.h"
struct FAttractorParticlePayload
{
	char __padding[0x14L];
	int& SourceIndexField() { return *GetNativePointerField<int*>(this, "FAttractorParticlePayload.SourceIndex"); }
	unsigned int& SourcePointerField() { return *GetNativePointerField<unsigned int*>(this, "FAttractorParticlePayload.SourcePointer"); }
	FVector& SourceVelocityField() { return *GetNativePointerField<FVector*>(this, "FAttractorParticlePayload.SourceVelocity"); }
};

