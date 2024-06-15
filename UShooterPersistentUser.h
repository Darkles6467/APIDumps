#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USaveGame : UObject
{

	// Functions

};

struct UShooterPersistentUser : USaveGame
{
	char __padding[0x40L];
	int& KillsField() { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Kills"); }
	int& DeathsField() { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Deaths"); }
	int& WinsField() { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Wins"); }
	int& LossesField() { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Losses"); }
	int& BulletsFiredField() { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.BulletsFired"); }
	int& RocketsFiredField() { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.RocketsFired"); }
	int& BotsCountField() { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.BotsCount"); }
	float& GammaField() { return *GetNativePointerField<float*>(this, "UShooterPersistentUser.Gamma"); }
	float& AimSensitivityField() { return *GetNativePointerField<float*>(this, "UShooterPersistentUser.AimSensitivity"); }
	bool& bInvertedYAxisField() { return *GetNativePointerField<bool*>(this, "UShooterPersistentUser.bInvertedYAxis"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "UShooterPersistentUser.bIsDirty"); }
	FString& SlotNameField() { return *GetNativePointerField<FString*>(this, "UShooterPersistentUser.SlotName"); }
	int& UserIndexField() { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.UserIndex"); }

	// Functions

	int GetUserIndex() { return NativeCall<int>(this, "UShooterPersistentUser.GetUserIndex"); }
	bool IsAimSensitivityDirty() { return NativeCall<bool>(this, "UShooterPersistentUser.IsAimSensitivityDirty"); }
	bool IsInvertedYAxisDirty() { return NativeCall<bool>(this, "UShooterPersistentUser.IsInvertedYAxisDirty"); }
	static UShooterPersistentUser * LoadPersistentUser(FString SlotName, const int UserIndex) { return NativeCall<UShooterPersistentUser *, FString, const int>(nullptr, "UShooterPersistentUser.LoadPersistentUser", SlotName, UserIndex); }
	void SaveIfDirty() { NativeCall<void>(this, "UShooterPersistentUser.SaveIfDirty"); }
	void SavePersistentUser() { NativeCall<void>(this, "UShooterPersistentUser.SavePersistentUser"); }
	void SetToDefaults() { NativeCall<void>(this, "UShooterPersistentUser.SetToDefaults"); }
	void TellInputAboutKeybindings() { NativeCall<void>(this, "UShooterPersistentUser.TellInputAboutKeybindings"); }
};

