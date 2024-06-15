#pragma once

#include "BaseDeclarations.h"
#include "AGameMode.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AShooterGame_Menu : AGameMode
{
	char __padding[0x50L];
	FString& MenuMusicField() { return *GetNativePointerField<FString*>(this, "AShooterGame_Menu.MenuMusic"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGame_Menu.ActiveEvent"); }
	TArray<FActiveEventMainMenuOverride>& ActiveEventMainMenuOverridesField() { return *GetNativePointerField<TArray<FActiveEventMainMenuOverride>*>(this, "AShooterGame_Menu.ActiveEventMainMenuOverrides"); }
	bool& bPreparedMenuBGField() { return *GetNativePointerField<bool*>(this, "AShooterGame_Menu.bPreparedMenuBG"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "AShooterGame_Menu.BeginPlay"); }
	bool GetMainMenuOverrideData(FActiveEventMainMenuOverride * OverrideData) { return NativeCall<bool, FActiveEventMainMenuOverride *>(this, "AShooterGame_Menu.GetMainMenuOverrideData", OverrideData); }
	void InitGame(const FString * MapName, const FString * Options, FString * ErrorMessage) { NativeCall<void, const FString *, const FString *, FString *>(this, "AShooterGame_Menu.InitGame", MapName, Options, ErrorMessage); }
	void PlayMusic() { NativeCall<void>(this, "AShooterGame_Menu.PlayMusic"); }
	void PrepareMenuBG() { NativeCall<void>(this, "AShooterGame_Menu.PrepareMenuBG"); }
};

