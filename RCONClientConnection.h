#pragma once

#include "BaseDeclarations.h"
struct RCONClientConnection
{
	char __padding[0x50L];
	UShooterCheatManager * CheatManagerField() { return GetNativePointerField<UShooterCheatManager *>(this, "RCONClientConnection.CheatManager"); }
	bool& IsAuthenticatedField() { return *GetNativePointerField<bool*>(this, "RCONClientConnection.IsAuthenticated"); }
	bool& IsClosedField() { return *GetNativePointerField<bool*>(this, "RCONClientConnection.IsClosed"); }
	TArray<signed char>& DataBufferField() { return *GetNativePointerField<TArray<signed char>*>(this, "RCONClientConnection.DataBuffer"); }
	unsigned int& CurrentPacketSizeField() { return *GetNativePointerField<unsigned int*>(this, "RCONClientConnection.CurrentPacketSize"); }
	long double& LastReceiveTimeField() { return *GetNativePointerField<long double*>(this, "RCONClientConnection.LastReceiveTime"); }
	long double& LastSendKeepAliveTimeField() { return *GetNativePointerField<long double*>(this, "RCONClientConnection.LastSendKeepAliveTime"); }
	FString& ServerPasswordField() { return *GetNativePointerField<FString*>(this, "RCONClientConnection.ServerPassword"); }

	// Functions

	void Close() { NativeCall<void>(this, "RCONClientConnection.Close"); }
	void ProcessRCONPacket(RCONPacket * Packet, UWorld * InWorld) { NativeCall<void, RCONPacket *, UWorld *>(this, "RCONClientConnection.ProcessRCONPacket", Packet, InWorld); }
	void SendMessageW(int Id, int Type, const FString * OutGoingMessage) { NativeCall<void, int, int, const FString *>(this, "RCONClientConnection.SendMessageW", Id, Type, OutGoingMessage); }
	void Tick(long double WorldTime, UWorld * InWorld) { NativeCall<void, long double, UWorld *>(this, "RCONClientConnection.Tick", WorldTime, InWorld); }
};

