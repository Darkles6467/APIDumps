#pragma once

#include "BaseDeclarations.h"
struct FSoundGroup
{
	char __padding[0x20L];
	TEnumAsByte<enum ESoundGroup>& SoundGroupField() { return *GetNativePointerField<TEnumAsByte<enum ESoundGroup>*>(this, "FSoundGroup.SoundGroup"); }
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "FSoundGroup.DisplayName"); }
	float& DecompressedDurationField() { return *GetNativePointerField<float*>(this, "FSoundGroup.DecompressedDuration"); }

	// Functions

};

