#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_SpawnPoint : UPrimalUI
{
	char __padding[0x58L];
	int& SpawnPointIDField() { return *GetNativePointerField<int*>(this, "UUI_SpawnPoint.SpawnPointID"); }
	UUI_SpawnPoint::SpawnPointWidgetType& typeField() { return *GetNativePointerField<UUI_SpawnPoint::SpawnPointWidgetType*>(this, "UUI_SpawnPoint.type"); }
	FName& SpawnPointImageNameField() { return *GetNativePointerField<FName*>(this, "UUI_SpawnPoint.SpawnPointImageName"); }
	UImage * SpawnPointImageField() { return GetNativePointerField<UImage *>(this, "UUI_SpawnPoint.SpawnPointImage"); }
	bool& bSpawnPointEnabledField() { return *GetNativePointerField<bool*>(this, "UUI_SpawnPoint.bSpawnPointEnabled"); }

	// Functions

	UTextBlock * GetNameLabel() { return NativeCall<UTextBlock *>(this, "UUI_SpawnPoint.GetNameLabel"); }
	void InitSpawnPoint(float x, float y, int index, float width, float height, UUI_SpawnPoint::SpawnPointWidgetType newtype) { NativeCall<void, float, float, int, float, float, UUI_SpawnPoint::SpawnPointWidgetType>(this, "UUI_SpawnPoint.InitSpawnPoint", x, y, index, width, height, newtype); }
	void SetDisplayString(FString DisplayString) { NativeCall<void, FString>(this, "UUI_SpawnPoint.SetDisplayString", DisplayString); }
	void SetMarkerColor(FLinearColor MarkerColor) { NativeCall<void, FLinearColor>(this, "UUI_SpawnPoint.SetMarkerColor", MarkerColor); }
	void SpawnPointClicked() { NativeCall<void>(this, "UUI_SpawnPoint.SpawnPointClicked"); }
	void UpdateSpawnPointState(FString DisplayString, bool bEnabled) { NativeCall<void, FString, bool>(this, "UUI_SpawnPoint.UpdateSpawnPointState", DisplayString, bEnabled); }
};

