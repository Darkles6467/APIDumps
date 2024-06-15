#pragma once

#include "BaseDeclarations.h"
struct ISlateFontTexture
{
	char __padding[0x8L];
};

struct FSlateFontAtlas : ISlateFontTexture
{
	char __padding[0x38L];
};

