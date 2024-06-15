#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "FParticleCurvePair.h"

struct UParticleModule : UObject
{
	char __padding[0x8L];
	char& LODValidityField() { return *GetNativePointerField<char*>(this, "UParticleModule.LODValidity"); }

	// Functions

	bool WillGeneratedModuleBeIdentical(UParticleLODLevel * SourceLODLevel, UParticleLODLevel * DestLODLevel, float Percentage) { return NativeCall<bool, UParticleLODLevel *, UParticleLODLevel *, float>(this, "UParticleModule.WillGeneratedModuleBeIdentical", SourceLODLevel, DestLODLevel, Percentage); }
	void AutoPopulateInstanceProperties(UParticleSystemComponent * PSysComp) { NativeCall<void, UParticleSystemComponent *>(this, "UParticleModule.AutoPopulateInstanceProperties", PSysComp); }
	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModule.CompileModule", EmitterInfo); }
	bool ConvertFloatDistribution(UDistributionFloat * FloatDist, UDistributionFloat * SourceFloatDist, float Percentage) { return NativeCall<bool, UDistributionFloat *, UDistributionFloat *, float>(this, "UParticleModule.ConvertFloatDistribution", FloatDist, SourceFloatDist, Percentage); }
	bool ConvertVectorDistribution(UDistributionVector * VectorDist, UDistributionVector * SourceVectorDist, float Percentage) { return NativeCall<bool, UDistributionVector *, UDistributionVector *, float>(this, "UParticleModule.ConvertVectorDistribution", VectorDist, SourceVectorDist, Percentage); }
	void GetCurveObjects(TArray<FParticleCurvePair> * OutCurves) { NativeCall<void, TArray<FParticleCurvePair> *>(this, "UParticleModule.GetCurveObjects", OutCurves); }
	void GetParticleParametersUtilized(TArray<FString> * ParticleParameterList) { NativeCall<void, TArray<FString> *>(this, "UParticleModule.GetParticleParametersUtilized", ParticleParameterList); }
	bool IsIdentical_Deprecated(const UParticleModule * InModule) { return NativeCall<bool, const UParticleModule *>(this, "UParticleModule.IsIdentical_Deprecated", InModule); }
	bool IsUsedInGPUEmitter() { return NativeCall<bool>(this, "UParticleModule.IsUsedInGPUEmitter"); }
	bool IsUsedInLODLevel(int SourceLODIndex) { return NativeCall<bool, int>(this, "UParticleModule.IsUsedInLODLevel", SourceLODIndex); }
	unsigned int PrepRandomSeedInstancePayload(FParticleEmitterInstance * Owner, FParticleRandomSeedInstancePayload * InRandSeedPayload, const FParticleRandomSeedInfo * InRandSeedInfo) { return NativeCall<unsigned int, FParticleEmitterInstance *, FParticleRandomSeedInstancePayload *, const FParticleRandomSeedInfo *>(this, "UParticleModule.PrepRandomSeedInstancePayload", Owner, InRandSeedPayload, InRandSeedInfo); }
	bool PropertyIsRelevantForIsIdentical_Deprecated(const FName * InPropName) { return NativeCall<bool, const FName *>(this, "UParticleModule.PropertyIsRelevantForIsIdentical_Deprecated", InPropName); }
	bool SetRandomSeedEntry(int InIndex, int InRandomSeed) { return NativeCall<bool, int, int>(this, "UParticleModule.SetRandomSeedEntry", InIndex, InRandomSeed); }
};

