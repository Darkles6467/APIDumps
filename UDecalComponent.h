#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDecalComponent : USceneComponent
{
	char __padding[0x20L];
	int& SortOrderField() { return *GetNativePointerField<int*>(this, "UDecalComponent.SortOrder"); }
	int& ExtraSpawnDataField() { return *GetNativePointerField<int*>(this, "UDecalComponent.ExtraSpawnData"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "UDecalComponent.CreationTime"); }
	FDeferredDecalProxy * SceneProxyField() { return GetNativePointerField<FDeferredDecalProxy *>(this, "UDecalComponent.SceneProxy"); }

	// Functions

	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UDecalComponent.CreateRenderState_Concurrent"); }
	FDeferredDecalProxy * CreateSceneProxy() { return NativeCall<FDeferredDecalProxy *>(this, "UDecalComponent.CreateSceneProxy"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UDecalComponent.DestroyRenderState_Concurrent"); }
	void GetUsedMaterials(TArray<UMaterialInterface *> * OutMaterials) { NativeCall<void, TArray<UMaterialInterface *> *>(this, "UDecalComponent.GetUsedMaterials", OutMaterials); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UDecalComponent.SendRenderTransform_Concurrent"); }
	void SetDecalMaterial(UMaterialInterface * NewDecalMaterial) { NativeCall<void, UMaterialInterface *>(this, "UDecalComponent.SetDecalMaterial", NewDecalMaterial); }
	void SetMaterial(int ElementIndex, UMaterialInterface * InMaterial) { NativeCall<void, int, UMaterialInterface *>(this, "UDecalComponent.SetMaterial", ElementIndex, InMaterial); }
	void SetSortOrder(int Value) { NativeCall<void, int>(this, "UDecalComponent.SetSortOrder", Value); }
};

