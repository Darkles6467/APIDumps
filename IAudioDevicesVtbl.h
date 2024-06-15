#pragma once

#include "BaseDeclarations.h"
struct IAudioDevicesVtbl
{
	char __padding[0x68L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "IAudioDevicesVtbl.gap8"}; }
};

