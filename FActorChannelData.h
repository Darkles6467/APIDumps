#pragma once

#include "BaseDeclarations.h"
struct FActorChannelData
{
	char __padding[0x10L];
	UActorChannel * ChannelField() { return GetNativePointerField<UActorChannel *>(this, "FActorChannelData.Channel"); }
	TWeakObjectPtr<UActorChannel>& Channel_SoftField() { return *GetNativePointerField<TWeakObjectPtr<UActorChannel>*>(this, "FActorChannelData.Channel_Soft"); }

	// Functions

};

