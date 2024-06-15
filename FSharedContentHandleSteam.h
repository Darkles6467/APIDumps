#pragma once

#include "BaseDeclarations.h"
#include "IOnlinePlatformData.h"

struct FSharedContentHandle : IOnlinePlatformData
{
};

struct FSharedContentHandleSteam : FSharedContentHandle
{
	char __padding[0x8L];
	const unsigned __int64& SharedContentHandleField() { return *GetNativePointerField<const unsigned __int64*>(this, "FSharedContentHandleSteam.SharedContentHandle"); }
};

