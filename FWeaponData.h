#pragma once

#include "BaseDeclarations.h"
struct FWeaponData
{
	char __padding[0x2cL];
	bool& bInfiniteAmmoField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bInfiniteAmmo"); }
	bool& bNeverReloadField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bNeverReload"); }
	bool& bUsesAmmoField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bUsesAmmo"); }
	bool& bDontTakeAmmoOnReloadField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bDontTakeAmmoOnReload"); }
	bool& bFullReloadFromSingleItemField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bFullReloadFromSingleItem"); }
	bool& bShowAmmoInClipAsPercentField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bShowAmmoInClipAsPercent"); }
	bool& bDontReloadEmptyClipOnEquipField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bDontReloadEmptyClipOnEquip"); }
	int& AmmoPerClipField() { return *GetNativePointerField<int*>(this, "FWeaponData.AmmoPerClip"); }
	int& AmmoPerShotField() { return *GetNativePointerField<int*>(this, "FWeaponData.AmmoPerShot"); }
	bool& bSilentOverflowReloadField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bSilentOverflowReload"); }
	float& TimeBetweenShotsField() { return *GetNativePointerField<float*>(this, "FWeaponData.TimeBetweenShots"); }
	float& NoAnimReloadDurationField() { return *GetNativePointerField<float*>(this, "FWeaponData.NoAnimReloadDuration"); }
	bool& bForceReloadDurationField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bForceReloadDuration"); }
	bool& bLoopedReloadAnimField() { return *GetNativePointerField<bool*>(this, "FWeaponData.bLoopedReloadAnim"); }
	float& ReloadDurationPerAmmoCountField() { return *GetNativePointerField<float*>(this, "FWeaponData.ReloadDurationPerAmmoCount"); }
	float& ItemDurabilityToConsumePerShotField() { return *GetNativePointerField<float*>(this, "FWeaponData.ItemDurabilityToConsumePerShot"); }
	float& HarvestResourceMultiplierField() { return *GetNativePointerField<float*>(this, "FWeaponData.HarvestResourceMultiplier"); }

	// Functions

};

