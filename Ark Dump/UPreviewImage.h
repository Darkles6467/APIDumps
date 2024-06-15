#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPreviewImage : UObject
{
	char __padding[0xb8L];
	FPreviewScene * PreviewSceneField() { return GetNativePointerField<FPreviewScene *>(this, "UPreviewImage.PreviewScene"); }
	float& FOVField() { return *GetNativePointerField<float*>(this, "UPreviewImage.FOV"); }
	FVector& MeshScaleField() { return *GetNativePointerField<FVector*>(this, "UPreviewImage.MeshScale"); }
	float& LightBrightnessField() { return *GetNativePointerField<float*>(this, "UPreviewImage.LightBrightness"); }
	FRotator& LightRotationField() { return *GetNativePointerField<FRotator*>(this, "UPreviewImage.LightRotation"); }
	FRotator& MeshRotationField() { return *GetNativePointerField<FRotator*>(this, "UPreviewImage.MeshRotation"); }
	FVector& CameraLocationField() { return *GetNativePointerField<FVector*>(this, "UPreviewImage.CameraLocation"); }
	FRotator& CameraRotationField() { return *GetNativePointerField<FRotator*>(this, "UPreviewImage.CameraRotation"); }
	TEnumAsByte<enum ESkyLightSourceType>& AmbientSourceTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESkyLightSourceType>*>(this, "UPreviewImage.AmbientSourceType"); }
	FColor& AmbientLightColorField() { return *GetNativePointerField<FColor*>(this, "UPreviewImage.AmbientLightColor"); }
	float& AmbientBrightnessField() { return *GetNativePointerField<float*>(this, "UPreviewImage.AmbientBrightness"); }
	UWorld * GameWorldField() { return GetNativePointerField<UWorld *>(this, "UPreviewImage.GameWorld"); }
	UWorld * PreviewWorldField() { return GetNativePointerField<UWorld *>(this, "UPreviewImage.PreviewWorld"); }
	UDirectionalLightComponent * DirctionalLightField() { return GetNativePointerField<UDirectionalLightComponent *>(this, "UPreviewImage.DirctionalLight"); }
	USkyLightComponent * SkyLightField() { return GetNativePointerField<USkyLightComponent *>(this, "UPreviewImage.SkyLight"); }
	ULineBatchComponent * LineBatcherField() { return GetNativePointerField<ULineBatchComponent *>(this, "UPreviewImage.LineBatcher"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UPreviewImage.BeginDestroy"); }
	void CleanUp() { NativeCall<void>(this, "UPreviewImage.CleanUp"); }
	void Init(UWorld * World) { NativeCall<void, UWorld *>(this, "UPreviewImage.Init", World); }
	void SetPreviewMesh(UMeshComponent * Mesh) { NativeCall<void, UMeshComponent *>(this, "UPreviewImage.SetPreviewMesh", Mesh); }
	void Update() { NativeCall<void>(this, "UPreviewImage.Update"); }
};

