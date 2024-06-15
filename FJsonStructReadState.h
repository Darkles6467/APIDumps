#pragma once

#include "BaseDeclarations.h"
struct FJsonStructReadState
{
	char __padding[0x18L];
	void * DataField() { return GetNativePointerField<void *>(this, "FJsonStructReadState.Data"); }
};

