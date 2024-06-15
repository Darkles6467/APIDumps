#pragma once

#include "BaseDeclarations.h"
#include "UCustomCanvasWidget.h"
#include "UButton.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USpawnMapWidget : UCustomCanvasWidget
{
	char __padding[0x68L];
	bool& bDisableMapDrawingField() { return *GetNativePointerField<bool*>(this, "USpawnMapWidget.bDisableMapDrawing"); }
	bool& bDisableMarkersAndSpawnPointsField() { return *GetNativePointerField<bool*>(this, "USpawnMapWidget.bDisableMarkersAndSpawnPoints"); }
	FName& FogOfWarTextureParameterNameField() { return *GetNativePointerField<FName*>(this, "USpawnMapWidget.FogOfWarTextureParameterName"); }
	float& TimeToUpdateTooltipForEachSpawnPointField() { return *GetNativePointerField<float*>(this, "USpawnMapWidget.TimeToUpdateTooltipForEachSpawnPoint"); }
	float& SpawnPointAreaToMapAreaPercentageField() { return *GetNativePointerField<float*>(this, "USpawnMapWidget.SpawnPointAreaToMapAreaPercentage"); }
	TSubclassOf<UUI_SpawnPoint>& SpawnPointUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_SpawnPoint>*>(this, "USpawnMapWidget.SpawnPointUITemplate"); }
	FVector2D& RegionMarkerSizeField() { return *GetNativePointerField<FVector2D*>(this, "USpawnMapWidget.RegionMarkerSize"); }
	int& SelectedSpawnRegionIndexField() { return *GetNativePointerField<int*>(this, "USpawnMapWidget.SelectedSpawnRegionIndex"); }
	FVector2D& SelectedSpawnRegionPosField() { return *GetNativePointerField<FVector2D*>(this, "USpawnMapWidget.SelectedSpawnRegionPos"); }
	bool& bIsNewCharacterSelectionField() { return *GetNativePointerField<bool*>(this, "USpawnMapWidget.bIsNewCharacterSelection"); }
	FString& BedNameFilterField() { return *GetNativePointerField<FString*>(this, "USpawnMapWidget.BedNameFilter"); }
	UUI_Spawn * SpawnUIField() { return GetNativePointerField<UUI_Spawn *>(this, "USpawnMapWidget.SpawnUI"); }

	// Functions

	void AssignSpawnUI(UPrimalUI * thePrimalUI) { NativeCall<void, UPrimalUI *>(this, "USpawnMapWidget.AssignSpawnUI", thePrimalUI); }
	void ClearSpawnPoints() { NativeCall<void>(this, "USpawnMapWidget.ClearSpawnPoints"); }
	void DrawMarkers(UPrimalUI * thePrimalUI) { NativeCall<void, UPrimalUI *>(this, "USpawnMapWidget.DrawMarkers", thePrimalUI); }
	void DrawPlayerLocation(UPrimalUI * thePrimalUI) { NativeCall<void, UPrimalUI *>(this, "USpawnMapWidget.DrawPlayerLocation", thePrimalUI); }
	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "USpawnMapWidget.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
	FVector2D * GetAverageStartPositionForRegion(FVector2D * result, int RegionIndex) { return NativeCall<FVector2D *, FVector2D *, int>(this, "USpawnMapWidget.GetAverageStartPositionForRegion", result, RegionIndex); }
	TArray<UUI_SpawnPoint *> * GetSpawnPointWidgets(TArray<UUI_SpawnPoint *> * result) { return NativeCall<TArray<UUI_SpawnPoint *> *, TArray<UUI_SpawnPoint *> *>(this, "USpawnMapWidget.GetSpawnPointWidgets", result); }
	void InitMapMaterial() { NativeCall<void>(this, "USpawnMapWidget.InitMapMaterial"); }
	void InitSpawnPoints(UPrimalUI * thePrimalUI, bool bForNewCharacter) { NativeCall<void, UPrimalUI *, bool>(this, "USpawnMapWidget.InitSpawnPoints", thePrimalUI, bForNewCharacter); }
	void SetBedNameFilter(const FString BedName) { NativeCall<void, const FString>(this, "USpawnMapWidget.SetBedNameFilter", BedName); }
	void SetSelectedSpawnRegion(int SpawnRegionIndex) { NativeCall<void, int>(this, "USpawnMapWidget.SetSelectedSpawnRegion", SpawnRegionIndex); }
};

