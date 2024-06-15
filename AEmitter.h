#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FLifetimeProperty.h"

struct AEmitter : AActor
{
	char __padding[0x50L];

	// Functions

	void Activate() { NativeCall<void>(this, "AEmitter.Activate"); }
	void Deactivate() { NativeCall<void>(this, "AEmitter.Deactivate"); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "AEmitter.GetDetailedInfoInternal", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AEmitter.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool IsActive() { return NativeCall<bool>(this, "AEmitter.IsActive"); }
	void OnParticleSystemFinished(UParticleSystemComponent * FinishedComponent) { NativeCall<void, UParticleSystemComponent *>(this, "AEmitter.OnParticleSystemFinished", FinishedComponent); }
	void OnRep_bCurrentlyActive() { NativeCall<void>(this, "AEmitter.OnRep_bCurrentlyActive"); }
	void PostActorCreated() { NativeCall<void>(this, "AEmitter.PostActorCreated"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AEmitter.PostInitializeComponents"); }
	void SetActorParameter(FName ParameterName, AActor * Param) { NativeCall<void, FName, AActor *>(this, "AEmitter.SetActorParameter", ParameterName, Param); }
	void SetColorParameter(FName ParameterName, FLinearColor Param) { NativeCall<void, FName, FLinearColor>(this, "AEmitter.SetColorParameter", ParameterName, Param); }
	void SetFloatParameter(FName ParameterName, float Param) { NativeCall<void, FName, float>(this, "AEmitter.SetFloatParameter", ParameterName, Param); }
	void SetMaterialParameter(FName ParameterName, UMaterialInterface * Param) { NativeCall<void, FName, UMaterialInterface *>(this, "AEmitter.SetMaterialParameter", ParameterName, Param); }
	void SetTemplate(UParticleSystem * NewTemplate) { NativeCall<void, UParticleSystem *>(this, "AEmitter.SetTemplate", NewTemplate); }
	void SetVectorParameter(FName ParameterName, FVector Param) { NativeCall<void, FName, FVector>(this, "AEmitter.SetVectorParameter", ParameterName, Param); }
	void ToggleActive() { NativeCall<void>(this, "AEmitter.ToggleActive"); }
};

