#pragma once

#include "BaseDeclarations.h"
struct IChannelConnectionState
{
	char __padding[0x8L];
};

struct ChannelConnectionState : IChannelConnectionState
{
	char __padding[0x10L];
	FieldArray<_BYTE, 1> _stateField() { return {this, "ChannelConnectionState._state"}; }
	ChannelSession * _channelSessionField() { return GetNativePointerField<ChannelSession *>(this, "ChannelConnectionState._channelSession"); }

	// Functions

};

