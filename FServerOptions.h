#pragma once

#include "BaseDeclarations.h"
struct FServerOptions
{
	char __padding[0x2a0L];
	FString& MaxStructuresInRangeField() { return *GetNativePointerField<FString*>(this, "FServerOptions.MaxStructuresInRange"); }
	FString& DifficultyOffsetField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DifficultyOffset"); }
	FString& GlobalVoiceChatField() { return *GetNativePointerField<FString*>(this, "FServerOptions.GlobalVoiceChat"); }
	FString& ProximityChatField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ProximityChat"); }
	FString& NoTributeDownloadsField() { return *GetNativePointerField<FString*>(this, "FServerOptions.NoTributeDownloads"); }
	FString& AllowThirdPersonPlayerField() { return *GetNativePointerField<FString*>(this, "FServerOptions.AllowThirdPersonPlayer"); }
	FString& AlwaysNotifyPlayerLeftField() { return *GetNativePointerField<FString*>(this, "FServerOptions.AlwaysNotifyPlayerLeft"); }
	FString& DontAlwaysNotifyPlayerJoinedField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DontAlwaysNotifyPlayerJoined"); }
	FString& ServerHardcoreField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ServerHardcore"); }
	FString& ServerPVEField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ServerPVE"); }
	FString& ServerCrosshairField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ServerCrosshair"); }
	FString& ServerForceNoHUDField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ServerForceNoHUD"); }
	FString& ShowMapPlayerLocationField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ShowMapPlayerLocation"); }
	FString& ServerPasswordField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ServerPassword"); }
	FString& ServerAdminPasswordField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ServerAdminPassword"); }
	FString& SpectatorPasswordField() { return *GetNativePointerField<FString*>(this, "FServerOptions.SpectatorPassword"); }
	FString& DayCycleSpeedScaleField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DayCycleSpeedScale"); }
	FString& DayTimeSpeedScaleField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DayTimeSpeedScale"); }
	FString& NightTimeSpeedScaleField() { return *GetNativePointerField<FString*>(this, "FServerOptions.NightTimeSpeedScale"); }
	FString& DinoDamageMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DinoDamageMultiplier"); }
	FString& PlayerDamageMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.PlayerDamageMultiplier"); }
	FString& StructureDamageMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.StructureDamageMultiplier"); }
	FString& PlayerResistanceMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.PlayerResistanceMultiplier"); }
	FString& DinoResistanceMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DinoResistanceMultiplier"); }
	FString& StructureResistanceMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.StructureResistanceMultiplier"); }
	FString& XPMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.XPMultiplier"); }
	FString& TamingSpeedMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.TamingSpeedMultiplier"); }
	FString& HarvestAmountMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.HarvestAmountMultiplier"); }
	FString& PlayerCharacterWaterDrainMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.PlayerCharacterWaterDrainMultiplier"); }
	FString& PlayerCharacterFoodDrainMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.PlayerCharacterFoodDrainMultiplier"); }
	FString& DinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DinoCharacterFoodDrainMultiplier"); }
	FString& PlayerCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.PlayerCharacterStaminaDrainMultiplier"); }
	FString& DinoCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DinoCharacterStaminaDrainMultiplier"); }
	FString& PlayerCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.PlayerCharacterHealthRecoveryMultiplier"); }
	FString& DinoCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DinoCharacterHealthRecoveryMultiplier"); }
	FString& DinoCountMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DinoCountMultiplier"); }
	FString& HarvestHealthMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.HarvestHealthMultiplier"); }
	FString& PvEStructureDecayPeriodMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.PvEStructureDecayPeriodMultiplier"); }
	FString& ResourcesRespawnPeriodMultiplierField() { return *GetNativePointerField<FString*>(this, "FServerOptions.ResourcesRespawnPeriodMultiplier"); }
	FString& EnablePvPGammaField() { return *GetNativePointerField<FString*>(this, "FServerOptions.EnablePvPGamma"); }
	FString& DisableStructureDecayPvEField() { return *GetNativePointerField<FString*>(this, "FServerOptions.DisableStructureDecayPvE"); }
	FString& AllowFlyerCarryPvEField() { return *GetNativePointerField<FString*>(this, "FServerOptions.AllowFlyerCarryPvE"); }

	// Functions

	FServerOptions * operator=(const FServerOptions * __that) { return NativeCall<FServerOptions *, const FServerOptions *>(this, "FServerOptions.operator=", __that); }
};

