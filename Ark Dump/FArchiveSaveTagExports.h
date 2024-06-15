#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveSaveTagExports : FArchiveUObject
{
	char __padding[0x18L];
};

