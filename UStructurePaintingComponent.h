#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct UStructurePaintingComponent : UActorComponent
{
	char __padding[0xa0L];
	TWeakObjectPtr<UPaintingTexture>& PaintingTextureField() { return *GetNativePointerField<TWeakObjectPtr<UPaintingTexture>*>(this, "UStructurePaintingComponent.PaintingTexture"); }
	int& PaintingSizeXField() { return *GetNativePointerField<int*>(this, "UStructurePaintingComponent.PaintingSizeX"); }
	int& PaintingSizeYField() { return *GetNativePointerField<int*>(this, "UStructurePaintingComponent.PaintingSizeY"); }
	TArray<FColor>& ColorTableField() { return *GetNativePointerField<TArray<FColor>*>(this, "UStructurePaintingComponent.ColorTable"); }
	int& PaintingTextureUVIndexField() { return *GetNativePointerField<int*>(this, "UStructurePaintingComponent.PaintingTextureUVIndex"); }
	int& PaintingRevisionField() { return *GetNativePointerField<int*>(this, "UStructurePaintingComponent.PaintingRevision"); }
	int& UniquePaintingIdField() { return *GetNativePointerField<int*>(this, "UStructurePaintingComponent.UniquePaintingId"); }
	FRotator& PreviewCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "UStructurePaintingComponent.PreviewCameraRotation"); }
	FVector& PreviewCameraPivotOffsetField() { return *GetNativePointerField<FVector*>(this, "UStructurePaintingComponent.PreviewCameraPivotOffset"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "UStructurePaintingComponent.PreviewCameraDistanceScaleFactor"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UStructurePaintingComponent.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UStructurePaintingComponent.PreviewCameraMaxZoomMultiplier"); }
	long double& LastStreamRequestTimeField() { return *GetNativePointerField<long double*>(this, "UStructurePaintingComponent.LastStreamRequestTime"); }
	TArray<FPaintItem>& ServerQueuedPaintItemsField() { return *GetNativePointerField<TArray<FPaintItem>*>(this, "UStructurePaintingComponent.ServerQueuedPaintItems"); }
	TArray<FPaintItem>& ClientQueuedPaintItemsField() { return *GetNativePointerField<TArray<FPaintItem>*>(this, "UStructurePaintingComponent.ClientQueuedPaintItems"); }
	bool& bIsPaintingFromLoadedFileField() { return *GetNativePointerField<bool*>(this, "UStructurePaintingComponent.bIsPaintingFromLoadedFile"); }
	int& BulkUpdatingCounterField() { return *GetNativePointerField<int*>(this, "UStructurePaintingComponent.BulkUpdatingCounter"); }

	// Functions

	void ApplyServerQueuedPaints() { NativeCall<void>(this, "UStructurePaintingComponent.ApplyServerQueuedPaints"); }
	void BeginBulkUpdates() { NativeCall<void>(this, "UStructurePaintingComponent.BeginBulkUpdates"); }
	void ClientPaint_Implementation(AShooterPlayerController * Painter, const TArray<FPaintItem> * Paints) { NativeCall<void, AShooterPlayerController *, const TArray<FPaintItem> *>(this, "UStructurePaintingComponent.ClientPaint_Implementation", Painter, Paints); }
	void DelayedTextureUpdate() { NativeCall<void>(this, "UStructurePaintingComponent.DelayedTextureUpdate"); }
	void DestroyComponent() { NativeCall<void>(this, "UStructurePaintingComponent.DestroyComponent"); }
	void EndBulkUpdates() { NativeCall<void>(this, "UStructurePaintingComponent.EndBulkUpdates"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UStructurePaintingComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FString * GetLocalSavingPath(FString * result) { return NativeCall<FString *, FString *>(this, "UStructurePaintingComponent.GetLocalSavingPath", result); }
	float GetPaintConsumptionForEachPixel() { return NativeCall<float>(this, "UStructurePaintingComponent.GetPaintConsumptionForEachPixel"); }
	bool HasPaintingTexture() { return NativeCall<bool>(this, "UStructurePaintingComponent.HasPaintingTexture"); }
	void InitForDinos() { NativeCall<void>(this, "UStructurePaintingComponent.InitForDinos"); }
	void InitializeComponent() { NativeCall<void>(this, "UStructurePaintingComponent.InitializeComponent"); }
	void OnComponentDestroyed() { NativeCall<void>(this, "UStructurePaintingComponent.OnComponentDestroyed"); }
	void OnRemovedFromCache(int PaintingId) { NativeCall<void, int>(this, "UStructurePaintingComponent.OnRemovedFromCache", PaintingId); }
	bool Paint(UPrimalInventoryComponent * InventoryComp, FItemNetID ItemId, char ColorCode, float X, float Y) { return NativeCall<bool, UPrimalInventoryComponent *, FItemNetID, char, float, float>(this, "UStructurePaintingComponent.Paint", InventoryComp, ItemId, ColorCode, X, Y); }
	UPaintingCache * PaintingCache() { return NativeCall<UPaintingCache *>(this, "UStructurePaintingComponent.PaintingCache"); }
	void RemovePaintingTexture() { NativeCall<void>(this, "UStructurePaintingComponent.RemovePaintingTexture"); }
	bool SaveLocalPainting(FString FileName, FString PaintingClass) { return NativeCall<bool, FString, FString>(this, "UStructurePaintingComponent.SaveLocalPainting", FileName, PaintingClass); }
	void SendQueuedPaintItemsToServer() { NativeCall<void>(this, "UStructurePaintingComponent.SendQueuedPaintItemsToServer"); }
	void ServerPaint(AShooterPlayerController * Painter, const TArray<FPaintItem> * Paints, bool bLastBatch, bool bFromLoadFile) { NativeCall<void, AShooterPlayerController *, const TArray<FPaintItem> *, bool, bool>(this, "UStructurePaintingComponent.ServerPaint", Painter, Paints, bLastBatch, bFromLoadFile); }
	void SetPaintingTexture(UPaintingTexture * Texture) { NativeCall<void, UPaintingTexture *>(this, "UStructurePaintingComponent.SetPaintingTexture", Texture); }
	void TryPaintExtraPaintingComponent() { NativeCall<void>(this, "UStructurePaintingComponent.TryPaintExtraPaintingComponent"); }
	void UnloadExtraPaintingComponent() { NativeCall<void>(this, "UStructurePaintingComponent.UnloadExtraPaintingComponent"); }
	void ClientPaint(AShooterPlayerController * Painter, const TArray<FPaintItem> * Paints) { NativeCall<void, AShooterPlayerController *, const TArray<FPaintItem> *>(this, "UStructurePaintingComponent.ClientPaint", Painter, Paints); }
};

