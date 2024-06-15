#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveScriptReferenceCollector : FArchiveUObject
{
	char __padding[0x8L];
};

