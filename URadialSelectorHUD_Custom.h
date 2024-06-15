#pragma once

#include "BaseDeclarations.h"
#include "URadialSelectorHUD.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FCustomWheelEntry.h"

struct URadialSelectorHUD_Custom : URadialSelectorHUD
{
	char __padding[0x68L];
	FCustomWheelSettings& WheelSettingsField() { return *GetNativePointerField<FCustomWheelSettings*>(this, "URadialSelectorHUD_Custom.WheelSettings"); }
	TArray<FCustomWheelEntry>& WheelEntriesField() { return *GetNativePointerField<TArray<FCustomWheelEntry>*>(this, "URadialSelectorHUD_Custom.WheelEntries"); }
	TArray<float>& WheelEntryTimersField() { return *GetNativePointerField<TArray<float>*>(this, "URadialSelectorHUD_Custom.WheelEntryTimers"); }
	float& TextScaleCountOffsetField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD_Custom.TextScaleCountOffset"); }

	// Functions

	void DrawHUD(AShooterHUD * HUD, float DeltaTime, bool bShow) { NativeCall<void, AShooterHUD *, float, bool>(this, "URadialSelectorHUD_Custom.DrawHUD", HUD, DeltaTime, bShow); }
	bool GetSelectedEntry(FCustomWheelEntry * SelectedEntry) { return NativeCall<bool, FCustomWheelEntry *>(this, "URadialSelectorHUD_Custom.GetSelectedEntry", SelectedEntry); }
	void InitializeWheel(const FCustomWheelSettings * NewWheelSettings, const TArray<FCustomWheelEntry> * NewEntries, UObject * ForcedEntryTarget) { NativeCall<void, const FCustomWheelSettings *, const TArray<FCustomWheelEntry> *, UObject *>(this, "URadialSelectorHUD_Custom.InitializeWheel", NewWheelSettings, NewEntries, ForcedEntryTarget); }
	void Reset() { NativeCall<void>(this, "URadialSelectorHUD_Custom.Reset"); }
};

