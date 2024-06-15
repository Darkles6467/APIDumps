#pragma once

#include "BaseDeclarations.h"
#include "FVoicePacket.h"

struct FVoicePacketSteam : FVoicePacket
{
	char __padding[0x28L];
	TArray<unsigned char>& BufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVoicePacketSteam.Buffer"); }
	unsigned __int16& LengthField() { return *GetNativePointerField<unsigned __int16*>(this, "FVoicePacketSteam.Length"); }

	// Functions

	unsigned __int16 GetTotalPacketSize() { return NativeCall<unsigned __int16>(this, "FVoicePacketSteam.GetTotalPacketSize"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FVoicePacketSteam.Serialize", Ar); }
};

