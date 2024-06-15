#pragma once

#include "BaseDeclarations.h"
struct ITargetableInterface
{
	char __padding[0x8L];

	// Functions

	int GetOriginalTargetingTeam() { return NativeCall<int>(this, "ITargetableInterface.GetOriginalTargetingTeam"); }
	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "ITargetableInterface.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	bool CanTarget(ITargetableInterface * Victim) { return NativeCall<bool, ITargetableInterface *>(this, "ITargetableInterface.CanTarget", Victim); }
	float GetBaseTargetingDesire(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>(this, "ITargetableInterface.GetBaseTargetingDesire", Attacker); }
	float GetTargetingDesirability(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>(this, "ITargetableInterface.GetTargetingDesirability", Attacker); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>(this, "ITargetableInterface.IsOfTribe", ID); }
	bool ValidatePinCode(int pinCode) { return NativeCall<bool, int>(this, "ITargetableInterface.ValidatePinCode", pinCode); }
};

