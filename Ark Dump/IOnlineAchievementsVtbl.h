#pragma once

#include "BaseDeclarations.h"
struct IOnlineAchievementsVtbl
{
	char __padding[0x58L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "IOnlineAchievementsVtbl.gap8"}; }
};

