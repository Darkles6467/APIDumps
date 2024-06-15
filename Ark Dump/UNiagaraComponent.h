#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNiagaraComponent : UPrimitiveComponent
{
	char __padding[0x30L];
	UNiagaraScript * UpdateScriptField() { return GetNativePointerField<UNiagaraScript *>(this, "UNiagaraComponent.UpdateScript"); }
	UNiagaraScript * SpawnScriptField() { return GetNativePointerField<UNiagaraScript *>(this, "UNiagaraComponent.SpawnScript"); }
	TEnumAsByte<enum ERenderModuleType>& RenderModuleTypeField() { return *GetNativePointerField<TEnumAsByte<enum ERenderModuleType>*>(this, "UNiagaraComponent.RenderModuleType"); }
	float& SpawnRateField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.SpawnRate"); }
	float& EmitterAgeField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.EmitterAge"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UNiagaraComponent.CalcBounds", result, LocalToWorld); }
	void OnRegister() { NativeCall<void>(this, "UNiagaraComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UNiagaraComponent.OnUnregister"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UNiagaraComponent.SendRenderDynamicData_Concurrent"); }
	void SetMaterial(int ElementIndex, UMaterialInterface * InMaterial) { NativeCall<void, int, UMaterialInterface *>(this, "UNiagaraComponent.SetMaterial", ElementIndex, InMaterial); }
};

