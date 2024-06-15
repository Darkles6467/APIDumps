#pragma once

#include "BaseDeclarations.h"
struct FNiagaraEmitterParticleData
{
	char __padding[0x90L];
	unsigned int& CurrentBufferField() { return *GetNativePointerField<unsigned int*>(this, "FNiagaraEmitterParticleData.CurrentBuffer"); }
	unsigned int& NumParticlesField() { return *GetNativePointerField<unsigned int*>(this, "FNiagaraEmitterParticleData.NumParticles"); }
	unsigned int& ParticleAllocationField() { return *GetNativePointerField<unsigned int*>(this, "FNiagaraEmitterParticleData.ParticleAllocation"); }
	FieldArray<TArray<FVector4>[2], 42> ParticleBuffersField() { return {this, "FNiagaraEmitterParticleData.ParticleBuffers"}; }
	TArray<FVector4 *>& AttributesField() { return *GetNativePointerField<TArray<FVector4 *>*>(this, "FNiagaraEmitterParticleData.Attributes"); }

	// Functions

	void Allocate(unsigned int NumExpectedParticles) { NativeCall<void, unsigned int>(this, "FNiagaraEmitterParticleData.Allocate", NumExpectedParticles); }
	FVector4 * GetAttributeDataWrite(FName Name) { return NativeCall<FVector4 *, FName>(this, "FNiagaraEmitterParticleData.GetAttributeDataWrite", Name); }
};

