#pragma once

#include "BaseDeclarations.h"
struct FOnlinePartyMember
{
	char __padding[0x28L];
	bool& IsLocalField() { return *GetNativePointerField<bool*>(this, "FOnlinePartyMember.IsLocal"); }
	FDateTime& JoinTimeField() { return *GetNativePointerField<FDateTime*>(this, "FOnlinePartyMember.JoinTime"); }
	int& DeviceGroupField() { return *GetNativePointerField<int*>(this, "FOnlinePartyMember.DeviceGroup"); }
};

