#pragma once

#include "BaseDeclarations.h"
#include "UChannel.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UVoiceChannel : UChannel
{
	char __padding[0x10L];

	// Functions

	void AddVoicePacket(const FVoicePacketWithFlags * VoicePacket) { NativeCall<void, const FVoicePacketWithFlags *>(this, "UVoiceChannel.AddVoicePacket", VoicePacket); }
	void CleanUp() { NativeCall<void>(this, "UVoiceChannel.CleanUp"); }
	void ReceivedBunch(FInBunch * Bunch) { NativeCall<void, FInBunch *>(this, "UVoiceChannel.ReceivedBunch", Bunch); }
	void Tick() { NativeCall<void>(this, "UVoiceChannel.Tick"); }
	FString * Describe(FString * result) { return NativeCall<FString *, FString *>(this, "UVoiceChannel.Describe", result); }
};

