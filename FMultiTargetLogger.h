#pragma once

#include "BaseDeclarations.h"
#include "IEventLogger.h"

struct FMultiTargetLogger : IEventLogger
{
	char __padding[0x20L];
};

