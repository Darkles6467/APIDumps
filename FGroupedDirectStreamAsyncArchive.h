#pragma once

#include "BaseDeclarations.h"
#include "FGroupedStreamAsyncArchive.h"
#include "FArchive.h"

struct FGroupedDirectStreamAsyncArchive : FGroupedStreamAsyncArchive
{
	char __padding[0x58L];
};

