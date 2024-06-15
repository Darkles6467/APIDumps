#pragma once

#include "BaseDeclarations.h"
struct CCallbackBase
{
	char __padding[0x10L];
	char& m_nCallbackFlagsField() { return *GetNativePointerField<char*>(this, "CCallbackBase.m_nCallbackFlags"); }
	int& m_iCallbackField() { return *GetNativePointerField<int*>(this, "CCallbackBase.m_iCallback"); }
};

