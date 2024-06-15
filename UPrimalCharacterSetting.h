#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalCharacterSetting : UObject
{
	char __padding[0x20L];
	FCharacterPreset& CharacterSettingField() { return *GetNativePointerField<FCharacterPreset*>(this, "UPrimalCharacterSetting.CharacterSetting"); }

	// Functions

};

