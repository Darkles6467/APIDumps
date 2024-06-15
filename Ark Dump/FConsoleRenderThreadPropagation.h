#pragma once

#include "BaseDeclarations.h"
struct IConsoleThreadPropagation
{
	char __padding[0x8L];
};

struct FConsoleRenderThreadPropagation : IConsoleThreadPropagation
{
};

