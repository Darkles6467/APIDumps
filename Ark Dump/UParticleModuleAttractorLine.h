#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleAttractorBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase
{
	char __padding[0x88L];
	FVector& EndPoint0Field() { return *GetNativePointerField<FVector*>(this, "UParticleModuleAttractorLine.EndPoint0"); }
	FVector& EndPoint1Field() { return *GetNativePointerField<FVector*>(this, "UParticleModuleAttractorLine.EndPoint1"); }

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleAttractorLine.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleAttractorLine.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleAttractorLine.Serialize", Ar); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleAttractorLine.Update", Owner, Offset, DeltaTime); }
};

