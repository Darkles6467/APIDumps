#pragma once

#include "BaseDeclarations.h"
struct FLocalVoiceData
{
	char __padding[0x18L];
	unsigned int& VoiceRemainderSizeField() { return *GetNativePointerField<unsigned int*>(this, "FLocalVoiceData.VoiceRemainderSize"); }
	TArray<unsigned char>& VoiceRemainderField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FLocalVoiceData.VoiceRemainder"); }

	// Functions

};

