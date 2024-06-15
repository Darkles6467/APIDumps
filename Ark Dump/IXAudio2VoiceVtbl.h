#pragma once

#include "BaseDeclarations.h"
struct IXAudio2VoiceVtbl
{
	char __padding[0x98L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "IXAudio2VoiceVtbl.gap8"}; }
};

