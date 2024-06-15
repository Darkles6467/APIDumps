#pragma once

#include "BaseDeclarations.h"
struct FPhysxUserData
{
	char __padding[0x10L];
	EPhysxUserDataType::Type& TypeField() { return *GetNativePointerField<EPhysxUserDataType::Type*>(this, "FPhysxUserData.Type"); }
	void * PayloadField() { return GetNativePointerField<void *>(this, "FPhysxUserData.Payload"); }
};

