#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveDescribeReference : FArchiveUObject
{
	char __padding[0x18L];
};

