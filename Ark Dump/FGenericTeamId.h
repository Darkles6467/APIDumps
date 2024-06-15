#pragma once

#include "BaseDeclarations.h"
struct FGenericTeamId
{
	enum EPredefinedId
	{
		NoTeamId = 0xff,
	};

	char __padding[0x1L];
	char& TeamIDField() { return *GetNativePointerField<char*>(this, "FGenericTeamId.TeamID"); }

	// Functions

};

