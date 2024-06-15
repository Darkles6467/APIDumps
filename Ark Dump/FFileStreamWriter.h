#pragma once

#include "BaseDeclarations.h"
#include "FFileStreamerBase.h"
#include "FArchive.h"

struct FFileStreamWriter : FFileStreamerBase
{
	char __padding[0x10L];
};

