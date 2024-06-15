#pragma once

#include "BaseDeclarations.h"
#include "FSimpleAbstractSocket.h"

struct FSimpleAbstractSocket_FMultichannelTCPSocket : FSimpleAbstractSocket
{
	char __padding[0x10L];
	FMultichannelTcpSocket * SocketField() { return GetNativePointerField<FMultichannelTcpSocket *>(this, "FSimpleAbstractSocket_FMultichannelTCPSocket.Socket"); }
	unsigned int& SendChannelField() { return *GetNativePointerField<unsigned int*>(this, "FSimpleAbstractSocket_FMultichannelTCPSocket.SendChannel"); }
	unsigned int& ReceiveChannelField() { return *GetNativePointerField<unsigned int*>(this, "FSimpleAbstractSocket_FMultichannelTCPSocket.ReceiveChannel"); }
};

