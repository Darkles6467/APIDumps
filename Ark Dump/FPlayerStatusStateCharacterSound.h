#pragma once

#include "BaseDeclarations.h"
struct FPlayerStatusStateCharacterSound
{
	char __padding[0x10L];
	TEnumAsByte<enum EPrimalCharacterStatusState::Type>& StateTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusState::Type>*>(this, "FPlayerStatusStateCharacterSound.StateType"); }
	USoundCue * SoundToPlayField() { return GetNativePointerField<USoundCue *>(this, "FPlayerStatusStateCharacterSound.SoundToPlay"); }

	// Functions

};

