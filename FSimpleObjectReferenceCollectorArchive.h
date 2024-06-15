#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FSimpleObjectReferenceCollectorArchive : FArchiveUObject
{
	char __padding[0x10L];
};

