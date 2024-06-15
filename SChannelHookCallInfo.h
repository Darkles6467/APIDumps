#pragma once

#include "BaseDeclarations.h"
struct SChannelHookCallInfo
{
	char __padding[0x38L];
	_GUID& iidField() { return *GetNativePointerField<_GUID*>(this, "SChannelHookCallInfo.iid"); }
	unsigned int& cbSizeField() { return *GetNativePointerField<unsigned int*>(this, "SChannelHookCallInfo.cbSize"); }
	_GUID& uCausalityField() { return *GetNativePointerField<_GUID*>(this, "SChannelHookCallInfo.uCausality"); }
	unsigned int& dwServerPidField() { return *GetNativePointerField<unsigned int*>(this, "SChannelHookCallInfo.dwServerPid"); }
	unsigned int& iMethodField() { return *GetNativePointerField<unsigned int*>(this, "SChannelHookCallInfo.iMethod"); }
	void * pObjectField() { return GetNativePointerField<void *>(this, "SChannelHookCallInfo.pObject"); }
};

