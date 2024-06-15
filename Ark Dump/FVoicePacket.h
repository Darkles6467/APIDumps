#pragma once

#include "BaseDeclarations.h"
struct FVoicePacket
{
	char __padding[0x10L];
	char& bUseSuperRangeField() { return *GetNativePointerField<char*>(this, "FVoicePacket.bUseSuperRange"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FVoicePacket.Serialize", Ar); }
};

