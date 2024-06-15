#pragma once

#include "BaseDeclarations.h"
struct CGameID
{
	enum EGameIDType
	{
		k_EGameIDTypeApp = 0x0,
		k_EGameIDTypeGameMod = 0x1,
		k_EGameIDTypeShortcut = 0x2,
		k_EGameIDTypeP2P = 0x3,
	};

	char __padding[0x8L];
};

