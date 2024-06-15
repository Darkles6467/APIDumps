#pragma once

#include "BaseDeclarations.h"
struct FOpenGLBindlessSamplerInfo
{
	char __padding[0x8L];
	unsigned int& SlotField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLBindlessSamplerInfo.Slot"); }
	unsigned int& HandleField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLBindlessSamplerInfo.Handle"); }
};

