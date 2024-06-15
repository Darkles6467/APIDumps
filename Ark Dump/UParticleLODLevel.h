#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleLODLevel : UObject
{
	char __padding[0x90L];
	int& LevelField() { return *GetNativePointerField<int*>(this, "UParticleLODLevel.Level"); }
	int& PeakActiveParticlesField() { return *GetNativePointerField<int*>(this, "UParticleLODLevel.PeakActiveParticles"); }

	// Functions

	int CalculateMaxActiveParticleCount() { return NativeCall<int>(this, "UParticleLODLevel.CalculateMaxActiveParticleCount"); }
	void CompileModules(FParticleEmitterBuildInfo * EmitterBuildInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleLODLevel.CompileModules", EmitterBuildInfo); }
	bool GenerateFromLODLevel(UParticleLODLevel * SourceLODLevel, float Percentage, bool bGenerateModuleData) { return NativeCall<bool, UParticleLODLevel *, float, bool>(this, "UParticleLODLevel.GenerateFromLODLevel", SourceLODLevel, Percentage, bGenerateModuleData); }
	void PostLoad() { NativeCall<void>(this, "UParticleLODLevel.PostLoad"); }
	void SetLevelIndex(int InLevelIndex) { NativeCall<void, int>(this, "UParticleLODLevel.SetLevelIndex", InLevelIndex); }
	void UpdateModuleLists() { NativeCall<void>(this, "UParticleLODLevel.UpdateModuleLists"); }
};

