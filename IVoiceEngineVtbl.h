#pragma once

#include "BaseDeclarations.h"
struct IVoiceEngineVtbl
{
	char __padding[0xa0L];
	FieldArray<_BYTE, 8> gap10Field() { return {this, "IVoiceEngineVtbl.gap10"}; }
};

