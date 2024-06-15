#pragma once

#include "BaseDeclarations.h"
#include "FVoicePacket.h"

struct FVoicePacketImpl : FVoicePacket
{
	char __padding[0x28L];
	TArray<unsigned char>& BufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVoicePacketImpl.Buffer"); }
	unsigned __int16& LengthField() { return *GetNativePointerField<unsigned __int16*>(this, "FVoicePacketImpl.Length"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FVoicePacketImpl.Serialize", Ar); }
	unsigned __int16 GetBufferSize() { return NativeCall<unsigned __int16>(this, "FVoicePacketImpl.GetBufferSize"); }
};

