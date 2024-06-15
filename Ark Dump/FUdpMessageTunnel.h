#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"
#include "FGuid.h"

struct FUdpMessageTunnel : FRunnable
{
	char __padding[0x148L];
	TArray<TSharedPtr<FUdpMessageTunnelConnection,0>>& ConnectionsField() { return *GetNativePointerField<TArray<TSharedPtr<FUdpMessageTunnelConnection,0>>*>(this, "FUdpMessageTunnel.Connections"); }
	FWindowsCriticalSection& CriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FUdpMessageTunnel.CriticalSection"); }
	FDateTime& CurrentTimeField() { return *GetNativePointerField<FDateTime*>(this, "FUdpMessageTunnel.CurrentTime"); }
	FTcpListener * ListenerField() { return GetNativePointerField<FTcpListener *>(this, "FUdpMessageTunnel.Listener"); }
	FIPv4Endpoint& MulticastEndpointField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FUdpMessageTunnel.MulticastEndpoint"); }
	TQueue<TSharedPtr<FUdpMessageTunnelConnection,0>,0>& PendingConnectionsField() { return *GetNativePointerField<TQueue<TSharedPtr<FUdpMessageTunnelConnection,0>,0>*>(this, "FUdpMessageTunnel.PendingConnections"); }
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FUdpMessageTunnel.Stopping"); }
	unsigned __int64& TotalInboundBytesField() { return *GetNativePointerField<unsigned __int64*>(this, "FUdpMessageTunnel.TotalInboundBytes"); }
	unsigned __int64& TotalOutboundBytesField() { return *GetNativePointerField<unsigned __int64*>(this, "FUdpMessageTunnel.TotalOutboundBytes"); }

	// Functions

	bool Connect(const FIPv4Endpoint * RemoteEndpoint) { return NativeCall<bool, const FIPv4Endpoint *>(this, "FUdpMessageTunnel.Connect", RemoteEndpoint); }
	int GetConnections(TArray<TSharedPtr<IUdpMessageTunnelConnection,0>> * OutConnections) { return NativeCall<int, TArray<TSharedPtr<IUdpMessageTunnelConnection,0>> *>(this, "FUdpMessageTunnel.GetConnections", OutConnections); }
	unsigned __int64 GetTotalInboundBytes() { return NativeCall<unsigned __int64>(this, "FUdpMessageTunnel.GetTotalInboundBytes"); }
	unsigned __int64 GetTotalOutboundBytes() { return NativeCall<unsigned __int64>(this, "FUdpMessageTunnel.GetTotalOutboundBytes"); }
	bool HandleListenerConnectionAccepted(FSocket * ClientSocket, const FIPv4Endpoint * ClientEndpoint) { return NativeCall<bool, FSocket *, const FIPv4Endpoint *>(this, "FUdpMessageTunnel.HandleListenerConnectionAccepted", ClientSocket, ClientEndpoint); }
	bool IsServerRunning() { return NativeCall<bool>(this, "FUdpMessageTunnel.IsServerRunning"); }
	void RemoveExpiredNodes(TMap<FGuid,FUdpMessageTunnel::FNodeInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0> > * Nodes) { NativeCall<void, TMap<FGuid,FUdpMessageTunnel::FNodeInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0> > *>(this, "FUdpMessageTunnel.RemoveExpiredNodes", Nodes); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FUdpMessageTunnel.Run"); }
	void StartServer(const FIPv4Endpoint * LocalEndpoint) { NativeCall<void, const FIPv4Endpoint *>(this, "FUdpMessageTunnel.StartServer", LocalEndpoint); }
	void Stop() { NativeCall<void>(this, "FUdpMessageTunnel.Stop"); }
	void StopServer() { NativeCall<void>(this, "FUdpMessageTunnel.StopServer"); }
	void TcpToUdp() { NativeCall<void>(this, "FUdpMessageTunnel.TcpToUdp"); }
	void UdpToTcp(FSocket * Socket) { NativeCall<void, FSocket *>(this, "FUdpMessageTunnel.UdpToTcp", Socket); }
	void UpdateConnections() { NativeCall<void>(this, "FUdpMessageTunnel.UpdateConnections"); }
};

