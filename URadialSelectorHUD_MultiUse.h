#pragma once

#include "BaseDeclarations.h"
#include "URadialSelectorHUD.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMultiUseEntry.h"

struct URadialSelectorHUD_MultiUse : URadialSelectorHUD
{
	char __padding[0x20L];
	TArray<FMultiUseEntry>& MultiUseEntriesField() { return *GetNativePointerField<TArray<FMultiUseEntry>*>(this, "URadialSelectorHUD_MultiUse.MultiUseEntries"); }
	int& NumOriginalEntriesField() { return *GetNativePointerField<int*>(this, "URadialSelectorHUD_MultiUse.NumOriginalEntries"); }
	float& TextScaleCountOffsetField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD_MultiUse.TextScaleCountOffset"); }

	// Functions

	void DrawHUD(AShooterHUD * HUD, float DeltaTime, bool bShow) { NativeCall<void, AShooterHUD *, float, bool>(this, "URadialSelectorHUD_MultiUse.DrawHUD", HUD, DeltaTime, bShow); }
	bool GetSelectedMultiUseEntry(FMultiUseEntry * SelectedEntry, bool bIncludeTimedEntries) { return NativeCall<bool, FMultiUseEntry *, bool>(this, "URadialSelectorHUD_MultiUse.GetSelectedMultiUseEntry", SelectedEntry, bIncludeTimedEntries); }
	void InitializeForMultiUse(AShooterPlayerController * ForPC, AActor * ForActor, const TArray<FMultiUseEntry> * MultiEntries) { NativeCall<void, AShooterPlayerController *, AActor *, const TArray<FMultiUseEntry> *>(this, "URadialSelectorHUD_MultiUse.InitializeForMultiUse", ForPC, ForActor, MultiEntries); }
	bool RefreshEntries(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "URadialSelectorHUD_MultiUse.RefreshEntries", ForPC); }
	void Reset() { NativeCall<void>(this, "URadialSelectorHUD_MultiUse.Reset"); }
};

