#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FFindReferencersArchive : FArchiveUObject
{
	char __padding[0xa0L];
};

