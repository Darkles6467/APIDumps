#pragma once

#include "BaseDeclarations.h"
#include "FGroupedStreamAsyncArchive.h"
#include "FArchive.h"

struct FGroupedVFSStreamAsyncArchive : FGroupedStreamAsyncArchive
{
	char __padding[0xa0L];
};

