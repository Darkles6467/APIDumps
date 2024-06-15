#pragma once

#include "BaseDeclarations.h"
struct FDelegateHandle
{
	enum EGenerateNewHandleType
	{
		GenerateNewHandle = 0x0,
	};

	char __padding[0x8L];
	unsigned __int64& IDField() { return *GetNativePointerField<unsigned __int64*>(this, "FDelegateHandle.ID"); }

	// Functions

};

