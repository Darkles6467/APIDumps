#pragma once

#include "BaseDeclarations.h"
struct FLANSession
{
	char __padding[0x98L];
	int& LanAnnouncePortField() { return *GetNativePointerField<int*>(this, "FLANSession.LanAnnouncePort"); }
	int& LanGameUniqueIdField() { return *GetNativePointerField<int*>(this, "FLANSession.LanGameUniqueId"); }
	int& LanPacketPlatformMaskField() { return *GetNativePointerField<int*>(this, "FLANSession.LanPacketPlatformMask"); }
	float& LanQueryTimeoutField() { return *GetNativePointerField<float*>(this, "FLANSession.LanQueryTimeout"); }
	FLanBeacon * LanBeaconField() { return GetNativePointerField<FLanBeacon *>(this, "FLANSession.LanBeacon"); }
	ELanBeaconState::Type& LanBeaconStateField() { return *GetNativePointerField<ELanBeaconState::Type*>(this, "FLANSession.LanBeaconState"); }
	unsigned __int64& LanNonceField() { return *GetNativePointerField<unsigned __int64*>(this, "FLANSession.LanNonce"); }
	float& LanQueryTimeLeftField() { return *GetNativePointerField<float*>(this, "FLANSession.LanQueryTimeLeft"); }

	// Functions

	bool BroadcastPacket(char * Packet, int Length) { return NativeCall<bool, char *, int>(this, "FLANSession.BroadcastPacket", Packet, Length); }
	void CreateClientQueryPacket(FNboSerializeToBuffer * Packet, unsigned __int64 ClientNonce) { NativeCall<void, FNboSerializeToBuffer *, unsigned __int64>(this, "FLANSession.CreateClientQueryPacket", Packet, ClientNonce); }
	void CreateHostResponsePacket(FNboSerializeToBuffer * Packet, unsigned __int64 ClientNonce) { NativeCall<void, FNboSerializeToBuffer *, unsigned __int64>(this, "FLANSession.CreateHostResponsePacket", Packet, ClientNonce); }
	bool IsValidLanResponsePacket(const char * Packet, unsigned int Length) { return NativeCall<bool, const char *, unsigned int>(this, "FLANSession.IsValidLanResponsePacket", Packet, Length); }
	void StopLANSession() { NativeCall<void>(this, "FLANSession.StopLANSession"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FLANSession.Tick", DeltaTime); }
};

