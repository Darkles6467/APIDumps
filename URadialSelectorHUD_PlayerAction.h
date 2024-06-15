#pragma once

#include "BaseDeclarations.h"
#include "URadialSelectorHUD.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct URadialSelectorHUD_PlayerAction : URadialSelectorHUD
{
	char __padding[0x68L];
	TWeakObjectPtr<AShooterCharacter>& ShooterCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "URadialSelectorHUD_PlayerAction.ShooterCharacter"); }
	TArray<TEnumAsByte<enum EPlayerActionIndex::Action>>& ActionBindingsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPlayerActionIndex::Action>>*>(this, "URadialSelectorHUD_PlayerAction.ActionBindings"); }
	TArray<int>& IntActionBindingsField() { return *GetNativePointerField<TArray<int>*>(this, "URadialSelectorHUD_PlayerAction.IntActionBindings"); }
	TArray<FName>& CategoryActionsField() { return *GetNativePointerField<TArray<FName>*>(this, "URadialSelectorHUD_PlayerAction.CategoryActions"); }
	bool& bAddUnlockableEmotesField() { return *GetNativePointerField<bool*>(this, "URadialSelectorHUD_PlayerAction.bAddUnlockableEmotes"); }
	float& TextScaleCountOffsetField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD_PlayerAction.TextScaleCountOffset"); }
	int& EmoteBind1Field() { return *GetNativePointerField<int*>(this, "URadialSelectorHUD_PlayerAction.EmoteBind1"); }
	int& EmoteBind2Field() { return *GetNativePointerField<int*>(this, "URadialSelectorHUD_PlayerAction.EmoteBind2"); }
	FString& EmoteKeyName1Field() { return *GetNativePointerField<FString*>(this, "URadialSelectorHUD_PlayerAction.EmoteKeyName1"); }
	FString& EmoteKeyName2Field() { return *GetNativePointerField<FString*>(this, "URadialSelectorHUD_PlayerAction.EmoteKeyName2"); }

	// Functions

	void DrawHUD(AShooterHUD * HUD, float DeltaTime, bool bShow) { NativeCall<void, AShooterHUD *, float, bool>(this, "URadialSelectorHUD_PlayerAction.DrawHUD", HUD, DeltaTime, bShow); }
	void InitializePlayerActionSelector(AShooterCharacter * ForCharacter, FName FilterOption) { NativeCall<void, AShooterCharacter *, FName>(this, "URadialSelectorHUD_PlayerAction.InitializePlayerActionSelector", ForCharacter, FilterOption); }
	int GetSelectedAction() { return NativeCall<int>(this, "URadialSelectorHUD_PlayerAction.GetSelectedAction"); }
};

