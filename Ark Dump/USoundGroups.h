#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundGroups : UObject
{
	char __padding[0x60L];
	TArray<FSoundGroup>& SoundGroupProfilesField() { return *GetNativePointerField<TArray<FSoundGroup>*>(this, "USoundGroups.SoundGroupProfiles"); }

	// Functions

	const FSoundGroup * GetSoundGroup(const ESoundGroup SoundGroup) { return NativeCall<const FSoundGroup *, const ESoundGroup>(this, "USoundGroups.GetSoundGroup", SoundGroup); }
	void Initialize() { NativeCall<void>(this, "USoundGroups.Initialize"); }
};

